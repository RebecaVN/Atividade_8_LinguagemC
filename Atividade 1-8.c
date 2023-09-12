//Pedro comprou um saco de ra��o com peso em quilos. Pedro possui dois gatos para os quais fornece a quantidade de ra��o em gramas. Fa�a um programa em Linguagem C que receba o peso do saco de ra��o e a quantidade de ra��o fornecida para cada gato por dia. Calcule e mostre quanto restar� de ra��o no saco ap�s cinco dias. 
#include <stdio.h>

int main() {
    float peso_saco, racao_gato, racao_total, racao_restante;

    printf("Digite o peso do saco de racao (em quilos): ");
    scanf("%f", &peso_saco);

    printf("Digite a quantidade de racao fornecida para cada gato por dia (em gramas): ");
    scanf("%f", &racao_gato);

    racao_total = racao_gato * 2 * 5; // quantidade de ra��o total fornecida aos gatos em cinco dias
    racao_restante = peso_saco * 1000 - racao_total; // quantidade de ra��o restante no saco em gramas

    printf("Apos cinco dias, restarao %.f gramas de racao no saco.\n", racao_restante);

    return 0;
}

