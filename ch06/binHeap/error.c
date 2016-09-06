#include <stdio.h>
#include <stdlib.h>

void Error(char *s){
    fprintf(stderr, s);
    fprintf(stderr, "\n");
}

void FatalError(char *s){
    Error(s);
    exit(1);
}
