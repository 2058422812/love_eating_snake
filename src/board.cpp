#include "opencv2/core.hpp"
#include "Snake.hpp"
using namespace cv;

class board
{
private:
    int size;
    Mat image;
    int fruit[];
    Snake snake;

public:
    board(/* args */);
    void refresh();
    void create_fruit();
};

board::board(/* args */)
{
}
