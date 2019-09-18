#include "opencv2/core.hpp"
#include "Snake.hpp"
using namespace cv;

class board
{
private:
    
    int static sideLength;
    int static width;
    Mat image;
    // int fruit[];
    // Snake snake;
    void initMat();
    void DrawLine(Mat img ,Point start,Point end);
    void HorizonalLine();
    int matSideLen;
public:
    board(int s);
    int size;
    
    // void refresh();
    // void create_fruit();
};
int board::width = 9;
int board::sideLength = 51;
