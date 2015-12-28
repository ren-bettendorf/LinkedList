#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <iostream>

class LinkedList
{
    public:
        LinkedList();
        LinkedList(const LinkedList& list);
        virtual ~LinkedList();

        bool isEmpty() const;
        int getLength() const;
        void insert(int index, const int& item);
        void remove(int index);
        void retrieve(int index, int& item) const;
    protected:
    private:
        Node *find(int index) const;
        int size;
        Node *head;
};

#endif // LINKEDLIST_H
