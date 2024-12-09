//c언어 콘서트 챕터 7 프로그래밍 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define array 100
int main(void)
{
    int a[array];
    int b, tmp;

    printf("입력할 정수의 개수:");
    scanf("%d", &b);

    for (int i = 0; i < b; i++)
    {
        printf("%d번째 요소를 입력하시오:",i);
        scanf("%d",&a[i]);
    }    

    for (int i = 0; i < b - 1; i++)
    {
        for (int j = 0; j < b - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
            
        }
        
    }
        for (int i = 0; i < b; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\n");
        printf("컴퓨터공학과\n");
        printf("20244365\n");
        printf("박관홍");

        
    

        

       
           



    
    
    return 0;
    

}