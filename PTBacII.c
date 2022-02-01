#include <stdio.h>
#include <math.h>

int calculation(int a, int b, int c, double delta);

int main()
{
    int a, b, c;
    double delta;
    printf("Nhap cac co so.\n");
    printf("Nhap co so 1: ");
    scanf(&a);
    printf("\nNhap co so 2: ");
    scanf(&b);
    printf("\nNhap co so 3: ");
    scanf(&c);
    delta = b * b - 4 * a * c;
}