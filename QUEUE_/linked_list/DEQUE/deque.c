#include <stdlib.h>
#include "deque.h"

Deque *init()
{
    Deque *ret = (Deque *)malloc(sizeof(Deque));
    ret->size = 0;
    ret->front = createNode(-1);
    ret->back = createNode(-1);
    ret->front->next = ret->back;
    ret->back->prev = ret->front;
    return ret;
}

Node *createNode(int val)
{
    Node *ret = (Node *)malloc(sizeof(Node));
    ret->next = NULL;
    ret->prev = NULL;
    ret->val = val;
    return ret;
}

void push_back(Deque *d, int val)
{

    Node *temp = createNode(val);
    temp->prev = d->back->prev;
    (d->back->prev)->next = temp;
    d->back->prev = temp;
    temp->next = d->back;
    d->size++;
}

void push_front(Deque *d, int val)
{
    Node *temp = createNode(val);
    temp->next = d->front->next;
    (d->front->next)->prev = temp;
    d->front->next = temp;
    temp->prev = d->front;
    d->size++;
}

int front(Deque *d)
{
    return (d->front->next)->val;
}

int back(Deque *d)
{
    return (d->back->prev)->val;
}

int size(Deque *d)
{
    return d->size;
}

int empty(Deque *d)
{
    return d->size == 0;
}

int pop_back(Deque *d)
{
    int temp = (d->back->prev)->val;
    Node* c = d->back->prev;
    ((d->back->prev)->prev)->next = d->back;
    d->back->prev = (d->back->prev)->prev;
    free(c);
    (d->size)--;
    return temp;
}

int pop_front(Deque *d)
{
    int temp = (d->front->next)->val;
    Node* c = d->front->next;
    ((d->front->next)->next)->prev = d->front;
    d->front->next = (d->front->next)->next;
    free(c);
    (d->size)--;
    return temp;
}