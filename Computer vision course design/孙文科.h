#pragma once
#include"Head.h"
using namespace std;
using namespace cv;
#ifndef 孙文科_H_
class sunwenke
{
	Mat image;//图像
	int size = 0;//像素点个数
	int Hight, Weight;//高和宽
	Point RectPoint;
	Point point[40000];//像素点数组
public:
	sunwenke(Mat img)//构造函数，初始化图像和高、宽
	{
		RectPoint=Point(150, 218);
		image = img(Rect(380,330,RectPoint.x,RectPoint.y));//图像裁剪
		Hight = 0;
		Weight = 0;
	}
	void work();//对外工作接口
	void showresult()//输出接口
	{
		cout << "大拇指长度：" << Hight * Pixellen << "cm\t宽度:" << Weight * Pixellen << "cm" << endl;
	}
};
#endif // !孙文科_H_
