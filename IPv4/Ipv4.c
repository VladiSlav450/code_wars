/*  Ipv4.c  */

/*  1. Принимаем число
 *  2. Записываем его в двоичном виде -> получается 32 бита
 *  3. Каждые 8 бит переводим в число и зписываем в массив после ставим точку
 *
 */

char sumbol(int a)   // true
{
	if (a == 0)
		return '0';
	else if (a == 1)
		return '1';
	else if (a == 2)
		return '2';
	else if (a == 3)
		return '3';
	else if (a == 4)
		return '4';
	else if (a == 5)
		return '5';
	else if (a == 6)
		return '6';
	else if (a == 7)
		return '7';
	else if (a == 8)
		return '8';
	else if (a == 9)
		return '9';
	return 'E'; 
}

unsigned kvadrat(int a, int b)   // true
{
	unsigned sum = 1;
	for (int i = 0; i < b; i++) {
		sum = sum * a;
	}
	return sum;
}

void iep(int *arr_bin, char *output)
{	
	for (int i = 0; i < 32; i++) {
		printf("%d, ", *(arr_bin + i));
	}
	printf("\n");

	int bit = 0, mix = 0;
	unsigned sum = 0, k = 0;
	for (int count_4 = 1; count_4 <= 4; count_4 = count_4 + 1) {
		for (int stepen = 0; bit < mix + 8; bit = bit + 1, stepen++) {
			sum = sum + (*(arr_bin + bit)) * kvadrat(2, stepen);
		}
		printf("bit = %d\n sum = %u\n", bit, sum);
		
		do {
			*(output + k) = sumbol(sum % 10);  // функция возвращает число в символьном представлении
			sum = sum / 10;
			k = k + 1;
		} while (sum);
	
		*(output + k) = '.';
		if (bit == 32) {
			*(output + k) = NULL;
			break;
		}	
		k = k + 1;
		sum = 0;
		mix += 8;
	}

	





}

void bin(long long *chislo, int *srray)  //  
{
	int i; 
	int *p = &i;
	for (*p = 0; *chislo; (*p)++) {
		*(srray + (*p)) = (*chislo) % 2;
		*chislo = (*chislo) / 2;
	}
	for (; *p < 32; (*p)++) {
		*(srray + (*p)) = 0;
	}
}




void uint32_to_ip(long long ip, char *output)
{
	int arr_bin[32];
	bin(&ip, arr_bin);   // функция записывает в arr_bin двоичное представоение ip  

	iep(arr_bin, output);
}
