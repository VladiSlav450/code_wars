#include <stdio.h>

void b(char *str)
{
	int u = 0;
	int k = 0;
	for (u; str[u]; u++)
	{
		if (str[u] == ' ')
		{
			continue;	
		}
		str[k] = str[u];
		k++;
	}
	str[k] = 0;

	printf("%s\n", str);


}



int main()
{
	char string[] = "hfh fjf hf j jf";
	printf("%s\n", string);
	b(string);


	return 0;
}
