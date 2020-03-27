#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main() {


	VideoCapture cap(0);


	while (1)
	{
		Mat InMat;
		Mat OutMat;
		cap >> InMat;
		medianBlur(InMat, OutMat,5);
		imshow("InMat", InMat);
		imshow("OutMat", OutMat);

		waitKey(30);

	}
}