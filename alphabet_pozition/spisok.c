#include <stdio.h>
#include <stdlib.h>

struct item {
	int data;	
	struct item *next;
};

struct item *int_arrey(int *arr, int len)
{
/*
	struct item *first = NULL, *last = NULL, *tmp;	
	int i;
	for (i = 0; i < len; i++)
	{
		tmp = malloc(sizeof(struct item));
		tmp -> data = arr[i];
		tmp -> next = NULL;
		if (last) 
		{
			last -> next = tmp;
			last = last -> next;
		} else {
			first = last = tmp;
		}
	}
	return first;
*/

	struct item *tmp;

	if (!len)
		return NULL;
	tmp = malloc(sizeof(struct item));
	tmp -> data = *arr;
	tmp -> next = int_arrey(arr + 1, len - 1);
	return tmp;
}



int *b(struct item *spisok)
{
	int i = 0;
	for (struct item *tmp = spisok; tmp != NULL; tmp = tmp -> next, i++) 
	{}

	int *arey = (int*) malloc(i + 1);
	
	arey[0] = i;
	i = 1;
	for (struct item *tmp = spisok; tmp != NULL; tmp = tmp -> next, i++) 
	{
		arey[i] = tmp -> data;	
	}	
	return arey;
}

int main()
{
	int arr[] = {12,2,3,4,4,5,4};
	
	
	struct item *spisok = int_arrey(arr, sizeof(arr) / sizeof(arr[0]));
	
	struct item *first = spisok;
	
	for (first; first != NULL; first = first -> next)
	{
		printf("%d\n", first -> data);
	} 
	
	printf("Vot %d\n", *(b(spisok) + 1));
	return 0;
}
