//
// Created by lion on 17-6-17.
//

#ifndef NDSTORE_STORE_H
#define NDSTORE_STORE_H

#include <jni.h>
#include <stdint.h>

#define STORE_MAX_CAPACITY 16
typedef enum {
    StoreType_Integer, StoreType_String
} StoreType;

typedef union {
    int32_t mInteger;
    char *mString;
} StoreValue;


typedef struct {
    char *mKey;
    StoreType mType;
    StoreValue mValue;
} StoreEntry;

typedef struct {
    StoreEntry mEntries[STORE_MAX_CAPACITY];
    int32_t mLength;
} Store;

int32_t isEntryValid(JNIEnv *pEnv, StoreEntry *pEntry, StoreType pType);

StoreEntry *allocateEntry(JNIEnv *pEnv, Store *pStore, jstring pKey);

StoreEntry *findEntry(JNIEnv *pEnv, Store *pStore, jstring pKey, int32_t *pError);

void releaseEntryValue(JNIEnv *pEnv, StoreEntry *pEntry);

#endif //NDSTORE_STORE_H
