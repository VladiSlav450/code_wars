#include <stddef.h>
#include <stdio.h>

/* Do not allocate any memory but just use rdata and return it back */

unsigned char *data_reverse(unsigned char *rdata, const unsigned char *data, size_t nblk)
{
    char *p_first_data = data + (nblk * 8 - 8);
    char *p_last_data = data + (nblk * 8 - 1 );
    int f;
    int i = 0;
    for (f = 1; f <= nblk; f++){
        for (char *t = p_first_data; t <= p_last_data; i++, t++){
            *(rdata + i) = *t;
        }
        p_first_data -= 8;
        p_last_data -= 8;
    }
  
  
    return rdata;
}