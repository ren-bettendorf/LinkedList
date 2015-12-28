#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
    public:
        LinkedList();
        virtual ~LinkedList();
    protected:
    private:
        unsigned int size;
        Node* header;
};

#endif // LINKEDLIST_H
