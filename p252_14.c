//c언어 콘서트 챕터 6 프로그래밍 14
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int  n, result;
    result = 0;
  printf("n의 값을 입력하시오:",n );
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
   result += (i * i);
    
  }
  printf("계산값은 %d입니다.\n", result);
    
    printf("20244365\n");
    printf("컴퓨터공학과\n");
    printf("박관홍\n");
 
 return 0;


}