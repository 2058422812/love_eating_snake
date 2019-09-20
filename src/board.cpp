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
    
    board1.DrawSquare(, board::red);

    cv::imshow("1", board1.image);
    char key = DEFAULT;
    int counter=0; 
    while (true)
    {
        char temp = waitKey(16);

        if(temp != -1) {
            key = temp;
        }
        if(counter <=7){
            counter++;
        }
        else
        {
            
        
           switch (key)
        {
        case 'w':
            board1.DrawSquare(pos, board::black);
            pos[0] = pos[0] - 1;
            board1.DrawSquare(pos, board::red);
            
            break;
        case 's':
            board1.DrawSquare(pos, board::black);
            pos[0] = pos[0] + 1;
            board1.DrawSquare(pos, board::red);
            break;
        case 'a':
            board1.DrawSquare(pos, board::black);
            pos[1] = pos[1] - 1;
            board1.DrawSquare(pos, board::red);
            break;
        case 'd':
            board1.DrawSquare(pos, board::black);
            pos[1] = pos[1] + 1;
            board1.DrawSquare(pos, board::red);
            break;

        default:
            break;
        }
        counter=0;
        }
        
        cv::imshow("1", board1.image);
    }

    return 0;
}

void board::initMat()
{
    matSideLen = size * sideLength + (size + 1) * width;
    cout << matSideLen<<endl;
    image = Mat::zeros(matSideLen, matSideLen, CV_8UC3);
    HorizonalLine();
    VerticalLine();
}






