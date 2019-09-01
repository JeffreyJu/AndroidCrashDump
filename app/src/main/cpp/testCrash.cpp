//
// Created by Jeffrey on 2019/9/1.
//

#include <stdio.h>
#include <jni.h>


void Crash() {
    volatile int *a = (int *) (NULL);
    *a = 1;
}

extern "C"
JNIEXPORT void JNICALL
Java_com_rikky_androidcrashdump_MainActivity_testCrash(JNIEnv *env, jclass type) {

    // TODO
    Crash();

}