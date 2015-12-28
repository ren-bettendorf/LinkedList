#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();
        virtual ~Node();
        Node(const int item);
        Node(const int item, Node* node);
        int GetData();
        void SetData(const int item);
    protected:
    private:
        int data;
        Node* next;
};

#endif // NODE_H
