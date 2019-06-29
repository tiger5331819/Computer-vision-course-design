#include "ÎÂÆæ·².h"

double get_angle(Point xmin, Point xmax, Point ymax)
{
	Point v1, v2;
	double a, b;

	v1.x = ymax.x - xmin.x;
	v1.y = ymax.y - xmin.y;

	v2.x = xmax.x - ymax.x;
	v2.y = xmax.y - ymax.y;

	a = v1.x * v2.x + v1.y * v2.y;
	b = sqrt(pow(v1.x, 2) + pow(v1.y, 2)) * sqrt(pow(v2.x, 2) + pow(v2.y, 2));

	return -(a / b);
}
void wenqifan::work()
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
	int xmax_val, xmin_val, ymax_val;
	xmax_val = point[0].x;
	xmin_val = point[0].x;
	ymax_val = point[0].y;
	int l = 0, m = 0, r = 0;
	for (int i = 1; i < size; i++) {
		if (xmin_val > point[i].x) {
			xmin_val = point[i].x;
			l = i;
		}
		if (xmax_val < point[i].x) {
			xmax_val = point[i].x;
			r = i;
		}
		if (ymax_val < point[i].y) {
			ymax_val = point[i].y;
			m = i;
		}
	}

	xmin = point[l];
	xmax = point[r];
	ymax = point[m];

	cos = get_angle(xmin, xmax, ymax);
}