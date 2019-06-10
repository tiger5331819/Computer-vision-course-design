#include"Head.h"
#include"ConnectList.h"
using namespace std;
using namespace cv;
int main()
{
	Mat image = imread("1.jpg");
	suhuyuan su(image.clone());
	su.work();
	su.showresult();
	waitKey(0);
}


