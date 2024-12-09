//c언어 콘서트 챕터 7 프로그래밍 8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[3][3] = {0};

    printf("행 개수 = 3\n열 개수 = 3\n");

    printf("행렬 입력 =\n");
    scanf("%d %d %d\n %d %d %d\n %d %d %d", 
    &a[0][0], &a[0][1], &a[0][2], 
    &a[1][0], &a[1][1], &a[1][2], 
    &a[2][0], &a[2][1], &a[2][2]);

    printf("%d %d %d\n %d %d %d\n %d %d %d", 
    a[0][0], a[1][0], a[2][0],
    a[0][1], a[1][1], a[2][1],
    a[0][2], a[1][2], a[2][2]);

    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍");
    
    return 0;


}