#include <stdio.h>
#include <stdlib.h>

#define var 10

int main()
{
	int x = var;
	int y = 20;
	char* name = "salah";
	printf("X value : %i\n", x);
	printf("Y value : %i\n", y);
	for(int i = 0 ; i<5 ; i++)
	{
		printf("your name : %s\n", name);
	}
	return 0;
}