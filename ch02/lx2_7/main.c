#include <stdio.h>
#include <stdlib.h>

#define N 5
int randInt(int, int);

int main()
{
    int A[N];
    int i, j = 0;
    srand(2);
    A[0] = randInt(1, N);
    for(i = 1; i < N; i++){
        while(1){
            A[i] = randInt(1, N);
            for(j = 0; j < i ; j++)
                if(A[j] == A[i])
                    break;
            if(j == i)
                break;
        }
    }
    for(i = 0; i < N; i++)
        printf("  %d", A[i]);
    return 0;
}

int randInt(int i, int j){
    return rand() % (j - i + 1) + i;
}
