//c언어 콘서트 챕터 6 프로그래밍 16
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    int x, y;
    printf("정수를 입력하시오:");
    scanf("%d", &x);

    for (int i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            
            printf("%d은(는) 소수가 아닙니다.\n",x);
            printf("20244365\n");
            printf("컴퓨터공학과\n");
            printf("박관홍\n");
            return 0;
        }

       
    }
    printf("%d은(는) 소수입니다.\n", x);
    printf("20244365\n");
    printf("컴퓨터공학과\n");
    printf("박관홍\n");
    
    return 0;
}



