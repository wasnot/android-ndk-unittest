#include <jni.h>
#include <string>
#include "functions.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = functions::createString();
    return env->NewStringUTF(hello.c_str());
}