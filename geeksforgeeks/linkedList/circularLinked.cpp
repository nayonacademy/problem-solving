#include <bits/stdc++.h>
using namespace std;

class Node
{
    public;
    int data;
    Node *next;
}

void push(Node **head_ref, int data)
{
    Node *ptr1 = new Node();
    Node *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;
    
    if(*head_ref != NULL)
    {
        while (temp->next != *head_ref)
        {
            temp = temp->next;
        }
        temp->next = ptr1;
        
    }else
    {
        ptr1->next = ptr1;
    }
    *head_ref = ptr1;
}


void printList(struct Node *first)
{
    struct Node *temp = first;
    if (first != NULL)
    {
        do
        {
            printf("%d", temp->data);
            temp = temp->next;
        } while (temp != first);
        
    }    
}