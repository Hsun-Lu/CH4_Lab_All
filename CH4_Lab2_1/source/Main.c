#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x = 100, y = a(x);
	printf("x=%d\n", x);
	system("pause");
}

int a(int x)
{
	x++;
	printf("x=%d\n", x);
	return x;
}