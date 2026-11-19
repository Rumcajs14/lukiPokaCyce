#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //zmienne

    int liczbaCalkowita = 5; //liczba całkowita
    float zmiennoprzecinkowa = 5.99; //liczba rzeczywista(4 bajtów)
    double wiekszaZmiennoprzecinkowa = 67.69; //liczba rzeczywista(8 bajtów)

    bool prawdaFalsz = false; //zwraca wartosc albo prawdziwa albo falszywa(1/0)
    char *zank = "A"; //przechowuje pojedynczy znak
    char lancuchZnakow[50] = "Lodzik dla ciebie"; //przechowuje tekst

    /*operatorzy
     + dodawanie
     - odejmowanie
     * mnozenie
     / dzielenie
     = przypisanie
     % reszta z dzielenia
    */


    //pobranie liczby z klawiatury
    // printf("Podaj liczba: ");
    // scanf("%d", &n);

    /*
    %d	int
    %f	float
    %lf	double
    %c	char
    %s	Łańcuch znaków (char[])
     */


    /*if else
    operatorzy
    == równe
    != różne
    > wieksze
    < mniejsze
    >= wieksze rowne
    <= mniejsze rowne
    */
    // if (/*warunek*/n == 5) {
    //     //jesli warunek jest spelniony to co ma sie wykonac
    //     printf("Liczba jest rowna 5");
    //
    // }else/*jesli warunek nie jest spelniony*/ {
    //     printf("Liczba nie jest rowna 5");
    // }

    //ZADANIE
    //napisz program, ktory sprawdza czy podany rok jest rokiem przestepnym

    // int r;
    //
    // printf("Podaj rok: ");
    // scanf("%d", &r);
    //
    // if(r % 4 == 0 && (r % 100 != 0 || r % 400 == 0)) {
    //     printf("rok jest przestepny");
    // } else {printf("rok nie jest przestepny");}






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
    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", i);
    // }



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
    // int haslo = 0;
    //
    // while (haslo != 1234) {
    //     printf("Podaj haslo: ");
    //     scanf("%d", &haslo);
    // }
    //
    // printf("Poprawne haslo");



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
    // int wybor;
    //
    // do {
    //     printf("1. Start\n");
    //     printf("2. Koniec\n");
    //     printf("Wybierz: ");
    //
    //     scanf("%d", &wybor);
    // }while (wybor != 2);
    //
    // printf("Koniec programu");


    //ZADANIE
    //napisz program, ktory pobiera od uzytkownika liczbe i wypisuje jej tabliczke mnozenia od 1 do 10

    // int n;
    // printf("Podaj liczbe: ");
    // scanf("%d", &n);
    //
    // for (int i = 1; i <= 10; i++) {
    //     printf("%d\n", n*i);
    // }
    //
    // printf("\nKONIEC");


    //ZADANIE
    //napisz program, ktory pobiera od uzytkownika liczbe i wypisuje wszystkie liczby parzyste do podanej liczby(while)

    // int n, i = 0;
    //
    // printf("Podaj liczbe: ");
    // scanf("%d", &n);
    //
    // while (i <= n) {
    //     if (i % 2 == 0) {
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }



    //ZADANIE
    //napisz program, ktory wylosuje liczbe od 0 do 100, a uzytkownik probuje ja zgadnac
    //jesli poda za mala liczbe, program pisze „Za malo!”.
    //jesli poda za duza, program pisze „Za duzo!”.
    //jesli zgadnie, program pisze „Brawo!”.

    // int x = rand() % 101, y; // 0 do 100
    //
    // do {
    //     printf("Podaj liczbe: ");
    //     scanf("%d", &y);
    //
    //     if (y < x){printf("Za mało\n");}
    //     else if (y > x){printf("Za dużo\n");}
    //     else if (y == x){printf("Brawo\n");}
    // } while (y != x);










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

    // int liczby2[5];
    //
    // for (int i = 0; i < 5; i++) {
    //     printf("Podaj liczbe: ");
    //     scanf("%d", &liczby2[i]);
    // }

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

    // int n, suma = 0;
    // double srednia = 0;
    //
    // printf("Podaj n:");
    // scanf("%d", &n);
    //
    // int liczb[n];
    //
    // for (int i = 0; i < n; i++) {
    //     printf("Podaj liczbe: ");
    //     scanf("%d", &liczby[i]);
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     suma += liczby[i];
    //     srednia = suma/n;
    // }
    //
    // printf("Suma: %d\n", suma);
    // printf("Srednia: %.2lf\n", srednia);







    // ZADANIE
    // pobierz 10 liczb do tablicy, wyswietl tylko te liczby, ktore sa parzyste


    // int liczby2[10];
    //
    // for (int i = 0; i < 10; i++) {
    //     printf("Podaj liczbe: ");
    //     scanf("%d", &liczby2[i]);
    // }
    //
    // for (int i = 0; i < 10; i++) {
    //     if (liczby2[i] % 2 == 0) {
    //         printf("%d\n", liczby2[i]);
    //     }
    // }


    //ZADANIE


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

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         printf("%d ", tab[i][j]);
    //     }
    //     printf("\n");
    // }







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