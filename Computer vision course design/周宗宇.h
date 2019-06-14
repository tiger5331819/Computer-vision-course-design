#pragma once
#include"Head.h"
#include <thread>
using namespace std;
using namespace cv;
#ifndef 周宗宇_H_ 
class zhouzongyu
{
	Mat image;
	int size = 0;
	int h, w;
	Point point[10000];
public:
	zhouzongyu(Mat img)
	{
		image = img(Rect(100, 100, 95, 237));
		h = 0;
		w = 0;
	}
	void work();
	void showresult()
	{
		cout << "无名指长度：" << h * Pixellen << "cm\t宽度:" << w * Pixellen << "cm" << endl;
	}
};
#endif // !周宗宇_H_