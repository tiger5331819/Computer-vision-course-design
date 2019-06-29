#pragma once

#ifndef WENQIFAN_H_
#define WENQIFAN_H_

#include"Head.h"

using namespace std;
using namespace cv;

class wenqifan {
public:
	wenqifan(Mat img) {
		image = img(Rect(332, 385, 93, 56));
	}
	void work();
	void showresult() {
		cout << "»¢¿Ú½Ç¶ÈÓàÏÒÖµ£º" << cos << endl;
	}
private:
	Mat image;
	size_t size = 0;
	Point xmin, xmax, ymax;
	double cos;
	Point point[10000];
};

#endif // WENQIFAN_H_
