//c언어 콘서트 챕터 9 프로그래밍 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int reverse(int *ptr, int size)
{
   
    printf("역순: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }
    
}

int main(void)
{   
    int A[5];
    printf("5개의 정수를 입력하시오 :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    
    reverse(A, 5);
     printf("\n");
     printf("컴퓨터공학과\n");
     printf("20244365\n");
     printf("박관홍\n");

    return 0;
}