#include <stdio.h>

int main()

   {
    double A,B,C;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    if (A<B+C && B<A+C && C<A+B)
    {
        printf("Perimetro = %.1f\n", A+B+C);
    }
    else
    {
        printf("Area = %.1f\n", C*(A+B)/2);
    }
    return 0;

}
