#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //tablice

    /*
    Tablica – pozwala przechowywac wiele wartosci tego samego typu
    Indeksy tablicy zaczynaja sie od 0, a nie od 1
    */


    //tworzenie tablic

    int liczby[5] = {1, 2, 3, 4, 5}; //tablica liczb calkowitych
    double liczbyRzeczywiste[3] = {1.5, 2.5, 3.5}; //tablica liczb rzeczywistych
    char litery[4] = {'A', 'B', 'C', 'D'}; //tablica znakow
    char imie[20] = "Kacper"; //tablica przechowujaca tekst


    /*
    dostep do elementow tablicy

    int liczby[5] = {10, 20, 30, 40, 50};

    Indeks:    0   1   2   3   4
    Wartosc:  10  20  30  40  50

    */

    printf("%d", liczby[0]); //wypisuje pierwszy element (10)
    liczby[2] = 100; //zmienia trzeci element na 100


    //wyswietlanie tablicy za pomoca petli for

    int tablica[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", tablica[i]);
    }


    /*
    pobieranie danych do tablicy

    Mozemy pobrac liczby od uzytkownika i zapisac je w tablicy.
    */

    int liczby2[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Podaj liczbe: ");
        scanf("%d", &liczby2[i]);
    }

    /*
    tablice dwuwymiarowe

    Tablica dwuwymiarowa przypomina tabele skladajaca sie z wierszy i kolumn.
    int tablica[wiersze][kolumny];
    */

    int tablica2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    //wyswietlanie tablicy dwuwymiarowej

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", tablica2D[i][j]);
        }
        printf("\n");
    }


    /*
    DO ZAPAMIETANIA:

    - Tablica przechowuje wiele wartosci tego samego typu.
    - Indeksy zaczynaja sie od 0.
    - int liczby[5] oznacza 5 elementow.
    - liczby[0] oznacza pierwszy element.
    - liczby[4] oznacza piaty element.
    - Do przechodzenia przez tablice najczesciej uzywamy for.
    - Nie wolno odwolac sie do indeksu poza zakresem tablicy.
    */



    // ZADANIE
    // pobierz od uzytkownika N liczb i zapisz je w tablicy, oblicz ich sume oraz srednia

    int n, suma = 0;
    double srednia = 0;
    
    printf("Podaj n:");
    scanf("%d", &n);
    
    int liczb[n];
    
    for (int i = 0; i < n; i++) {
        printf("Podaj liczbe: ");
        scanf("%d", &liczby[i]);
    }
    
    for (int i = 0; i < n; i++) {
        suma += liczby[i];
        srednia = suma/n;
    }
    
    printf("Suma: %d\n", suma);
    printf("Srednia: %.2lf\n", srednia);







    // ZADANIE
    // pobierz 10 liczb do tablicy, wyswietl tylko te liczby, ktore sa parzyste


    int liczby2[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Podaj liczbe: ");
        scanf("%d", &liczby2[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (liczby2[i] % 2 == 0) {
            printf("%d\n", liczby2[i]);
        }
    }


    //ZADANIE
    //Napisz program, ktory wypelni tablice o wymiarach NxN szachownica 0 i 1

    int n;

    printf("Podaj liczbe: ");
    scanf("%d", &n);

    int tab[n][n];

    for (int i = 0; i < n; i++) {//i = wiersz
        for (int j = 0; j < n; j++) {//j = kolumna
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                 tab[i][j] = 1;
                }else{tab[i][j] = 0;}
            }else {
                if (j % 2 == 0) {
                    tab[i][j] = 0;
                }else{tab[i][j] = 1;}
            }
        }
    }


    //petla do wypisana

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
