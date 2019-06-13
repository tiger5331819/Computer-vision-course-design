#include "高雅.h"
void gaoya::work()
{
	Mat src, dst;
	/*namedWindow("手掌原图", 0);  imshow("手掌原图", image); */
	//滤波处理
	cvtColor(image, src, COLOR_BGR2GRAY);
	blur(src, src, Size(3, 3));
	//canny边缘检测
	Canny(src, dst, 80, 200, 3);
	//进行膨胀，连接轮廓点;
	Mat element = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(dst, dst, element);
	//提取轮廓并绘制;
	Mat Image = Mat::zeros(dst.rows, dst.cols, CV_8UC3);
	vector<vector<Point>>contours;
	vector<Vec4i>hierarchy;
	findContours(dst, contours, hierarchy, RETR_CCOMP, CHAIN_APPROX_SIMPLE);
	int index = 0;
	for (; index >= 0; index = hierarchy[index][0])
	{
		Scalar color(255, 255, 255);
		drawContours(Image, contours, index, color, FILLED, 8, hierarchy);
	}
	/* namedWindow("轮廓", 0); imshow("轮廓", Image); imwrite("轮廓.jpg", Image); */
	int X[2] = { 0,0 };
	int col = 0;
	int i = 0;
	for (col; col < dst.cols / 3; col++)
	{
		if (dst.at<uchar>(dst.rows - 10, col) == 255)
		{
			X[0] = col;
			i++;
		}
		if (i == 1)
			break;
	}
	i = 0;
	col = dst.cols / 2;
	for (col; col < dst.cols; col++)
	{
		if (dst.at<uchar>(dst.rows - 10, col) == 255)
		{
			X[1] = col;
			i++;
		}
		if (i == 1)
			break;
	}
	//计算两个像素点之间的距离
	width = X[1] - X[0];
}