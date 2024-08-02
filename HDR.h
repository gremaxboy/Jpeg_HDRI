#ifndef _HDR_H
#define _HDR_H
#include <opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include<opencv2/features2d/features2d.hpp>
#include <opencv2/photo.hpp>
#include <opencv2/stitching.hpp>
#include<vector>
#include<iostream>
#include <io.h>  
#include "MultiFusion.h"
#include "stdafx.h"
#include<conio.h>
#include <math.h>
#include<direct.h>
using namespace cv;
using namespace std;
template <class Type>
Type stringToNum(const string& str)
{
	istringstream iss(str);
	Type num;
	iss >> num;
	return num;
	//dfsdfsd
}
template<typename T> string toString(const T& t)
{
	ostringstream oss;  //
	oss << t;             //
	return oss.str();
}
//IMAGE_SEARCH_PATH//IMAGE_SEARCH_PATH="inputimage/8/*.bmp"
//ReadSequenceImage:
//char * IMAGE_SEARCH_PATH 3
void ReadSequenceImage( vector<Mat>&images);
#endif
//MAT.TYPE=1:8UC1 5:32FC1