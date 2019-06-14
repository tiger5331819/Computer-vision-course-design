#include "苏琥元.h"
//降序排序
static bool Compare(int a, int b)
{
	return a > b;
}
//寻找x轴上的像素点的x坐标并计算出宽
//[param in]Point *p：像素点数组
//[param in]size ：像素点个数
static int findX(Point* p,int size)
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
//寻找y轴上的像素点的y坐标并计算出高
//[param in]Point *p：像素点数组
//[param in]size ：像素点个数
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

void suhuyuan::work()
{
	Mat dst, final;
	cvtColor(image, dst, COLOR_BGR2GRAY);//将图像转换为灰色
	blur(dst, dst, Size(3, 3));//滤波
	Canny(dst, final, 80, 160, 3);//Canny边缘检测

	//findContours运用
	vector<vector<Point>> Contours;//边缘坐标集合
	vector<Vec4i> Hierarchy;
	findContours(final, Contours, Hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
	//Mat drawing = Mat::zeros(final.size(), CV_8UC3);
	//for (int i = 0; i < Contours.size(); i++)
	//{
	//	Scalar color = Scalar(255,255,255);//任意值
	//	drawContours(drawing, Contours, 2, color, 3, 8, Hierarchy, 0, Point());//画出边缘
	//}

	int flag=0;
	for (int i = 0; i < Contours.size(); i++)
	{
		if (Contours[i].size() > size) { size = Contours[i].size(); flag = i; }//提取所需要的边缘数据
	}
	for (int i = 0; i < size; i++) 
	{ 
		point[i] = Contours[flag][i];//将边缘像素点存储
	}
	//像素点处理
	 weight= findX(point,size);
	 hight= findY(point, size);
}

