#pragma once
#include"Head.h"
#include <thread>
using namespace std;
using namespace cv;
#ifndef 张衍希_H_
class zhangyanxi
{
	Mat image;//图像
	int size = 0;//像素点个数
	int weight;//高和宽
	Point point[10000];//像素点数组
public:
	zhangyanxi(Mat img)//构造函数，初始化图像和高、宽
	{
		image = img(Rect(36, 390, 330, 10));//图像裁剪
		weight = 0;
	}
	void worker();//对外工作接口
	void Print()//输出接口
	{
		cout << "手掌宽度："<< weight * Pixellen << "cm" << endl;
	}
};
#endif // !张衍希_H_
