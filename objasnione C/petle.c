#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //petle

    /*for (inicjalizacja; warunek; zmiana){
        instrukcje
    }
    Inicjalizacja – ustawia wartość początkową zmiennej
    Warunek – określa, czy pętla ma się dalej wykonywać
    Zmiana – zmienia wartość zmiennej po każdym obiegu pętli


    kiedy uzywamy:
    - Gdy chcemy wypisać liczby od 1 do 100
    - Gdy chcemy wykonać działanie 10 razy
    - Gdy chcemy przejść przez wszystkie elementy tablicy
    - Gdy chcemy obliczyć sumę kilku liczb
    - Gdy znamy liczbę powtórzeń
    */
    int n = 5;
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", i);
    }



    /*while (warunek){
        instrukcje
    }
    Warunek – określa, czy pętla ma się wykonywać
    Instrukcje – kod wykonywany, dopóki warunek jest prawdziwy


    kiedy uzywamy:
    - Gdy nie wiemy, ile razy pętla się wykona.
    - Gdy czekamy na podanie odpowiedniej wartości przez użytkownika.
    - Gdy chcemy wykonywać kod, dopóki warunek jest spełniony.
    - Gdy program ma działać do momentu wystąpienia określonego zdarzenia.
    - Gdy chcemy powtarzać obliczenia do uzyskania konkretnego wyniku.
     */
    int haslo = 0;
    
    while (haslo != 1234) {
        printf("Podaj haslo: ");
        scanf("%d", &haslo);
    }
    
    printf("Poprawne haslo");



    /*do{
        instrukcje
    }while (warunek);

    do – rozpoczyna wykonywanie kodu.
    Instrukcje – kod, który ma się wykonać.
    while – sprawdza warunek po wykonaniu kodu.
    Warunek – określa, czy pętla ma się powtórzyć.


    kiedy uzywamy:
    - Gdy kod musi wykonać się przynajmniej jeden raz.
    - Gdy tworzymy menu programu.
    - Gdy chcemy, aby użytkownik przynajmniej raz podał dane.
    - Gdy program ma pytać o dane do momentu wpisania poprawnej wartości.
    - Gdy sprawdzamy warunek dopiero po wykonaniu instrukcji.
     */
    int wybor;
    
    do {
        printf("1. Start\n");
        printf("2. Koniec\n");
        printf("Wybierz: ");
    
        scanf("%d", &wybor);
    }while (wybor != 2);
    
    printf("Koniec programu");


    //ZADANIE
    //napisz program, ktory pobiera od uzytkownika liczbe i wypisuje jej tabliczke mnozenia od 1 do 10

    int n;
    printf("Podaj liczbe: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", n*i);
    }
    
    printf("\nKONIEC");


    //ZADANIE
    //napisz program, ktory pobiera od uzytkownika liczbe i wypisuje wszystkie liczby parzyste do podanej liczby(while)

    int n, i = 0;
    
    printf("Podaj liczbe: ");
    scanf("%d", &n);
    
    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }



    //ZADANIE
    //napisz program, ktory wylosuje liczbe od 0 do 100, a uzytkownik probuje ja zgadnac
    //jesli poda za mala liczbe, program pisze „Za malo!”.
    //jesli poda za duza, program pisze „Za duzo!”.
    //jesli zgadnie, program pisze „Brawo!”.

    int x = rand() % 101, y; // 0 do 100
    
    do {
        printf("Podaj liczbe: ");
        scanf("%d", &y);
    
        if (y < x){printf("Za mało\n");}
        else if (y > x){printf("Za dużo\n");}
        else if (y == x){printf("Brawo\n");}
    } while (y != x);

    return 0;
}
