#pragma once
#include"Head.h"
#include <thread>
using namespace std;
using namespace cv;
#ifndef 苏琥元_H_
class suhuyuan
{
	Mat image;//图像
	int size=0;//像素点个数
	int hight, weight;//高和宽
	Point point[10000];//像素点数组
public:
	suhuyuan(Mat img)//构造函数，初始化图像和高、宽
	{
		image = img(Rect(195,60,85,265));//图像裁剪
		hight = 0;
		weight = 0;
	}
	void work();//对外工作接口
	void showresult()//输出接口
	{
		cout << "中指长度：" << hight * Pixellen<<"cm\t宽度:"<< weight *Pixellen<<"cm" << endl;
	}
};
#endif // !苏琥元_H_

