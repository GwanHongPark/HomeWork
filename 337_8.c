//c언어콘서트 챕터 8 프로그래밍 8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double quad_eqn(double a, double b, double c)
{
    double pan = b * b - (4 * a * c); 
    if (pan > 0)
    {
        double root1 = (-b + sqrt(pan)) / (2 * a);
        double root2 = (-b - sqrt(pan)) / (2 * a);
        printf("첫 번째 근 = %f\n", root1);
        printf("두 번째 근 = %f", root2);
    }
    else if (pan == 0)
    {
        double root3 = (-b / (2 * a));
        printf("중 근 = %f", root3);
    }
    else
    {
        printf("실근이 없습니다.");
    }
}
int main(void)
{
     double a, b, c;
    printf("2차 방정식의 계수를 입력하시오:\n");
    
    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);
    
    quad_eqn(a, b, c);
    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍\n");
    return 0;
}