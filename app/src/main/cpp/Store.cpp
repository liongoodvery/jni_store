//
// Created by lion on 17-6-17.
//
#undef __cplusplus

#include "Store.h"
#include <string.h>

int32_t isEntryValid(JNIEnv *pEnv, StoreEntry *pEntry, StoreType pType) {
    if (pEntry != NULL && pEntry->mType == pType) {
        return 1;
    }
    return 0;
}

StoreEntry *allocateEntry(JNIEnv *pEnv, Store *pStore, jstring pKey) {
    int32_t lError = 0;
    StoreEntry *lEntry = findEntry(pEnv, pStore, pKey, &lError);
    if (lEntry != NULL) {
        releaseEntryValue(pEnv, lEntry);
    } else if (!lEntry) {
        if (pStore->mLength >= STORE_MAX_CAPACITY) {
            return NULL;
        }

        lEntry = pStore->mEntries + pStore->mLength;

        const char *lKeyTmp =
                (*pEnv)->GetStringUTFChars(pEnv, pKey, NULL);
        if (lKeyTmp == NULL) {
            return NULL;
        }
        lEntry->mKey = (char *) malloc(strlen(lKeyTmp));
        strcpy(lEntry->mKey, lKeyTmp);
        (*pEnv)->ReleaseStringUTFChars(pEnv, pKey, lKeyTmp);
        ++pStore->mLength;
    }
    return lEntry;
}

StoreEntry *findEntry(JNIEnv *pEnv, Store *pStore, jstring pKey, int32_t *pError);

void releaseEntryValue(JNIEnv *pEnv, StoreEntry *pEntry);

