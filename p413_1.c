//c언어 콘서트 챕터 10 프로그래밍 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



int main(void)
{
    char spell[50] = {0};
    int freqent[128] = {0};

    printf("텍스트를 입력하시오 :");
    fgets(spell, 50, stdin);

    for (int i = 0; i < strlen(spell); i++)
    {
        freqent[spell[i]]++;
    }
    
        for (int j = 'a'; j <= 'z'; j++)
        {
        if(freqent[j] != 0)
        {
            printf("%c문자가 %d번 등장하였음\n", j, freqent[j]);
        }
        }
    
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍\n");
    
    return 0;
}