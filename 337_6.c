//c언어콘서트 챕터 8 프로그래밍 6  
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double power(int x)
{
    for (int i = 0; i <= 10; i++)
    {
        double y = pow(x, i);
        printf("%.0f ", y);
    }
}

int main(void)
{
    power(3);
    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍\n");
    return 0;
}
