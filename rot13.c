#include <stddef.h>
#include <string.h>
#include <malloc.h>

char *rot13(const char *src)
    {
    char *new_scr = malloc(strlen(src) * sizeof(char) + 1);

    int i;
    for (i = 0; src[i]; i++){
        if (src[i] >= 65 && src[i] <= 90){
            if (src[i] >= 78){
                new_scr[i] = src[i] - 13;
            }
            else{
                new_scr[i] = src[i] + 13;
            }
        }
        else if (src[i] >= 97 && src[i] <= 122){
            if (src[i] >= 110){
                new_scr[i] = src[i] - 13;
            }
            else{
                new_scr[i] = src[i] + 13;
            }
        }
        else{
            new_scr[i] = src[i];
        }

    }
    new_scr[i] = '\0';


        return new_scr;
}