/*"is2 Thi1s T4est 3a"  -->  "Thi1s is2 3a T4est"*/
#include <stdlib.h>
#include <stdio.h>


char *fy_start_bykva(int r, const char *words)
{
	for(int i = 0; words[i]; i++)
	{
		if (r == (words[i] - 48))
		{
			while ((words[i] != ' ') && (i != 0))
			{
				i--;
			}
			char *p = &words[i++];
			printf("%s\n", p++);
			return p;
		}
	}
	return NULL;
}

int fy_count_word(const char *words)
{
	int i, n = 0; 
	for (i = 0; words[i]; i++)
	{
		if (words[i] == ' ')
			n++;
	}
	return n++;
}

char *order_words (char *ordered, const char *words)
{
	int count_words = fy_count_word(words);
	int k;
	int i = 0;
	for(int t = 1; t != count_words; t++)
	{
		char *start_bykva = fy_start_bykva(t, words); // Функция долж3на вернуть указатель на первый символ слова
		printf("%s\n", start_bykva);
		k = 0;	
	     	while(start_bykva[k] != ' ')
		{
			ordered[i] == start_bykva[k];
			i++;
			k++;
		}	
		ordered[i] == ' ';


	}

	*(ordered + i) = '\0';
	return ordered;
}

int main()
{
	char words[] = "is2 Thi1s T4est 3a";
	char *ordered = malloc(19 * sizeof(char));
	char *k = order_words(ordered, words);
	printf("%s\n", k);
	return 0;
}


