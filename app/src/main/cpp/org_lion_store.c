//
// Created by lion on 17-6-17.
//
#include <jni.h>
#include "Store.h"

static Store mStore = {{}, 0};

JNIEXPORT jint JNICALL Java_org_lion_ndstore_Store_getInteger
        (JNIEnv *pEnv, jobject pThis, jstring pKey) {
    StoreEntry *lEntry = findEntry(pEnv, &mStore, pKey, NULL);
    if (isEntryValid(pEnv,lEntry,StoreType_Integer)){
        return lEntry->mValue.mInteger;
    }
    return 0;
}

JNIEXPORT void JNICALL Java_org_lion_ndstore_Store_setInteger
        (JNIEnv *, jobject, jstring, jint);

JNIEXPORT jstring JNICALL Java_org_lion_ndstore_Store_getString
        (JNIEnv *, jobject, jstring);

JNIEXPORT void JNICALL Java_org_lion_ndstore_Store_setString
        (JNIEnv *, jobject, jstring, jstring);