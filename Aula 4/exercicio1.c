#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float a, b, c, delta, x1, x2;

    printf("Escreva o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;
    if (delta >= 0){
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b + sqrt(delta))/(2*a);

    printf("as raizes da equação são: ");
    printf("x1 - %.2f\nx2 = %.2f\n", x1, x2);
    } else {
    printf("Não existem raízes reais!!!!");
    }

    return 0;

}
