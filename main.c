#include <stddef.h>
#include <stdlib.h>

#define MEMORY_SIZE 4096


int main(){

    size_t *memory;
    memory = malloc(MEMORY_SIZE);




    free(memory);

    
}
