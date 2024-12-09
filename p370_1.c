//c언어 콘서트 챕터 9 프로그래밍 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_array_sum(int *A, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(A + i);
    }
    
    return sum;
    
}
int main(void)
{
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    printf("print_array()\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", data[i]);
    }

     printf("\n배열 요소의 합 = %d", get_array_sum(data, 10));
     printf("\n");
     printf("컴퓨터공학과\n");
     printf("20244365\n");
     printf("박관홍\n");


     return 0;


    
}