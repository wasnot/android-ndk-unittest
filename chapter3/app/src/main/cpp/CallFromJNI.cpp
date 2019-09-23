//
// Created by akihiro.aida on 2019-09-01.
//
#include "CallFromJNI.h"

void CallFromJNI::callInstanceMethod(JNIEnv *env, jobject jActivity) {
    jclass mainActivityClass = env->FindClass("com/example/myndk/MainActivity");
    if (mainActivityClass == nullptr)
        return;

    jmethodID methodId = env->GetMethodID(mainActivityClass, "callableMethod", "()V");
    if (methodId == nullptr)
        return;
    env->CallVoidMethod(jActivity, methodId);
}

void CallFromJNI::callStaticMethod(JNIEnv *env) {
    jclass mainActivityClass = env->FindClass("com/example/myndk/MainActivity");
    if (mainActivityClass == nullptr)
        return;

    jmethodID methodId = env->GetStaticMethodID(mainActivityClass, "callableStaticMethod", "()V");
    if (methodId == nullptr)
        return;

    env->CallStaticVoidMethod(mainActivityClass, methodId);
}