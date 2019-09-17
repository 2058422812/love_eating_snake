#include <Linklist.hpp>

class Snake {
    public:
        Linklist body;
        int headx, heady;
        int direction;
        int length;

    Snake(void);
    Snake(int headx, int heady);

    void move();
    bool grow();
    bool meetBody();
    void changeDirection(int nextDirection);
};