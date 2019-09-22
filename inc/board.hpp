#include "opencv2/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "Snake.hpp"

using namespace cv;

class board
{
private:
    int static sideLength;
    int static width;

    Snake *snake;
    void initMat();
    void DrawLine(Mat img, Point start, Point end);
    void HorizonalLine();
    void VerticalLine();
    void grow();
    int matSideLen;

public:
    void lose();
    int fruit[2];
    int rand1(int max);
    board(int s);
    int size;
    Mat image;
    void initFruit();
    bool isBlack(int pos[]);
    static Scalar red;
    static Scalar white;
    static Scalar black;
    static Scalar green;
    void DrawSquare(int pos[], Scalar color);
    int *returnBlack();
    void move();
    bool fruitEat();
    void next();
    void changeDirection(char key);

    // void refresh();
    // void create_fruit();
};
int board::width = 5;
int board::sideLength = 40;
Scalar board::red = Scalar(0, 0, 255);
Scalar board::white = Scalar(255, 255, 255);
Scalar board::black = Scalar(0, 0, 0);
Scalar board::green = Scalar(0, 255, 0);

board::board(int s)
{
    size = s;
    initMat();
    fruit[0] = 0;
    fruit[1] = 0;
    snake = new Snake(size / 2, size / 2);
    DrawSquare((*snake).gethead(), red);
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

bool board::isBlack(int pos[])
{
    int row_val = width + pos[1] * (width + sideLength) + 0.5 * sideLength;
    int col_val = width + pos[0] * (width + sideLength) + 0.5 * sideLength;
    Scalar color = board::image.at<Vec3b>(row_val, col_val);
    if (color == Scalar(0, 0, 0, 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int *board::returnBlack()
{
    int temp[400][2];
    for (int i = 0; i < 400; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            temp[i][j] = -1;
        }
    }
    int k = 0;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            int post[] = {i, j};
            if (board::isBlack(post))
            {
                temp[k][0] = i;
                temp[k][1] = j;
                k++;
            }
        }
    }
    int index = board::rand1(k);
    int *black = new int[2];
    black[0] = temp[index][0];
    black[1] = temp[index][1];

    return black;
}

void board::initFruit()
{
    int *Black = board::returnBlack();
    fruit[0] = Black[0];
    fruit[1] = Black[1];

    DrawSquare(fruit, green);
    delete[] Black;
}

int board::rand1(int max)
{

    int RandomNumber;
    srand((unsigned)time(NULL));
    RandomNumber = rand() % max;

    return RandomNumber;
}

void board::grow()
{
    (*snake).grow();
    (*snake).headOutOfBound(size);
    DrawSquare((*snake).gethead(), board::red);
    initFruit();
}
void board::move()
{
    DrawSquare((*snake).gettail(), board::black);
    (*snake).move();
    (*snake).headOutOfBound(size);
    DrawSquare((*snake).gethead(), board::red);
}
bool board::fruitEat()
{
    int *currentHead = (*snake).gethead();
    int x = currentHead[0];
    int y = currentHead[1];
    switch ((*snake).direction)
    {
    case UP:
        x--;
        if (x == fruit[0] && y == fruit[1])
        {

            return true;
        }
        break;
    case DOWN:
        x++;
        if (x == fruit[0] && y == fruit[1])
        {
            return true;
        }
        break;
    case LEFT:
        y--;
        if (x == fruit[0] && y == fruit[1])
        {
            return true;
        }
        break;
    case RIGHT:
        y++;
        if (x == fruit[0] && y == fruit[1])
        {
            return true;
        }
        break;

    default:
        return false;
        break;
    }
    return false;
}
void board::next()
{

    if (fruitEat())
    {
        grow();
    }
    else
    {
        move();
    }
}
void board::changeDirection(char key)
{
    (*snake).changeDirection(key);
}

void board::lose()
{
    String imageName("./L.png");
    matSideLen = size * sideLength + (size + 1) * width;
    Mat M(matSideLen, matSideLen, CV_8UC3, red);
    image = M;
    Mat lose = imread(imageName, IMREAD_COLOR);
    Mat imageROI;
    imageROI = image(Range(350, 350 + lose.rows), Range(330, 330 + lose.cols));
    lose.copyTo(imageROI);
}
