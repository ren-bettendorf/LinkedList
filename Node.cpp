#include "Node.h"

Node::Node()
{
    this->next = nullptr;
    this->data = 0;
}

Node::Node(const int item)
{
    this->data = item;
    this->next = nullptr;
}

Node::Node(const int data, Node* node)
{
    this->data = data;
    this->next = node->next;
}


Node::~Node()
{
    delete this->next;
}

int Node::GetData()
{
    return data;
}

void Node::SetData(const int item)
{
    this->data = item;
}
