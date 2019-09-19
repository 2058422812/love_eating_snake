#include <Snake.hpp>

Snake::Snake(int headx, int heady) {
    body = new Linklist(headx, heady);
}

void Snake::move() {
    grow();
    (*body).removeTail();
}

void Snake::grow() {
    int *currentHead = gethead();
    int x, y;
    if(direction == UP) {
        x = currentHead[0] - 1;
    }else if(direction == DOWN) {
        x = currentHead[0] + 1;
    }else if(direction == LEFT) {
        y = currentHead[1] - 1;
    }else if(direction == RIGHT) {
        y = currentHead[1] + 1;
    }
    (*body).addToHead(x, y);
}

int* Snake::gethead() {
    return (*(*body).head).getCoordinate();
}

int* Snake::gettail() {
    return (*(*body).tail).getCoordinate();
}

void Snake::changeDirection(int nextDirection) {
    direction = nextDirection;
}