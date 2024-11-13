#include<stdio.h>
#include<stdlib.h>

void inverse(int *);

void main()
{
	int a[3] = { 3,5,7 };
	for (int i = 0; i <= 2; i++)
		printf("%d ", a[i]);

	printf("\n");

	inverse(a);

	for (int i = 0; i <= 2; i++)
		printf("%d ", a[i]);
	printf("\n");

	system("pause");
}
void inverse(int* b)
{
	int tmp[3], i;
	for (i = 0; i < 3; i++)
		tmp[2 - i] = b[i];
	for (i = 0; i < 3; i++)
		b[i] = tmp[i];
}