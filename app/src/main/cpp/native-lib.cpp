#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_framework_player_JNITest_stringFromJNI( JNIEnv *env, jobject obj) {
    std::string hello = "Hello from C++";
    jstring str= env->NewStringUTF(hello.c_str());
    return str;
}
