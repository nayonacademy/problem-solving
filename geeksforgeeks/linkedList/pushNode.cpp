#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void push(Node** head_ref, int new_data)
{
    // 1. allocate node
    Node* new_node = new Node();
    // 2. put in the data
    new_node->data = new_data;
    // 3 make next of nex node as head
    new_node->next = (*head_ref);
    // move the head to point to the new node
    (*head_ref) = new_node;
}

void pushtest(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}