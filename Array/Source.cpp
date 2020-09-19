#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main() 
{
	char c[100];
	int n=0;
	scanf("%s", &c);

	while (c[n] != '\0')
	{
		n++;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", c[i]);
		}
		printf("\n");
	}

	return 0;
}