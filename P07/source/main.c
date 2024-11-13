#include <stdio.h>
#include <stdlib.h>

#define SIZE 12  // 可以根據不同班級學生人數來修改

int main()
{
	{
		int s[SIZE] = {1,3,5,4,7,2,99,16,45,67,89,45};
		int j;
		int total = 0;
		for (j = 0; j < SIZE; j++)
			total += s[j];
		printf("Total of array element valus is %d\n", total);
		system("pause");
		return 0;
	}
}