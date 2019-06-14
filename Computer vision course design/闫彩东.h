#pragma once

#ifndef 闫彩东_H_
#define 闫彩东_H_
#include"Head.h"
using namespace std;
using namespace cv;

class yancaidong{
public:
	yancaidong(Mat img){
		image = img(Rect(286, 123, 120, 257));
		hight = 0;
		weight = 0;
	}
	void work();
	void showresult() {
		cout << "食指长度：" << hight * Pixellen << "cm\t宽度:" << weight * Pixellen << "cm" << endl;
	}
private:
	Mat image;
	int size = 0;
	int hight, weight;
	Point point[10000];
};


#endif // 闫彩东_H_

