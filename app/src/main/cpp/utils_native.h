//
// Created by lion on 17-6-17.
//

#ifndef NATIVE_UTILS_TAG
#define NATIVE_UTILS_TAG "====_native"
#endif

#ifndef NDSTORE_UTILS_NATIVE_H
#define NDSTORE_UTILS_NATIVE_H

#include <android/log.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, NATIVE_UTILS_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, NATIVE_UTILS_TAG, __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, NATIVE_UTILS_TAG, __VA_ARGS__))

#endif //NDSTORE_UTILS_NATIVE_H
