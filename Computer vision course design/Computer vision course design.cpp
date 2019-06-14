#include"Head.h"
#include"ConnectList.h"
using namespace std;
using namespace cv;
int main()
{
	//读入图像
	Mat image = imread("1.jpg");
	Mat dst;
	sunwenke sun(image.clone());//大拇指
	sun.work();
	sun.showresult();	
	yancaidong caidong(image.clone());//食指
	caidong.work();
	caidong.showresult();
	suhuyuan su(image.clone());//中指
	su.work();
	su.showresult();
	zhouzongyu zhou(image.clone());//无名指
	zhou.work();
	zhou.showresult();
	zhangqi zq(image.clone());//小拇指
	zq.work();
	zq.showresult();
	zhangyanxi zhang(image.clone());//手掌
	zhang.worker();
	zhang.Print();
	gaoya ya(image.clone());//手腕
	ya.work();
	ya.show();

	waitKey(0);
	return 0;
}


