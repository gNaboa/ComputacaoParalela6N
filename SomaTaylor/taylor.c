#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void TaylorSum(unsigned long long int T,double* global_s);         /* Armazena resultado na variavel global_S */

int main(int argc, char* argv[]){            

  double global_result = 0.0;
  int n;                                      /* Valor de T */
  unsigned long long int thread_count;           /* Quantidade de threads */

   thread_count=strtol(argv[1],NULL,10);
   printf("Digite o valor de T\n");            /* Recebe valor de T */
   scanf("%d",&n);
  # pragma omp parallel num_threads(thread_count)
    TaylorSum(n,&global_result);

     printf("A soma é %f\n",global_result);

    return 0;
}
void TaylorSum(unsigned long long int T, double* global_s){
   double s = 0.0;
   unsigned long long int i;

   #pragma omp for
     for(i=1;i<=T;i++){
       s+=(double)1/i;
     }

   #pragma omp critical
     *global_s +=s;
}
