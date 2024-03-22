#include <iostream>

template<typename tip>
tip brojTrocifrenih(tip *pocetak, tip *kraj) {
    tip brojac(0);
    for (tip *pok(pocetak); pok < kraj; pok++) {
        if (100 <= *pok && *pok <= 999) brojac++;
    }
    return brojac;
}


int main() {
    long int niz[]={180,2,400,501,9,180, 23};
    int n(7);
    std::cout<<brojTrocifrenih(niz, niz+n);
}
