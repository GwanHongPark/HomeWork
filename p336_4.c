//c언어 콘서트 챕터 8 프로그래밍 4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_divisor(int x)
{
        for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d ", i);
        }
        
    }
    
}

int main(void)
{
    int x;
    printf("정수를 입력하시오:");
    scanf("%d", &x);

    printf("%d의 약수:",x);
    get_divisor(x);

    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍\n");




    return 0;
}