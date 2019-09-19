#include <Linklist.hpp>
#include <stdio.h>

Linklist::Linklist(int x, int y) {
    Link *link = new Link(x, y);
    Linklist::head = link;
    Linklist::tail = link;
}

Linklist::~Linklist() {
    while(tail != head) {
        removeTail();
    }
    delete head;
}

void Linklist::addNext(int x, int y) {
    Link *a = new Link(x, y);

    (*tail).next = a;
    tail = (*tail).next;
}

void Linklist::addToHead(int x, int y) {
    Link *link = new Link(x, y);
    (*link).next = head;
    head = link;
}


bool Linklist::removeTail() {
    if(head == tail) {
        return false;
    }
    Link *current = head;
    while((*current).next != tail) {
        current = (*current).next;
    }
    tail = current;
    delete (*current).next;
    return true;
}

// bool Linklist::hasElement(int x, int y) {
//     Link *current = head;
//     while(current != tail) {
//         if((*current). == x && (*current).y == y) {
//             return true;
//         }
//         current = (*current).next;
//     }
//     return false;
// }

// int main() {
//     Linklist test(0, 0);
//     Link a(1, 0);
//     Link *b = &a;
//     Link c(1, 0);
//    printf("%d %d %d", &a == b, &c == &a, b == &c);
//     Link *d;
//     d = new Link(1, 0);
//     a.setNext(*d);
//     printf("%lld\n", d);
//     test.addNext(1, 1);
//     test.addNext(2, 2);
//     test.addNext(3, 3);
//     test.addToHead(-1, -1);
//     test.removeTail();
//     printf("%d\n", test.hasElement(3, 3));
//     printf("%d\n", test.hasElement(0, 0));
// }