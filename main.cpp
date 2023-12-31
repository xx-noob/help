﻿#include<opencv2/opencv.hpp>
#include<iostream>
#include<cvdemo.h>

using namespace cv;
using namespace std;

int main(int argc,char** argv)
{
	Mat img = imread("D:\\System default\\Image\\wpcache\\1.jpg");

	if (img.empty())
	{
		cout << "can't find image" << endl;
		return -1;
	}
	Mat img_gray;
	cvtColor(img, img_gray, COLOR_BGR2GRAY);
	cout << "img type: " << img.type() << endl;
	cout << "img_gray type: " << img_gray.type() << endl;

	/*namedWindow("输入图像", WINDOW_FREERATIO);
	imshow("输入图像", img);*/

	/*Cvdemo ob;
	ob.guassnoise_demo(img);*/

	waitKey(0);
	destroyAllWindows();
	return 0;
}