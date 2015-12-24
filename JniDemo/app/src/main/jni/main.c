//
// Created by Administrator on 2015/12/2

#include <jni.h>
#include <android/log.h>

#ifndef LOG_TAG
#define LOG_TAG "ANDROID_LAB"
#define LOGE(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG,__VA_ARGS__)
#endif

#ifndef _Included_com_haozhang_jni_demo_MainActivity
#define _Included_com_haozhang_jni_demo_MainActivity
#ifdef __cplusplus

extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_com_haozhang_jni_1demo_MainActivity_printJni(JNIEnv * env,
                                                                            jobject jObj,
                                                                            jstring str) {
    LOGE("main.c log",str);
    return str;
}

#ifdef __cplusplus
}
#endif
#endif