#include <stdlib.h>
#include <stdio.h>
#include "Ipv4.c"


int main()
{
	
	char aee[32];
	long long r = 2149583361;
	printf("\nSYKA!!!\n");
	uint32_to_ip(r, aee);

	printf("%s\n", aee);
	return 0;
}
