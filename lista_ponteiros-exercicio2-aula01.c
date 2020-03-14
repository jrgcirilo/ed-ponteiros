#include <stdio.h>



int main()
{
    

int Vet[10];
    
int i, Maior, *pMaior;

pMaior=&Maior;

for(i=0; i<10; i++){

scanf("%d",&Vet[i]);

}

*pMaior = Vet[0];
    
for(i=0; i<10; i++){
 
if (Vet[i] > *pMaior)
          
*pMaior = Vet[i];

}

printf("O maior elemento e %d\n",Maior);
printf("O endereco do maior elemento e %d\n",&Maior);
printf("O endereco apontado pelo ponteiro e %d\n",pMaior);
}

