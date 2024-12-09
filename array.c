//삼각형 형식으로 나타내는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int b = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (b < 15)
            {
                printf("%d", a[b++]);
            }
        }
             printf("\n");
            
    }

    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍");
        
    

    return 0;
    

}