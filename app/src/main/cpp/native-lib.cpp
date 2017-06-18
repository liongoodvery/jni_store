#include <jni.h>
#include <string>
#include "utils_native.h"


extern "C" {

JNIEXPORT jstring JNICALL
Java_org_lion_ndstore_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    LOGI("hello_from logcat");
    return env->NewStringUTF(hello.c_str());
}
}


