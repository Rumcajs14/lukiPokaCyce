#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // OPERACJE NA PLIKACH

    /*
    Operacje na plikach pozwalaja zapisywac dane do pliku,
    odczytywac dane z pliku oraz modyfikowac jego zawartosc.

    Do obslugi plikow uzywamy biblioteki stdio.h.

    FILE *plik – wskaznik na plik.
    */


    // otwieranie pliku

    FILE *plik;

    plik = fopen("dane.txt", "w");

    /*
    Tryby otwierania pliku:

    "r"  - odczyt pliku (plik musi istniec)
    "w"  - zapis do pliku (tworzy plik lub usuwa jego stara zawartosc)
    "a"  - dopisywanie na koncu pliku

    "r+" - odczyt i zapis (plik musi istniec)
    "w+" - odczyt i zapis (tworzy plik lub usuwa stara zawartosc)
    "a+" - odczyt i dopisywanie na koncu pliku
    */


    // sprawdzanie czy plik zostal otwarty

    plik = fopen("dane.txt", "w");

    if (plik == NULL) {
        printf("Blad otwierania pliku");
    }


    /*
    zapisywanie tekstu do pliku

    fprintf() – zapisuje dane do pliku, podobnie jak printf().
    */

    FILE *plik1 = fopen("dane.txt", "w");

    if (plik1 != NULL) {
        fprintf(plik1, "Witaj w pliku!");
        fclose(plik1);
    }


    /*
    zapisywanie pojedynczego znaku do pliku

    fputc() – zapisuje jeden znak.
    */

    FILE *plik2 = fopen("dane.txt", "w");

    if (plik2 != NULL) {
        fputc('A', plik2);
        fclose(plik2);
    }


    /*
    odczytywanie tekstu z pliku

    fscanf() – odczytuje dane z pliku.
    */

    FILE *plik3 = fopen("dane.txt", "r");

    char tekst[100];

    if (plik3 != NULL) {
        fscanf(plik3, "%99s", tekst);
        printf("%s", tekst);
        fclose(plik3);
    }


    /*
    odczytywanie calej linii z pliku

    fgets() – odczytuje linie tekstu z pliku.
    */

    FILE *plik4 = fopen("dane.txt", "r");

    char linia[100];

    if (plik4 != NULL) {
        fgets(linia, 100, plik4);
        printf("%s", linia);
        fclose(plik4);
    }


    /*
    odczytywanie pojedynczego znaku

    fgetc() – odczytuje jeden znak z pliku.
    */

    FILE *plik5 = fopen("dane.txt", "r");

    if (plik5 != NULL) {
        char znak = fgetc(plik5);
        printf("%c", znak);
        fclose(plik5);
    }


    /*
    dopisywanie tekstu do pliku

    Tryb "a" dopisuje tekst na koncu pliku,
    nie usuwajac poprzedniej zawartosci.
    */

    FILE *plik6 = fopen("dane.txt", "a");

    if (plik6 != NULL) {
        fprintf(plik6, "\nNowy tekst");
        fclose(plik6);
    }


    /*
    zamykanie pliku

    fclose() – zamyka otwarty plik.

    Po zakonczeniu pracy z plikiem nalezy go zamknac.
    */

    fclose(plik);


    /*
    PRZYDATNE FUNKCJE:

    fopen()   - otwieranie pliku
    fclose()  - zamykanie pliku
    fprintf() - zapisywanie danych do pliku
    fscanf()  - odczytywanie danych z pliku
    fgets()   - odczytywanie calej linii
    fgetc()   - odczytywanie pojedynczego znaku
    fputc()   - zapisywanie pojedynczego znaku
    feof()    - sprawdzanie konca pliku
    */


    // ZADANIE
    // utworz plik dane.txt
    // zapisz do niego swoje imie i nazwisko
    // nastepnie zamknij plik


    // ZADANIE
    // otworz plik dane.txt w trybie odczytu
    // odczytaj jego zawartosc i wyswietl ja w konsoli


    // ZADANIE
    // otworz plik liczby.txt
    // zapisz do niego 5 liczb pobranych od uzytkownika
    // nastepnie odczytaj liczby i oblicz ich sume


    // ZADANIE
    // otworz plik w trybie dopisywania
    // dopisz do niego nowy tekst bez usuwania poprzedniej zawartosci





    return 0;
}
