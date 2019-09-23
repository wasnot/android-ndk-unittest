#include <jni.h>
#include <string>
#include "CallFromJNI.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject jActivity) {
    std::string hello = "Hello from C++";

    CallFromJNI::callStaticMethod(env);
    CallFromJNI::callInstanceMethod(env, jActivity);

    return env->NewStringUTF(hello.c_str());
}