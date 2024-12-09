#include <stdio.h>

int main()
{
    char lag1, lag2, lag3; // a b c  --> c b a
    char tmp1; 
    printf("문자를 입력하시오 :");
    scanf(" %c %c %c", &lag1, &lag2, &lag3);
    
    tmp1 = lag1;
    lag1 = lag3;
    lag3 = tmp1;

     printf("문자 : %c %c %c\n", lag1, lag2, lag3);



    return 0;
}