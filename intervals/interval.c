#include <stdio.h>

struct interval {
	int first;
	int second;
};
int intervals(const struct interval *nast, const struct interval *arrey, size_t n) 
{
	int f_num = nast -> first, s_num = nast -> second;
/*
	for (int i = 0; i < n; i++){
		if ((f_num < ((arrey + i) -> first)) && (s_num < ((arrey + i) -> first)))
			continue;
		else if ((f_num <= ((arrey + i) -> first)) && (s_num >= ((arrey + i) -> first)) && (s_num < ((arrey + i) -> second))){
			s_num = (arrey + i)-> second;
			i = 0;
		}
		else if (f_num > ((arrey +i) -> first) && f_num <= ((arrey + i) -> second)) 
			return 0;
	}	
*/
	int i = 0;	
	while (i < n){	
		printf("f_num = %d, s_num = %d\nfirst = %d, second = %d\ni = %d\n", f_num, s_num, (arrey +i) -> first, (arrey +i) -> second, i);
		if((f_num == ((arrey +i)) -> first) && (s_num == ((arrey +i) -> second))){
			i++;
			continue;
		}
		if ((f_num <= ((arrey +i) -> second)) && ((f_num >= ((arrey +i) -> first)))){
			if((f_num == ((arrey +i) -> first)) && ((s_num > ((arrey +i) -> second)))){ 
				printf("HYU");
				return 0;
			}
			if((f_num >  ((arrey +i) -> first)) && ((s_num < ((arrey +i) -> second)))){ 
				printf("HYU");
				return 0;
			}
		}
		if ((f_num > ((arrey +i) -> second)) || (s_num < ((arrey +i) -> first))){
			i++;
			continue;
		}
		
		if ((f_num <= ((arrey + i) -> first)) && (s_num >= ((arrey + i) -> first)) && (s_num < ((arrey + i) -> second))){
			s_num = (arrey + i)-> second;
			i = 0;
			continue;
		}
	i++;	
	}	
	printf("%d\n", s_num - f_num);
	return s_num - f_num;
}
int sum_intervals(const struct interval *v, size_t n)
{
	int i = 0;
	int sum = 0;
	for(i; i < n; i++) {
		sum = sum + intervals(v+i, v, n);
	}
	return sum;

}
