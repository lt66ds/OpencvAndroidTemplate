#include <ee_nju_opencv_NativeMethod.h>
#include <opencv2/opencv.hpp>

JNIEXPORT void JNICALL Java_ee_nju_opencv_NativeMethod_processFrame
  (JNIEnv *, jobject, jlong addrInRGBA, jlong addrOut) {
    cv::Mat* pMatInRGBA = (cv::Mat*)addrInRGBA;
    cv::Mat* pMatOut = (cv::Mat*)addrOut;
	
    cv::Mat imageGray;
	cv::Mat reMat;
	
	//cv::resize(*pMatInRGBA, reMat, cv::Size(), 0.5, 0.5);
    cv::cvtColor(*pMatInRGBA, imageGray, CV_RGBA2GRAY);
	//cv::flip(*imageGray,*imageGray,0);
    cv::Canny(imageGray, *pMatOut, 30, 90);
	
	//delete imageGray;
	
}