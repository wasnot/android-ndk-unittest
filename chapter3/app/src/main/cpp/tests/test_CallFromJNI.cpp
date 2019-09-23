#include <jni.h>
#include "../CallFromJNI.h"

extern "C" JNIEXPORT void JNICALL
Java_com_example_myndk_TestBridge_callInstanceMethod(
        JNIEnv *env,
        jobject , jobject jActivity) {
    CallFromJNI::callInstanceMethod(env, jActivity);
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_myndk_TestBridge_callStaticMethod(
        JNIEnv *env,
        jobject) {
    CallFromJNI::callStaticMethod(env);
}