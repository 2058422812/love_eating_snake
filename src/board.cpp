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
    board1.initFruit();
    //     board1.fruit[0] = 10;
    //     board1.fruit[1] = 5;
    board1.DrawSquare(board1.fruit, board::green);

    //     board1.changeDirection(LEFT);
    char key;
    int frameCounter = 0;
    int speed = 20;
    int frame = 60;
        while (true)
        {
            key = cv::waitKey(1000 / frame);
            board1.changeDirection(key);
            if(frameCounter >= speed) {
                if (key == 'q')
                {
                    return 0;
                }else{
                    if((*board1.snake).isDirectionSet()) {
                        if(!board1.next()) {
                            break;
                        }
                    }
                }
                frameCounter = 0;
            }else {
                frameCounter++;
            }
            
            imshow("window", board1.image);
        }
    imshow("window", board1.image);
    cv::waitKey(0);
    return 0;
}

void board::initMat()
{
    matSideLen = size * sideLength + (size + 1) * width;

    image = Mat::zeros(matSideLen, matSideLen, CV_8UC3);
    HorizonalLine();
    VerticalLine();
}
