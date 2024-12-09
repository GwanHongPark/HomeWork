//c언어 콘서트 챕터 6 프로그래밍 13
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

    int x, y, z, sum;
    printf("몇 번째 항까지 구할까요? ");
    scanf("%d", &x);
    
    y = 0;
    z = 1;
    printf("%d, %d,", y, z);
    

    for (int i = 2; i <= x; i++)
    {
        sum = y + z;
        printf("%d,", sum);
        y = z;
        z = sum;
    }
    printf("\n");
    printf("20244365\n");
    printf("컴퓨터공학과\n");
    printf("박관홍\n");
       return 0;
}