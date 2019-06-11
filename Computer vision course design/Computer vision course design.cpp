#include"Head.h"
#include"ConnectList.h"
using namespace std;
using namespace cv;
int main()
{
	//读入图像
	Mat image = imread("1.jpg");
	suhuyuan su(image.clone());//将图像克隆传入
	su.work();//代码工作
	su.showresult();//输出结果
	waitKey(0);
}


