//c언어 콘서트 챕터 6 반복문 프로그래밍 11번
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int x;
    
    printf("정수를 입력하시오:");
    scanf("%d", &x);
    
    for (int i = 1; i <= x; i++)
    {
    for (int j = 1; j <= i; j++)
    
        printf("%d", j);
        printf("\n");
    }
    printf("20244365\n");
    printf("컴퓨터공학과\n");
    printf("박관홍\n");

    
    return 0;
}