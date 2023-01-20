#include <stdio.h>

void a(int argc, char **argv)
{
	for (int i = 1; i < argc; i++) 
	{
		printf("%s\n", argv[i]);
	}
	int arr[argc];
	int i = 1;
	int t = 0;
  	int r = 0;
	int max_ciunt = 0;
	for (i; i < argc; i++, r++)
	{
		for (t; argv[i][t]; t++)
		{
		}
		arr[r] = t;
		if (max_ciunt < t)
			max_ciunt = t;
		t = 0;
	} 
	for (int e = 0; e < argc - 1; e++)
	{
		if (max_ciunt == arr[e])
		{
			printf("max = %d, slovo = %s\n", max_ciunt, argv[++e]);
			return;
		}

	}
}

int pov_bykv(char *slv)	
{
	int t = 0;
	for (int y = 0; *(slv + y); y++)
	{
		for (t = y + 1; *(slv + t); t++)
		{
			if (*(slv + y) == *(slv + t))
				return 0;
		}
	}
	return 1;

}

void b(int argc, char **argv)
{
	int i = 1;
	for (i; i < argc; i++)
	{
		if (pov_bykv(argv[i]))
			printf("%s\n", argv[i]);
	} 
}

void g(int argc, char **argv)
{
	int i;
	int u;
	int t = 0;

	for (int y = 5; argv[2][y]; y++)
		printf("%c\n", argv[2][y]);

	for (i = 0; argv[1][i]; i++)
	{
		printf("%c\n", argv[1][i]);
		for (u = 2; argv[u][t]; u++, t++)
		{
			printf("tar");
			if (argv[1][i] == argv[u][t])
				printf("%s", argv[u]);
				
			continue;


		} 

	}

/*

	for (i = 0; argv[1][i]; i++)
	{
		for (u = 2; argv[u][t]; u++, t++)
		{
			if (argv[1][i] == argv[u][t])
				printf("%s", argv[u]); 


		} 

	}

*/

}

int main(int argc, char **argv) 
{
	
	g(argc, argv);
	return 0;
}


