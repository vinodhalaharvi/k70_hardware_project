#include <stdio.h>
#include <stdlib.h>
#define MEMORY_SIZE 100

void verify_onestring(){ 
    char * string = (char *) malloc(100); 
    sprintf(string, "this is a test string\n"); 
    fputs(string, stdout); 
    free(string); 
}

int main(int argc, char *argv[])
{
    verify_onestring(); 
    return 0;
}
