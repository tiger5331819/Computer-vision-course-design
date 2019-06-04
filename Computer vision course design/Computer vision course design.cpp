#include"Head.h"
using namespace std;
using namespace cv;

int main()
{
	Mat image = imread("1.jpg");
	imshow("test", image);
	waitKey(0);
    cout << "Hello World!\n";
}


