//c언어 콘서트 챕터 7 프로그래밍 4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[5];
    int tmp;
    int x = 5;

    for (int i = 0; i < x; i++)
    {
        printf("정수를 입력하시오: ");
        scanf("%d", &a[i]);

    }
    for (int i = 0; i < x - 1; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
     {
             if (a[j] > a[j + 1])
        {
            tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
        }
     }
        
        
        

    }
        printf("최대값 = %d ", a[x - 1]);
        printf("최소값 = %d", a[0]);

        printf("\n");
        printf("컴퓨터공학과\n");
        printf("20244365\n");
        printf("박관홍");
    return 0;
    

}