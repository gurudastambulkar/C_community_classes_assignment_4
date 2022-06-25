#include<stdio.h>
#include<conio.h>
int main()
{
    char b;
    printf("Enter a character ");
    scanf("%c",&b);
    int a;
    printf("Enter one number ");
    scanf("%d",&a);
    float c;
    printf("Enter one float value ");
    scanf("%f",&c);
    printf("b=%c, a=%d and c=%f",b,a,c);
    getch();
}
