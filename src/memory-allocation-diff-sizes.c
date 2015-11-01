#include <stdio.h>
#include <stdlib.h>
#define MEMORY_SIZE_XSMALL 128
#define MEMORY_SIZE_SMALL 512
#define MEMORY_SIZE_MEDUIM 1024
#define MEMORY_SIZE_LARGE 1024 * 10
#define MEMORY_SIZE_XLARGE  1024 * 20
#define MEMORY_SIZE_XXLARGE 1024 * 25

void verify_memory_allocation_xsmall(){ 
    char * string = (char *) malloc(MEMORY_SIZE_XSMALL); 
    sprintf(string, "this is a xsmall memory size\n"); 
    fputs(string, stdout); 
    free(string); 
}

void verify_memory_allocation_small(){ 
    char * string = (char *) malloc(MEMORY_SIZE_SMALL); 
    sprintf(string, "this is a small memory size\n"); 
    fputs(string, stdout); 
    free(string); 
}

void verify_memory_allocation_medium(){ 
    char * string = (char *) malloc(MEMORY_SIZE_MEDUIM); 
    sprintf(string, "this is a medium memory size\n"); 
    fputs(string, stdout); 
    free(string); 
}

void verify_memory_allocation_large(){ 
    char * string = (char *) malloc(MEMORY_SIZE_LARGE); 
    sprintf(string, "this is a large memory size\n"); 
    fputs(string, stdout); 
    free(string); 
}

void verify_memory_allocation_xlarge(){ 
    char * string = (char *) malloc(MEMORY_SIZE_XLARGE); 
    sprintf(string, "this is a xlarge memory size\n"); 
    fputs(string, stdout); 
    free(string); 
}

void verify_memory_allocation_xxlarge(){ 
    char * string = (char *) malloc(MEMORY_SIZE_XXLARGE); 
    sprintf(string, "this is a xxlarge memory size\n"); 
    fputs(string, stdout); 
    free(string); 
}

int main(int argc, char *argv[])
{
    verify_memory_allocation_xsmall(); 
    verify_memory_allocation_small(); 
    verify_memory_allocation_medium(); 
    verify_memory_allocation_large(); 
    verify_memory_allocation_xlarge(); 
    verify_memory_allocation_xxlarge(); 
    return 0;
}
