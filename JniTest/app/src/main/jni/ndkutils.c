#include <jni.h>
JNIEXPORT jstring JNICALL Java_com_gjj_main_NdkUtils_getNdkString(JNIEnv *env, jobject obj) {
     return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
}

JNIEXPORT jstring JNICALL Java_com_gjj_main_NdkUtils_getNdkTitle(JNIEnv *env, jobject obj) {
     return (*env)->NewStringUTF(env,"haha title");
}