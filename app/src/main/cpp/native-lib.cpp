#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_paperfish_aicamera_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

/*
extern "C"
JNIEXPORT jstring JNICALL
JAVA_com_paperfish_aicamera_MainActivity_initSSD(JNIEnv *env,
                                                 jobject ){

      Caffe::Detector detector;
}*/