#include<stdio.h>
#include<math.h>

double binet(int n) {
    double a = (1+sqrt(5)) / 2;
    double b = (1-sqrt(5)) / 2;

    return (pow(a,n) - pow(b,n))/sqrt(5);
}

int main()
{

    printf("%f",(binet(35)-1)/2);

    return 0;
}

