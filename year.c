#include <stdio.h>


int main ()
{
float year, clock, min2;
int day, hour, min, sec;

year = 365.2422;
printf("1년은 %.4f 일입니다.\n", year);

day = year / 1; // = 365
printf("%d일\n", day);

hour = (year - day) * 24; // = 0.2422 *
printf("%d시간\n", hour);  

clock = (year - day) *24;

min = (clock - (int)clock) * 60;
printf("%d분\n", min);

min2 = (clock - (int)clock) * 60;
sec = (min2 - (int)min2) * 60;
printf("%d초\n", sec);

printf("컴퓨터공학과\n");
printf("20244365\n");
printf("박관홍\n");

 return 0;
}