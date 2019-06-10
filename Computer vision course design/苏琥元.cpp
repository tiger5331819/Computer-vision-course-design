#include "苏琥元.h"

bool Compare(int a, int b)
{
	return a > b;
}
int findX(Point* p,int size)
{
	int x[3000];
	int min;
	for (int i = 0; i < size; i++)
	{
		x[i] = p[i].x;
	}
	min = x[0];
	for (int i = 1; i < size; i++)
	{
		if (x[i] < min&&x[i]!=0)min = x[i];
	}
	sort(x, x + size, Compare);
	return x[0] - min;
}
int findY(Point* p, int size)
{
	int x[3000];
	int min;
	for (int i = 0; i < size; i++)
	{
		x[i] = p[i].y;
	}
	min = x[0];
	for (int i = 1; i < size; i++)
	{
		if (x[i] < min && x[i] != 0)min = x[i];
	}
	sort(x, x + size, Compare);
	return x[0] - min;
}
void suhuyuan::work()
{
	Mat dst, final;
	cvtColor(image, dst, COLOR_BGR2GRAY);
	blur(dst, dst, Size(3, 3));
	Canny(dst, final, 80, 160, 3);

	vector<vector<Point>> Contours;
	vector<Vec4i> Hierarchy;
	findContours(final, Contours, Hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
	Mat drawing = Mat::zeros(final.size(), CV_8UC3);
	for (int i = 0; i < Contours.size(); i++)
	{
		Scalar color = Scalar(255,255,255);//任意值
		drawContours(drawing, Contours, 2, color, 3, 8, Hierarchy, 0, Point());
	}

	int flag=0;
	for (int i = 0; i < Contours.size(); i++)
	{
		if (Contours[i].size() > size) { size = Contours[i].size(); flag = i; }
	}
	for (int i = 0; i < size; i++) 
	{ 
		point[i] = Contours[flag][i];
	}
	hight = findX(point,size);
	weight = findY(point, size);

	imshow("test", drawing);
}

