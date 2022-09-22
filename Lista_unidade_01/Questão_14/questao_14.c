/*Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas.*/

#include <stdio.h>
#include <stdlib.h>

int compara(const void*x, const void*y); 
void ordem(int n, float num[]);  		 
void entrada(int n, float num[]);

int main() {
  int tam;		//Declara variável inteira tam/ tamanho
  float *p;		// Declara ponteiro

  printf("Digite a qtd de num: \n"); // Solicita entrada ao usuário para o tamanho
  scanf("%d", &tam); // Entrada do usuário

  p = malloc(tam * sizeof(float));	// Alicação dinâmica do p
  
  //Chama as funções
  entrada(tam, p);	//Chama função entrada
  
  printf("--------- ORDENAÇAO ---------\n");
  ordem(tam, p);	//Chama função ordem
  
  //Apresenta na tela							
  for(int i=0; i<tam; i++){
    printf("%.2f ", p[i]);
  }

  return 0;
}

int compara(const void*x, const void*y){ // Compara os array
  float fx = *(const float *)x,fy = *(const float*)y;  // Define o valor fx p/ x; fy p/ y
  return (fx>fy) - (fx<fy);	// Retorna 1 se fx for maior que fy e -1 se for menor.
}


void entrada(int tam, float num[]){	//Função de entrada para inserir as informações
  printf("Digite os numeros para serem ordenados: \n");		
  for(int i=0; i<tam; i++){	// Laço de repetição para percorrer pelo array
    scanf("%f", &num[i]);	//Insere o valor no array
  }
}

void ordem(int tam, float num[]){	//Função de ordenação
   qsort(num, tam, sizeof(float), compara); //Chama função qsort
}
