//c언어 콘서트 챕터 6 프로그래밍 12
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  int x;
  
  
 for (int j = 1; j <= 10; j++)
 {
    printf("데이터를 입력하시오:");
    scanf("%d",&x);
    
    for (int i = 1; i <= x; i++)
  {
    printf("*");
    
  }
   printf("\n");
 }
    printf("20244365\n");
    printf("컴퓨터공학과\n");
    printf("박관홍\n");
  
  return 0;
}