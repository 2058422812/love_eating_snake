class Link{
    public:
        int* coordinate;
        Link *next;

        Link(void);
        ~Link();
        Link(int x, int y);
        void setCoordinate(int x, int y);
        int* getCoordinate();
        void setNext(Link &link);
        bool hasNext();
        void removeNext();
};
