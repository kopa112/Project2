#include <stdio.h>
#include <locale.h>

void main()
{
    int n;        
    double x, sum;        

    setlocale(LC_CTYPE, "RUS");

    puts("¬ведите общее количество пассажиров:");
    scanf("%d", &n);
    puts("¬ведите цену билета второго класса (в фунтах):");
    scanf("%lf", &x);
   
    sum = (3.0 / 4 * n) * x + (1.0 / 4 * n) * (2 * x);

    printf("ќбща€ сумма от продажи билетов: %.2f фунтов\n", sum);

    return 0;
}