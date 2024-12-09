//c언어콘서트 챕터 8 프로그래밍 14
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int circulation(int n)
{
    int gob = 0;
    for (int i = 1; i <= n; i++)
    {
        //gob += pow(i,3); 결과값이 3024로 나옴 
        gob += i * i * i;  //결과값이 3025로 나옴
    }
     return gob;
}

int main(void)
{   
    int a;
    printf("정수를 입력하시오: ");
    scanf("%d", &a);

   int sum = circulation(a);
    printf("%d", sum);
    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍\n");
    return 0;
}