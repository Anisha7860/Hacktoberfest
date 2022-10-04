#include <stdio.h>
#include "deque.h"

int main()
{
    Deque* d = init();
    push_back(d, 1);
    push_back(d, 2);
    push_back(d, 3);
    push_back(d, 4);
    push_back(d, 5);
    push_back(d, 6);
    printf("%d %d %d\n", front(d), back(d), size(d));
    push_front(d, 7);
    push_front(d, 8);
    push_front(d, 9);
    printf("%d %d %d\n", front(d), back(d), size(d));
    pop_back(d);
    pop_front(d);
    printf("%d %d %d\n", front(d), back(d), size(d));
    return 0;   
}