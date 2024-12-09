//c언어 콘서트 챕터 10 프로그래밍 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char spell[300] = {0};
    

    printf("텍스트를 입력하시오 : ");
    fgets(spell, 300, stdin);

   for (int i = 0; i < strlen(spell); i++)
   {
     spell[i] = toupper(spell[i]);
   }
   
   printf("대문자 출력 : %s\n", spell);
   printf("컴퓨터공학과\n");
   printf("20244365\n");
   printf("박관홍\n");

    return 0;
}