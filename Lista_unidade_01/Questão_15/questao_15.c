/*Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função
de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para
a função de comparação.
*/

#include <stdio.h>
#include <stdlib.h>

void ordem(int n, float num[]);  		 
void entrada(int n, float num[]);

int main() {
  int tam;										
  float *x;										

  printf("Digite a qtd de num: \n");			
  scanf("%d", &tam);							

  p = malloc(tam * sizeof(float));				
  
  entrada(tam, p);								
  
  printf("--------- ORDENAÇAO ---------\n");
  
  ordem(tam, p);								
						
  for(int i=0; i<tam; i++){
    printf("%.2f ", p[i]);
  }

  return 0;
}


void entrada(int tam, float num[]){							
  printf("Digite os numeros para serem ordenados: \n");		
  for(int i=0; i<tam; i++){									
    scanf("%f", &num[i]);									
  }
}

void ordem(int tam, float num[]){							
   for( int i=0; i<tam; i++ ){
    for( int j=i+1; j<tam; j++ ){  
      if( num[i] > num[j] ){
        float aux;
        aux =num[i];
        num[i] = num[j];
        num[j] = aux;
      }
    }
  }				
}

