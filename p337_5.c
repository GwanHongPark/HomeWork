//c언어 콘서트 챕터 8 프로그래밍 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_prime(int x)
{
    if (x < 2)
    {
        return 0;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
    
}

int main(void)
{
    for(int i = 1; i <= 100; i++)
    {
        if(check_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍\n");
    return 0;
}