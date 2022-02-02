#include <stdio.h>
#include <math.h>

void calculation(int a, int b, int c, double delta)
{
    double result1,result2;
    if(delta > 0)
    {
        result1 = (-b + sqrt(delta))/(2*a);
        result2 = (-b - sqrt(delta))/(2*a); 
        printf("\nPT co 2 nghiem: ");
        printf("\nNghiem 1: %f", result1);
        printf("\nNghiem 2: %f", result2);
    }
    else if(delta == 0)
    {
        result1 = (-b/(2*a));
        printf("PT co nghiem chung: %f\n", result1);
    }
    else printf("PT vo nghiem \n");
}

int main()
{
    int a, b, c;
    double delta;
    printf("Nhap cac co so.\n");
    printf("Nhap co so 1: ");
    scanf("%d",&a);
    printf("Nhap co so 2: ");
    scanf("%d",&b);
    printf("Nhap co so 3: ");
    scanf("%d",&c);
    delta=(b*b-4*a*c);
    calculation(a,b,c,delta);
    return 0;
}