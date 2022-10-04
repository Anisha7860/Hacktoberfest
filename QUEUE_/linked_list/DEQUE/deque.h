#ifndef DEQUE_H
#define DEQUE_H

typedef struct Node {
    int val;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct Deque {
    int size;
    Node *front;
    Node *back;
} Deque;

Deque *init();
Node *createNode(int val);
void push_back(Deque* d, int val);
void push_front(Deque* d, int val);
int front(Deque* d);
int back(Deque* d);
int size(Deque *d);
int empty(Deque *d);
int pop_back(Deque *d);
int pop_front(Deque *d);

#endif