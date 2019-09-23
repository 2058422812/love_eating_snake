#include <Snake.hpp>

Snake::Snake(int headx, int heady) {
    body = new Linklist(headx, heady);
    direction = 0;
}

void Snake::move() {
    grow();
    (*body).removeTail();
}

void Snake::grow() {
    int *currentHead = gethead();
    int x = currentHead[0];
    int y = currentHead[1];
    if(direction == UP) {
        x--;
    }else if(direction == DOWN) {
        x++;
    }else if(direction == LEFT) {
        y--;
    }else if(direction == RIGHT) {
        y++;
    }
    (*body).addToHead(x, y);
}

int* Snake::gethead() {
    return (*(*body).head).getCoordinate();
}

int* Snake::gettail() {
    return (*(*body).tail).getCoordinate();
}

void Snake::changeDirection(char nextDirection) {
    switch (nextDirection)
    {
    case UP:
        if(direction != DOWN) direction = nextDirection;
        break;
    case DOWN:
        if(direction != UP) direction = nextDirection;
        break;
    case LEFT:
        if(direction != RIGHT) direction = nextDirection;
        break;
    case RIGHT:
        if(direction != LEFT) direction = nextDirection;
        break;
    default:
        break;
    }
}

void Snake::headOutOfBound(int size) {
    int* head = (*(*body).head).getCoordinate();
    if(head[0] >= size) {
        head[0] = 0;
    }
    if(head[1] >= size) {
        head[1] = 0;
    }
    if(head[0] < 0) {
        head[0] = size - 1;
    }
    if(head[1] < 0) {
        head[1] = size - 1;
    }
}

bool Snake::isDirectionSet() {
    return direction != 0;
}

// #include <stdio.h>
// int main() {
//     Snake snake(3, 3);
//     int* coordinate;
// //get function test
//     coordinate = snake.gethead();
//     printf("%d %d\n", coordinate[0], coordinate[1]);

//     coordinate = snake.gettail();
//     printf("%d %d\n", coordinate[0], coordinate[1]);

// //move function test
//     snake.changeDirection(0);
//     snake.move();
//     coordinate = snake.gethead();
//     printf("%d %d\n", coordinate[0], coordinate[1]);
//     coordinate = snake.gettail();
//     printf("%d %d\n", coordinate[0], coordinate[1]);

// //grow function test
//     snake.grow();
//     coordinate = snake.gethead();
//     printf("%d %d\n", coordinate[0], coordinate[1]);
//     coordinate = snake.gettail();
//     printf("%d %d\n", coordinate[0], coordinate[1]);
// }