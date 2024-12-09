//c언어 콘서트 챕터 9 프로그래밍 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double *xplus, double *xminus)
{
    *xminus = (-b - sqrt(b * b - 4 * a * c))/ (2 * a);
    *xplus = (-b + sqrt(b * b - 4 * a * c))/ (2 * a);
}

int main(void)
{ 
    int a, b, c;
    double xplus, xminus;
    a = 1;
    b = 4;
    c = 3;
    
    quadratic(a, b, c, &xplus, &xminus);
    
    printf("첫번째 실근 = %lf\n", xplus);
    printf("두번째 실근 = %lf", xminus);

    printf("\n");
    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍\n");


    return 0;

}