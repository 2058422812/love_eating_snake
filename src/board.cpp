#include "opencv2/core.hpp"
//#include "Snake.hpp"
#include "board.hpp"
#include <iostream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
using namespace cv;
using namespace std;

int main()
{
    board board1(20);
    return 0;
}

void board::initMat()
{
    matSideLen = size * sideLength + (size + 1) * width;
    cout << matSideLen;
    image = Mat::zeros(matSideLen, matSideLen, CV_32F);
    HorizonalLine();
    VerticalLine();
    imshow("1", image);
    waitKey(0);
}
