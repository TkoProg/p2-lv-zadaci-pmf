#include <iostream>

int main() {
    int n, max_cifra(0), max_broj(-1), max_brojac(0);
    std::cin>>n;
    int niz1[n], niz2[n], niz3[n];
    for (int i = 0; i < n; i++) {
        int broj;
        std::cin>>broj;
        niz1[i] = broj;
        niz2[i] = broj;
        niz3[i] = broj;
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
