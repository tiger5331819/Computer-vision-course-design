#pragma once
#include"Head.h"
using namespace std;
using namespace cv;
#ifndef 张淇_H_
class zhangqi
{
	Mat image;
	int size = 0;
	int h, w;
	Point point[10000];
public:
	zhangqi(Mat img)
	{
		image = img(Rect( 385, 303, 90, 313));
		h = 0;
		w = 0;
	}
	void work();
	void showresult()
	{
		cout << "小拇指长度：" << h * Pixellen << "cm	宽度:" << w * Pixellen << "cm" << endl;
	}
};
#endif
