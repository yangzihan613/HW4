#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[10] = { 0 },i; // 初始化一维数组

    printf("%s%13s\n","Element","Value");
    
    for (i = 0; i < 10; i++)
        printf("%d%13d\n", i, arr[i]);
    system("pause");
    return 0;
}
