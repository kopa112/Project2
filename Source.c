#include <stdio.h>
#include <locale.h>

void main()
{
    int n;        
    double x, sum;        

    setlocale(LC_CTYPE, "RUS");

    puts("������� ����� ���������� ����������:");
    scanf("%d", &n);
    puts("������� ���� ������ ������� ������ (� ������):");
    scanf("%lf", &x);
   
    sum = (3.0 / 4 * n) * x + (1.0 / 4 * n) * (2 * x);

    printf("����� ����� �� ������� �������: %.2f ������\n", sum);

    return 0;
}