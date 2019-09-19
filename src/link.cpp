#include <Link.hpp>
#include <stdio.h>

Link::Link(void) {
    
}

Link::Link(int x, int y) {
    coordinate = new int[2];
    Link::coordinate[0] = x;
    Link::coordinate[1] = y;
}
Link::~Link() {
    delete [] coordinate;
}

void Link::setNext(Link &link) {
    next = &link;
}

bool Link::hasNext() {
    return next;
}

void Link::setCoordinate(int x, int y) {
    coordinate[0] = x;
    coordinate[1] = y;
}

int* Link::getCoordinate() {
    return coordinate;
}

void Link::removeNext() {
    next = 0;
}

// int main() {
//     Link link;
//     link = Link(1, 2);
//     printf("%d %d", link.getX(), link.getY());
// }