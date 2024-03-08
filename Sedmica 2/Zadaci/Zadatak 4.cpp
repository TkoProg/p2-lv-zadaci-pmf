#include <iostream>

int main() {
    int broj1, n(0);
    int max_cifra(0), max_broj(-1), max_brojac(0);
    int niz1[100], niz2[100], niz3[100];
    while (true) {
        std::cin>>broj1;
        if (broj1 == 0) break;
        niz1[n] = broj1;
        niz2[n] = broj1;
        niz3[n] = broj1;
        n++;
    }

    for (int i = 0; i < n; i++) {
        while (niz1[i] > 0) {
            int cifra = niz1[i] % 10;
            niz1[i] = niz1[i] / 10;
            if (cifra > max_cifra) max_cifra = cifra;
        }
    }
    // std::cout<<max_cifra;
    for (int i = 0; i < n; i++) {
        int brojac(0);
        while (niz2[i] > 0) {
            int cifra = niz2[i] % 10;
            niz2[i] = niz2[i] / 10;
            if (cifra == max_cifra) brojac++;
        }
        // std::cout<<brojac;
        if (brojac >= max_brojac) {
            max_broj = niz3[i];
            max_brojac = brojac;
        }
    }

    std::cout<<max_broj;
    return 0;
}
