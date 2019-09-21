// #include "opencv2/core.hpp"
//#include "Snake.hpp"
#include "board.hpp"
#include <iostream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
// #include "opencv2/imgproc/imgproc.hpp"
#define DEFAULT 'f'
using namespace cv;
using namespace std;

int main()
{

    board board1(20);

    //     int pos[] = {1, 3};
    //     // board1.initFruit();
    //     board1.fruit[0] = 10;
    //     board1.fruit[1] = 5;
    board1.DrawSquare(board1.fruit, board::green);

    //     board1.changeDirection(LEFT);
    //     while (true)
    //     {

    //         char key = waitKey(1000);

    //         if (key == 'q')
    //         {
    //             return 0;
    //         }
    //         board1.next();
    //         imshow("window", board1.image);
    //     }
    board1.lose();
    imshow("window", board1.image);

    waitKey(0);
    return 0;
}

void board::initMat()
{
    matSideLen = size * sideLength + (size + 1) * width;

    image = Mat::zeros(matSideLen, matSideLen, CV_8UC3);
    HorizonalLine();
    VerticalLine();
}
