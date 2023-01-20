#include <stdlib.h>

/*       90938498237058927340892374089 */
/*    +                                */
/*          63829983432984289347293874 */
/*       ----------------------------- */
/*       91002328220491911630239667963  */

int mystrlen(const char *x);
int num(const char *x);
char let(int k);
char *new_sum(char *sum);



char *add(const char *a, const char *b) 
{
    int l_a = mystrlen(a);
    int l_b = mystrlen(b);

    //printf("a = %s, b = %s\n", a, b);
    if (mystrlen(a) < mystrlen(b)) {     // меняем указатели местами, "a" должно указывать на больший массив
            const char *tmp = a;
            a = b;
            b = tmp;
            l_a = mystrlen(a);
            l_b = mystrlen(b);
    }
    //printf("a = %s, b = %s\n", a, b);

    char *sum = malloc((l_a + l_b) * sizeof(char));

    int i = 0, k = 0;
    for (l_a--, l_b--; l_a >= 0; l_a--, l_b--, i++){
        
        if (l_b >= 0 && l_a >= 0){
            k = k + num(a + l_a) + num(b + l_b);  // складываем два последних числа
        
            sum[i] = let(k); // фуекция возвращает последний символ от числа k,    k % 10
            k = k / 10;
        }
        else if(l_b < 0 && l_a >= 0){
            k = k + num(a + l_a);  // складываем два последних числа
        
            sum[i] = let(k);    // фуекция возвращает последний символ от числа k , k % 10
            k = k / 10;
        }

    }

    while (k > 0){
        sum[i] = let(k);
        k = k / 10;
        i++;
    }
    sum[i] = '\0';
    return new_sum(sum);
// 1234567   

}

char *new_sum(char *sum){
    int k = mystrlen(sum);
    int g = k;
    int i;
    
        for (i = 0, k--; i < g/2; i++, k--){
            char tmp = sum[k];
            sum[k] = sum[i];
            sum[i] = tmp;
        }
    return sum;
    


}


char let(int k){
    k = k % 10;
    if (k == 0)
        return '0';
    else if (k == 1)
        return '1';
    else if (k == 2)
        return '2';
    else if (k == 3)
        return '3';
    else if (k == 4)
        return '4';
    else if (k == 5)
        return '5';
    else if (k == 6)
        return '6';
    else if (k == 7)
        return '7';
    else if (k == 8)
        return '8';
    else if (k == 9)
        return '9';

}




int num(const char *x){
    if (*x == '0')
        return 0;
    else if (*x == '1')
        return 1;
    else if (*x == '2')
        return 2;
    else if (*x == '3')
        return 3;
    else if (*x == '4')
        return 4;
    else if (*x == '5')
        return 5;
    else if (*x == '6')
        return 6;
    else if (*x == '7')
        return 7;
    else if (*x == '8')
        return 8;
    else if (*x == '9')
        return 9;
}


int mystrlen(const char *x)
{
    unsigned int i;
    for (i = 0; *(x + i); i++)
    {
    }
    return i;
}


