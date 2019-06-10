#pragma once
#include"Head.h"
#include <thread>
using namespace std;
using namespace cv;
#ifndef 苏琥元_H
class suhuyuan
{
	Mat image;
	int size=0;
	int hight, weight;
	Point point[10000];
public:
	suhuyuan(Mat img)
	{
		image = img(Rect(195,60,85,265));
		hight = 0;
		weight = 0;
	}
	void work();
	void showresult()
	{
		cout << "中指长度：" << hight * Pixellen<<"cm\t宽度:"<< weight *Pixellen<<"cm" << endl;
	}
};
#endif // !苏琥元_H

