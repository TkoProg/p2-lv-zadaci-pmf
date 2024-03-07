#include <iostream>

void broj_pojavljivanja(const int niz[], int n, int& broj_negativnih, int& brojrazlicitih) {
    int brojac = 0;
    int brojac2 = 0;
    for (int i = 0; i < n; i++) {
        if (niz[i] < 0) brojac2++;
    }

    for (int i = 0; i < n; i++) {
        bool jedinstvena(true);
        for (int j = i + 1; j < n; j++) {
            if (niz[j] == niz[i]) {
                jedinstvena = false;
                break;
            }
        }
        if (jedinstvena) brojac++;
    }
    broj_negativnih = brojac2;
    brojrazlicitih = brojac;
    return;
}

int main() {
    int niz[5] = {-1,-2,-1,4,5};
    int broj_negativnih, broj_razlicitih;
    broj_pojavljivanja(niz, 5, broj_negativnih, broj_razlicitih);
    std::cout<<broj_negativnih<<std::endl;
    std::cout<<broj_razlicitih<<std::endl;
    return 0;
}
