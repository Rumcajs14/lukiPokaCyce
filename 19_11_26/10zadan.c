#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //ZADANIE 1
    //Program wyznaczający 1000 losowych liczb naturalnych z zakresu [10, 20] i określający
    //ilość wystąpień kaŜdej z liczb w losowanym ciągu. Do losowania liczb proszę
    //wykorzystać funkcję losującą liczby losowe.

    int n = 1000, min_wartosc = 10, max_wartosc = 20, zakres = (max_wartosc - min_wartosc + 1), licznik[11];
    
    for (int i = 0; i < n; i++) {
        int los = rand() % zakres + min_wartosc;
        licznik[los - min_wartosc]++;
    }
    
    for (int i = 0; i < zakres; i++) {
        printf("Liczba %d: wystapila %d\n", min_wartosc + i, licznik[i]);
    }

    //ZADANIE 2
    //Program wczytujący z klawiatury łańcuch znakowy, a następnie przepisujący go do innego
    //łańcucha z pominięciem spacji.

    char wejsciowa[256];
    char wyjscowa[256];
    int j = 0;
    
    // ala ma kota
    scanf("%255[^\n]", &wejsciowa);
    
    for (int i = 0; wejsciowa[i] != '\0'; i++) {
        if (wejsciowa[i] != ' ') {
            wyjscowa[j++] = wejsciowa[i];
        }
    }
    wyjscowa[j] = '\0';
    
    printf("%s\n", wyjscowa);

    //ZADANIE 3
    //Program wczytujący 20 liczb całkowitych do tablicy. Następnie naleŜy wyznaczyć wartość
    //minimalną oraz miejsce jej wystąpienia w tablicy. W przypadku, gdy w tablicy wartość
    //minimalna pojawi się kilka razy, naleŜy wypisać miejsce jej pierwszego wystąpienia.
    //Jak rozwiązać to zadanie, jeśli do poszukiwania minimum moŜna będzie zastosować
    //tylko jedną pętlę?

    int n = 20, tab[n];
    
    for (int i = 0; i < n; i++) {
        printf("Podaj liczbe: ");
        scanf("%d", &tab[i]);
    }
    
    int min = tab[0], indeks = 0;
    
    for (int i = 0; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
            indeks = i;
        }
    }
    
    printf("Wartosc minimalna: %d, na pozycji: %d\n", min, indeks);

    //ZADANIE 4
    // Program wczytujący N≤30 liczb rzeczywistych do tablicy. Następnie, bez korzystania z
    //dodatkowej tablicy pomocniczej, naleŜy odwrócić kolejność liczb w tej tablicy.

    int n;
    double tab[n], temp;
    
    scanf("%d", &n);
    if (n <= 30) {
        for (int i = 0; i < n; i++) {
            printf("Podaj liczbe: ");
            scanf("%lf", &tab[i]);
        }
    
        for (int i = 0; i < n/2; i++) {
            temp = tab[i];
            tab[i] = tab[n-i-1];
            tab[n-i-1] = temp;
        }
    
        for (int i = 0; i < n; i++) {
            printf("%lf ", tab[i]);
        }
    }

    //ZADANIE 5
    //Program wyznaczający histogram wystąpień poszczególnych liter alfabetu w łańcuchu
    //wczytanym z klawiatury. NaleŜy załoŜyć, Ŝe wczytywany łańcuch zawierał będzie tylko
    //małe litery alfabetu i tylko dla takich liter naleŜy stworzyć histogram, inne znaki naleŜy
    //zliczać osobno jako jeden niezidentyfikowany znak.

    char tekst[512];
    int litery[26] = {0}, inne = 0;
    
    scanf("%511[^\n]", &tekst);
    
    for (int i = 0; tekst[i] != '\0'; i++) {
        char c = tekst[i];
        if (c >= 'a' && c <= 'z') {
            litery[c - 'a']++;
        }else {
            inne++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        printf("Litera %c, wystapila %d razy\n", 'a' + i, litery[i]);
    }
    printf("Inne litery: %d\n", inne);

    //ZADANIE 6
    //Program wczytujący z klawiatury elementy kwadratowej tablicy NxN (N <= 10) i
    //określający, czy tablica jest:
    //a) symetryczna:       ai,j = aj, i dla i, j = 1..N,
    //b) diagonalna:        ai, j = 0 dla i != j, i, j = 1..N,
    //c) górno-trójkątna:   ai, j = 0 dla i < j, i, j = 1..N.

    int n;
    scanf("%d", &n);
    int tab[n][n];
    if (n <= 10) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &tab[i][j]);
            }
        }
    
        bool symetryczna = true;
        bool diagonalna = true;
        bool gorno_trojkatna = true;
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (tab[i][j] != tab[j][i]) {
                    symetryczna = false;
                }
                if (i != j && tab[i][j] != 0) {
                    diagonalna = false;
                }
                if (i > j && tab[i][j] != 0) {
                    gorno_trojkatna = false;
                }
            }
        }
    
        printf("Symetryczna: %d\n", symetryczna);
        printf("Diagonalna: %d\n", diagonalna);
        printf("Gornotrojkatna: %d\n", gorno_trojkatna);
    }



    //ZADANIE 7
    //Program wczytujący elementy kwadratowej tablicy NxN (N <= 10) kolumnami, a następnie
    //dokonujący transpozycji tej tablicy. Tablicę przed i po transpozycji naleŜy wypisać na
    //ekranie. Proszę rozwiązać to zadanie zarówno z wykorzystaniem drugiej tablicy
    //pomocniczej, jak i bez tej tablicy.

    int n;
    scanf("%d", &n);
    int tab[n][n], temp;
    
    if (n <= 10) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("podaj dwie liczby");
                scanf("%d", &tab[i][j]);
            }
        }
    
        printf("tablica przed transpozycji\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", tab[i][j]);
            }
            printf("\n");
        }
    
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                temp = tab[i][j];
                tab[i][j] = tab[j][i];
                tab[j][i] = temp;
            }
        }
    
        printf("tablica po transpozycji\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", tab[i][j]);
            }
            printf("\n");
        }
    }

    //ZADANIE 8
    //8. Program wczytujący elementy prostokątnej tablicy NxM (N, M <= 20). Program ten
    //powinien wyświetlać na ekranie element maksymalny tablicy wraz z numerem wiersza,
    //w którym element ten pojawił się ostatni raz.

    int n, m;
    scanf("%d %d", &n, &m);
    int tab[n][m], max_wartosc, wiersz = 0, suma = 0;
    
    if (n<=20 && m<=20) {
        for (int i=0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &tab[i][j]);
            }
        }
    
        max_wartosc = tab[0][0];
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d ", tab[i][j]);
            }
            printf("\n");
        }
    
        for (int i=0; i < n; i++) {
            for (int j=0; j < m; j++) {
                if (tab[i][j] >= max_wartosc) {
                    max_wartosc = tab[i][j];
                    wiersz = i;
                }
            }
        }
    
        printf("MAX: %d\n", max_wartosc);
        printf("WIERSZ: %d\n", wiersz);
        printf("------------------------------\n");
    //
    //     //ZADANIE 9
    //     // Dla tablicy z zadania 8 proszę napisać program, wyznaczający i wypisujący na ekranie
    //     //sumy wszystkich wierszy tablicy.
    
        for (int i=0; i < n; i++) {
            for (int j=0; j < m; j++) {
                suma = suma + tab[i][j];
            }
            printf("Suma wiersza %d = %d\n", i, suma);
            suma = 0;
        }
    }

    //ZADANIE 10
    //Program, który w tablicy prostokątnej NxM (N, M <= 20) pierwszy wiersz i pierwszą
    //kolumnę wypełnia liczbami losowymi z zakresu [0, 10]. Następnie, poczynając od
    //drugiego wiersza i drugiej kolumny i poruszając się po tablicy wierszami, naleŜy
    //wyznaczać kolejne elementy tablicy jako średnią arytmetyczną dwóch elementów
    //sąsiadujących z wyznaczanym po lewej stronie i od góry.

    int n, m;
    scanf("%d %d", &n, &m);
    double tab[n][m];
    if (n <= 20 && m <= 20) {
        for (int i = 0; i < n; i++) {
            tab[i][0] = rand() % 11;
        }
        for (int j = 1; j < m; j++) {
            tab[0][j] = rand() % 11;
        }
    
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                tab[i][j] = (tab[i][j-1] + tab[i-1][j]) / 2.0;
            }
        }
    
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%.2lf ", tab[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
