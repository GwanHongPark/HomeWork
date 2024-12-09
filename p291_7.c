//c언어 콘서트 챕터 7 프로그래밍 7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[3][3];
    int b[3][3];
    int c[3][3] = {0};

    printf("행 개수 = 3\n 열 개수 = 3\n");

    printf("첫 번째 행렬 입력 =\n");
    scanf("%d %d %d\n %d %d %d\n %d %d %d", 
    &a[0][0], &a[0][1], &a[0][2], 
    &a[1][0], &a[1][1], &a[1][2], 
    &a[2][0], &a[2][1], &a[2][2]);

    printf("두 번째 행렬 입력 =\n");
    scanf("%d %d %d\n %d %d %d\n %d %d %d", 
    &b[0][0], &b[0][1], &b[0][2], 
    &b[1][0], &b[1][1], &b[1][2], 
    &b[2][0], &b[2][1], &b[2][2]);
   
   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        c[i][j] = 0;
        for (int z = 0; z < 3; z++)
        {
            c[i][j] += a[i][z] * b[z][j];
        }
        
    }
    
   }
   printf("%d %d %d\n%d %d %d\n%d %d %d", 
   c[0][0], c[0][1], c[0][2], 
   c[1][0], c[1][1], c[1][2], 
   c[2][0], c[2][1], c[2][2]);
    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍");

   return 0;
   


}