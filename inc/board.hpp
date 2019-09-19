#include "opencv2/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "Snake.hpp"
using namespace cv;

class board
{
private:
    int static sideLength;
    int static width;
    // int fruit[];
     Snake snake;
    void initMat();
    void move();
    void DrawLine(Mat img, Point start, Point end);
    void HorizonalLine();
    void VerticalLine();
    int matSideLen;

public:
    board(int s);
    int size;
    Mat image;
    bool isBlack(int pos[]);
    static Scalar red;
    static Scalar white;
    static Scalar black;
    void DrawSquare(int pos[], Scalar color);

    // void refresh();
    // void create_fruit();
};
int board::width = 5;
int board::sideLength = 40;
Scalar board::red = Scalar(0, 0, 255);
Scalar board::white = Scalar(255, 255, 255);
Scalar board::black = Scalar(0, 0, 0);

board::board(int s)
{
    size = s;
    initMat();
}
void board::DrawLine(Mat img, Point start, Point end)
{
    int t = width;
    int l = 8;
    rectangle(image, start, end, white, -1);
}

void board::HorizonalLine()
{
    for (int i = 0; i < size + 1; i++)
    {
        DrawLine(image, Point(0, (i) * (sideLength + width)), Point(matSideLen, (i) * (sideLength + width) + width)); /* code */
    }
}
void board::VerticalLine()
{
    for (int i = 0; i < size + 1; i++)
    {
        DrawLine(image, Point((i) * (sideLength + width), 0), Point((i) * (sideLength + width) + width, matSideLen)); /* code */
    }
}

void board::DrawSquare(int pos[], Scalar color)
{
    int row_val = width + pos[1] * (width + sideLength);
    int col_val = width + pos[0] * (width + sideLength);
    rectangle(image, Point(row_val, col_val), Point(row_val + sideLength, col_val + sideLength), color, -1);
}

bool board::isBlack(int pos[]){
    int row_val = width + pos[1] * (width + sideLength)+ 0.5 * sideLength;
    int col_val = width + pos[0] * (width + sideLength)+ 0.5 * sideLength;
    Scalar color = board::image.at<Vec3b>(row_val,col_val);
    if(color==Scalar(0,0,0,0)){
        return true;
    }
    else{
        return false;
    }


}