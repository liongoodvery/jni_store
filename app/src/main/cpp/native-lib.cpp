#include <jni.h>
#include <string>
#include "utils_native.h"


extern "C" {
JNIEXPORT jint JNICALL
Java_org_lion_ndstore_Store_getInteger(JNIEnv *env, jobject instance, jstring pKey_) {
    const char *pKey = env->GetStringUTFChars(pKey_, 0);

    // TODO

    env->ReleaseStringUTFChars(pKey_, pKey);
}

JNIEXPORT jstring JNICALL
Java_org_lion_ndstore_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    LOGI("hello_from logcat");
    return env->NewStringUTF(hello.c_str());
}
}


