#include <stdio.h>

int main()
{
    float a, b;
    
    printf("x의 값을 입력하시오:");
    scanf("%f", &a);

    b = (a*a*a - 20) / (a - 7);
    printf("수식의 값은 %.6f입니다.\n", b);

    printf("컴퓨터공학과\n");
    printf("20244365\n");
    printf("박관홍\n");

    return 0;
    


}