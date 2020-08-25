PSET WEEK 1 Máquina falante.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    
    int N;
     // seed do PRNG
     srand(time(NULL));
     // escolhe número pseudo-aleatório entre [0, 1023]
     int skittles = rand() % 1023;
    
    while (N != skittles){
        printf ("\nEu sou uma máquina de balas falante! Adivinhe quantos Skittles têm dentro de mim. Qual é ele?\n");
        scanf ("%d", &N);
            if (N >= 0){
                if (N <= skittles){
                    printf ("\nHaha! Tenho muito mais Skittles do que isso. Tente novamente.\n");
                }
                    if (N >= skittles){
                        printf ("\nOk, eles não são tantos assim. Tente novamente.\n");
                    }            
            }
                        if (N < 0){
                            printf ("Dica: número entre 0 e 10");
                        }    
    }    
        if (N == skittles ){
            printf ("\nVocê está certo! Nom nom nom nom.");
        }
        
    return 0;
}
