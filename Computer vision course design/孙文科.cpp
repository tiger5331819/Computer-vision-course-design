#include "кОнд©ф.h"

inline bool Compare(int a, int b)
{
	return a < b;
}

inline int findX(Point* p, int size,Point pointy)
{
	int x[3000];
	int min,ymin;
	for (int i = 0; i < size; i++)
	{
		x[i] = p[i].x;
		if (p[i].y == pointy.y-10) ymin = p[i].x;
	}
	sort(x, x + size, Compare);
	x[0] -= ymin;
	return sqrt(((x[0]*x[0])+(ymin*ymin)));
}

inline int findY(Point* p, int size)
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

void sunwenke::work()
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

	Weight = findX(point, size,RectPoint);
	Hight = findY(point, size);
}
