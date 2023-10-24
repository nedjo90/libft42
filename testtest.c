#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(void)
{
	int *tab = NULL;

	
	tab = calloc(0,INT_MAX);
	if (tab == NULL)
		printf("NULL");
	else
	{
		printf("%d", *(tab));
	}
}
