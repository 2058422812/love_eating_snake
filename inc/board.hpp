#include "opencv2/core.hpp"
#include "Snake.hpp"
using namespace cv;

class board
{
private:
    int size;
    int static sideLength;
    int static width;
    Mat image;
    // int fruit[];
    // Snake snake;
    // void initMat();

public:
    board(int s);
    // void refresh();
    // void create_fruit();
};
int board::width = 3;
int board::sideLength = 17;
