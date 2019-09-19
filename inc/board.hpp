#include "opencv2/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
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
    void DrawLine(Mat img, Point start, Point end);
    void HorizonalLine();
    void VerticalLine();
    int matSideLen;

public:
    board(int s);
    int size;

    // void refresh();
    // void create_fruit();
};
int board::width = 5;
int board::sideLength = 40;
board::board(int s)
{
    size = s;
    initMat();
}
void board::DrawLine(Mat img, Point start, Point end)
{
    int t = width;
    int l = 8;
    line(img,
         start,
         end,
         Scalar(255, 255, 255),
         t,
         l);
}
void board::HorizonalLine()
{
    for (int i = 0; i < size + 2; i++)
    {
        DrawLine(image, Point(0, (i - 1) * (sideLength + width) + 1), Point(matSideLen, (i - 1) * (sideLength + width) + 1)); /* code */
    }
}
void board::VerticalLine()
{
    for (int i = 0; i < size + 2; i++)
    {
        DrawLine(image, Point((i - 1) * (sideLength + width) + 1, 0), Point((i - 1) * (sideLength + width) + 1, matSideLen)); /* code */
    }
}