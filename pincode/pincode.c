#include <stdlib.h>
#include <string.h>
// 1357

const char** get_pins(const char* observed, size_t* count) {
    *count = 1;
    printf("%d   ,    %d", strlen(observed), *count);
    
    
    return NULL;
}

//This function will be called once per every call to get_pins
//with a pointer value returned by such call.
void free_pins(const char ** pins) {
    //...do your cleanup, if necessary
}