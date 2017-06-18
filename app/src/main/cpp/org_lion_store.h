//
// Created by lion on 17-6-17.
//
#include <jni.h>
#ifndef NDSTORE_ORG_LION_STORE_H
#define NDSTORE_ORG_LION_STORE_H
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org.lion.ndstore
 * Method:    getInteger
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_lion_ndstore_Store_getInteger
        (JNIEnv *, jobject, jstring);

/*
 * Class:     org.lion.ndstore
 * Method:    setInteger
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_lion_ndstore_Store_setInteger
(JNIEnv *, jobject, jstring, jint);

/*
 * Class:     org.lion.ndstore
 * Method:    getString
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_lion_ndstore_Store_getString
        (JNIEnv *, jobject, jstring);

/*
 * Class:     org.lion.ndstore
 * Method:    setString
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_lion_ndstore_Store_setString
(JNIEnv *, jobject, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif //NDSTORE_ORG_LION_STORE_H
