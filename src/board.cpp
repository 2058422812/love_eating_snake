#include "opencv2/core.hpp"
//#include "Snake.hpp"
#include "board.hpp"
#include <iostream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;
using namespace std;

board::board(int s)
{
    size = s;
initMat();
}
 void board::initMat(){
     int matSideLen=size*sideLength+(size+1)*width;
     cout << matSideLen<<"Hello";
     image =Mat::zeros(matSideLen,matSideLen,CV_32F);
     imshow("1",image);
     waitKey(0);


 }
  
int main()
{
    board board1(20);
    return 0;
    

}
