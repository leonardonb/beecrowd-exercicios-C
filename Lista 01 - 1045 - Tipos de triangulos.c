#include <stdio.h>
#include <math.h>

    int main()

{
    double A,B,C, X;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    if (A < B)
    {
        X = A; A = B; B = X;
        }
        if (A < C)
        {
            X = A; A = C; C = X;
            }
            if (B < C)
            {
                X = B; B = C; C = X;
                }

    if (A>=B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
        }
        else {
            if (A*A==B*B+C*C)
            {
                printf("TRIANGULO RETANGULO\n");
                }
                if (A*A>B*B+C*C)
                {
                    printf("TRIANGULO OBTUSANGULO\n");
                    }
                    if (A*A<B*B+C*C)
                    {
                        printf("TRIANGULO ACUTANGULO\n");
                        }
                        if (A==B && B==C && A==C)
                        {
                            printf("TRIANGULO EQUILATERO\n");
                            }
                            else if (A==B || A==C || B==C)
                            {
                                printf("TRIANGULO ISOSCELES\n");
                                }
            }
    return 0;

}
