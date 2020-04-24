#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int trab_horas, hrs_nesse_mes, sobra_horas;
    float salar, salar_per_hora, salph;
    setlocale(LC_ALL, "Portuguese");


    printf("Quantas horas o seu funcionário trabalha por semana? exemplo: 40 (sem o h/horas) \n");
    scanf("%i", &trab_horas);
    printf("Quanto o seu funcionario recebe por mês? \n");
    scanf("%f", &salar);
    printf("Ent�o o seu funcionario trabalha %i horas por m�s.\n", trab_horas*4);

    salph = salar /trab_horas*4.0;

    printf("Esse é o salário por hora do seu funcionário por horas feitas: %.2f \n", salph);
    //printf("Por favor escreva o valor do sal�rio por horas feitas(Est� na linha de cima): ");
    //scanf("%f", &salar_per_hora);

    printf("Quantas horas o seu funcionario trabalhou esse mês? \n");
    scanf("%i", &hrs_nesse_mes);

    printf("Seu funcionário trabalhou %i horas a mais que a carga horária dele.\n", hrs_nesse_mes - trab_horas);
    //printf("Por favor escreva o valor de horas a mais(Está na linha de cima): ");
    //scanf("%i", &sobra_horas);

    printf("Seu funcionário deverá receber %.2f reais.\n", 1.5*salar_per_hora*sobra_horas + salar);
    return 0;
}
