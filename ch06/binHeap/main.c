#include <stdio.h>
#include <stdlib.h>
#include "binheap.h"
#include "fatal.h"


int main()
{
    int i;
    int MaxElements = 10;
    PriorityQueue H;
    H = Initialize(MaxElements);
    for(i = 13; i > 10; i--)
        Insert(i, H);
    PrintQueue(H);
    return 0;
}
