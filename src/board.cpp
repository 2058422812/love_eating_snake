#include "opencv2/core.hpp"
//#include "Snake.hpp"
#include "board.hpp"
#include <iostream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
using namespace cv;
using namespace std;

board::board(int s)
{
    size = s;
initMat();
}
 void board::initMat(){
     matSideLen=size*sideLength+(size+1)*width;
     cout << matSideLen;
     image =Mat::zeros(matSideLen,matSideLen,CV_32F);
     HorizonalLine();
   
     imshow("1",image);
     waitKey(0);
     
    

 }
  
int main()
{
    board board1(20);
    return 0;
    

}
void board::DrawLine(Mat img ,Point start,Point end){
    int t=3;
    int l=8;
    line( img,
    start,
    end,
    Scalar(255,255,255),
    t,
    l );

}
void board::HorizonalLine(){
    for (int i = 0; i < size+1; i++)
    {
         DrawLine(image,Point(0,(i-1)*sideLength),Point(matSideLen,(i-1)*sideLength));/* code */
    }
  

}