#include <stdio.h>

int main(void) {

  system ("clear");
  
  float altura, pesoIdeal, sexo; // acho que poderia colocar o sexo em um char, que pode colocar valores reais de -138 a 127 

  printf("Digite a sua altura (em metros): ");
  scanf("%f", &altura);

  printf("Digite o seu sexo (M para masculino e F para feminino): ");
  scanf(" %f", &sexo);

  if (sexo == 'M') { // se sexo = M então faz a conta e dá o resultado
    pesoIdeal = 72.7 * altura - 58;
    printf("Seu peso ideal é %.2f kg.\n", pesoIdeal);
  } else if (sexo == 'F') { // sexo = F então faz a conta e dá o resultado
    pesoIdeal = 62.1 * altura - 44.7;
    printf("Seu peso ideal é %.2f kg.\n", pesoIdeal);
  } else {
    printf("Escreva M ou F.\n");
  }

  return 0;
}
