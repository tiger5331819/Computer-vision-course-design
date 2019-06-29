#include "张淇.h"
static bool Compare(int a, int b)
{
	return a > b;
}
//寻找x轴上的像素点的x坐标并计算出宽

static int findX(Point* p, int size)
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
		if (x[i] < min && x[i] != 0)min = x[i];
	}
	sort(x, x + size, Compare);
	return x[0] - min;
}
//寻找y轴上的像素点的y坐标并计算出高

static int findY(Point* p, int size)
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

void zhangqi::work()
{
	Mat dst, final;
	cvtColor(image, dst, COLOR_BGR2GRAY);
	blur(dst, dst, Size(3, 3));
	Canny(dst, final, 80, 160, 3);


	vector<vector<Point>> Contours;
	vector<Vec4i> Hierarchy;
	findContours(final, Contours, Hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
	
	int flag = 0;
	for (int i = 0; i < Contours.size(); i++)
	{
		if (Contours[i].size() > size) { size = Contours[i].size(); flag = i; }
	}
	for (int i = 0; i < size; i++)
	{
		point[i] = Contours[flag][i];
	}
	w = findX(point, size);
	h = findY(point, size);
}