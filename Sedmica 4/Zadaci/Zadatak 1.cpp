#include <iostream>
#include <stdexcept>

double vratiKorijen(double *niz, int n) {
    double zbir(0);
    double prethodni(0);
    for (int i(0); i < n; i++) {
        if (niz[i] < 0) {
            throw std::invalid_argument("Negativan podkorijeni broj!");
        }
    }
    for (int i(n - 1); i >= 0; i--) {
        zbir = sqrt(niz[i] + prethodni);
        prethodni = zbir;
    }
    return zbir;
}

int main() {
    // Nisam napravio da bude proizvoljan broj elemenata da korisnik unese jer mi je ruzno za testirati
    double niz[]{-13, 6, 9};
    int n = 3;
    try {
        std::cout<<vratiKorijen(niz, n);
    }
    catch(std::invalid_argument const& greska) {
        std::cout<<greska.what()<<'\n';
    }
    catch(...) {
        std::cout<<"Sve ostale greske!"<<'\n';
    }
    return 0;
}
