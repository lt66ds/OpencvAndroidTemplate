LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

include F:\adt-bundle-windows-x86_64-20140624\OpenCV-2.4.10-android-sdk\sdk\native\jni\OpenCV.mk

LOCAL_MODULE    := processframe 
LOCAL_SRC_FILES := processframe.cpp
LOCAL_LDLIBS +=  -llog -ldl

include $(BUILD_SHARED_LIBRARY)