/*Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
das implementações que você criou para os dois problemas de ordenação anteriores e compare
os resultados obtidos.
*/

// 16.2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//COM QSORT

int compara(const void*x, const void*y); 
void ordem(int tam, float num[]);
void entrada(int tam, float num[]);

int main() {
    int tam;
    float *p;

    clock_t tempo;

    printf("Digite a qtd de numeros para ordenar:");
    scanf("%d",&tam);

    p = malloc(tam * sizeof(float));

    entrada(tam,p);
    tempo=clock();
    ordem(tam,p);
    tempo=clock()-tempo;

    for(int i=0; i<tam; i++){
        printf("%.2f ",p[i]);
    }
    return 0;
}

int compara(const void*x, const void*y){ 
  float fx = *(const float *)x,fy = *(const float*)y; 
  return (fx>fy) - (fx<fy);	
}

void entrada(int tam, float num[]){
  printf("Digite os numeros para serem ordenados: \n");
  for(int i=0; i<tam; i++){
    scanf("%f", &num[i]);
  }
}
