#include <Link.hpp>

class Linklist
{
public:
        Link *head;
        Link *tail;

        Linklist(int x, int y);
        ~Linklist();
        void addNext(int x, int y);
        void addNext(Link &link);
        void addToHead(int x, int y);
        void addToHead(Link &link);
        bool removeTail();
        // bool hasElement(int x, int y);
};