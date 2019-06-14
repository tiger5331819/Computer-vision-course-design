#include "’≈—‹œ£.h"

void zhangyanxi::worker()
{
	Mat g_dstImage, final;
	cvtColor(image, g_dstImage, COLOR_BGR2GRAY);
	blur(g_dstImage, g_dstImage, Size(3, 3));
	Canny(g_dstImage, final, 80, 160, 3);

	vector<vector<Point>> Contours;
	vector<Vec4i> Hierarchy;
	findContours(final, Contours, Hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
	Mat drawing = Mat::zeros(final.size(), CV_8UC3);
	for (int i = 0; i < Contours.size(); i++)
	{
		drawContours(drawing, Contours, i, Scalar(255),2, 8, Hierarchy, 0, Point());
	}
	int i;
	int singal = 0;
	for (i = 0; i < 330; i++)
	{
		if (singal == 0)
		{
			if (drawing.ptr<Vec3b>(5)[i][0] != 255)
			{
				singal = 1;
			}
		}
		if (singal == 1)
		{
			if (drawing.ptr<Vec3b>(5)[i][0] != 255)
			{
				singal = 0;
				weight += 1;
			}
		}
	}
}