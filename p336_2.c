//c언어 콘서트 챕터 8 프로그래밍 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


double get_bigger(double x, double y)
{
if (x > y)
{
    printf("더 큰수는 %lf입니다.", x);
    return x;
}
else
{
    printf("더 큰수는 %lf입니다.", y);
    return y;
}
}

int main(void)
{
    double x, y;
    printf("실수를 입력하시오 =");
    scanf("%lf", &x);

    printf("실수를 입력하시오 =");
    scanf("%lf", &y);   
    get_bigger(x, y);

    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍\n");

    return 0;
}

   

    

