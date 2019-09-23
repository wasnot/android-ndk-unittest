//
// Created by akihiro.aida on 2019-09-01.
//

#ifndef MYNDK_3_CALLFROMJNI_H
#define MYNDK_3_CALLFROMJNI_H

#include <jni.h>

class CallFromJNI {
public:
    static void callInstanceMethod(JNIEnv *, jobject);
    static void callStaticMethod(JNIEnv*);
};


#endif //MYNDK_3_CALLFROMJNI_H
