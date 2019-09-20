#include <Linklist.hpp>
#define UP 'w'
#define DOWN 'a'
#define LEFT 's'
#define RIGHT 'd'
//TODO

class Snake {
    public:
        Linklist *body;
        int length;
        char direction;

    // Snake(void);
    Snake(int headx, int heady);

    void move();
    void grow();
    int* gethead();
    int* gettail();
    void changeDirection(char nextDirection);
    // void changeDirection(int nextDirection){
    //     char pointkey = waitKey(0);
    //     switch (pointkey)
    //     {
    //     case 'a':
    //         nextDirection=0;
    //         break;
            
    //     case 's':
    //         nextDirection=1;
    //         break;
        

    //     case 'd':
    //         nextDirection=2;
    //         break;
        
    //     case 'w':
    //         nextDirection=3;
    //         break;
        
    //     default:
    //         break;
    //     }
       
    // };
    // void fruit();
};


// void Snake::fruit(){
//     int x=0,y=0;
//     while(x !=1 && y !=1){            //wait to fix
        
//     }
// }