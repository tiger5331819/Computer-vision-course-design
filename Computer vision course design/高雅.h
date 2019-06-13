#pragma once
#include"Head.h"
#include <thread>
using namespace std;
using namespace cv;
#ifndef 高雅_H_
class gaoya
{
	Mat image;//图像
	int width;
public:
	gaoya(Mat im)
	{
		image = im;
		width = 0;
	}
	void work();//对外工作接口
	void show()//输出接口
	{
		cout << "手腕长度：" <<width * Pixellen << "cm\t"  << endl;
	}
};
#endif // !高雅_H_
