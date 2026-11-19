#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /*if else
    operatorzy
    == równe
    != różne
    > wieksze
    < mniejsze
    >= wieksze rowne
    <= mniejsze rowne
    */

    int n = 5; 
  
    if (/*warunek*/n == 5) {
        //jesli warunek jest spelniony to co ma sie wykonac
        printf("Liczba jest rowna 5");
    
    }else if (n < 5)/*jesli pierwszy warunek nie jest spelniony, a spewnia drugi warunek*/ {
        printf("Liczba jest mniejsza 5");
    }else /*jesli oba warunki nie są spelnione*/{
      printf("Liczba jest większa 5");
    }
    //ZADANIE
    //napisz program, ktory sprawdza czy podany rok jest rokiem przestepnym

    int r;
    
    printf("Podaj rok: ");
    scanf("%d", &r);
    
    if(r % 4 == 0 && (r % 100 != 0 || r % 400 == 0)) {
        printf("rok jest przestepny");
    } else {printf("rok nie jest przestepny");}

    return 0;
}
