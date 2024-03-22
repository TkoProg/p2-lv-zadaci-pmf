#include <iostream>

template<typename tip>

// Ne moze return niz
void noviNiz(tip a[], tip niz[], int n) {
    // a {2,3,4,5,6}
    // b{1,2,6,24,120} b[i] je proizvod svih elemenata lijevo od a[i]
    // c{360, 120, 30, 1} c[i] je proizvod elemenata desno od a[i]
    // niz[i] = b[i]*c[i]
    int b[100];
    b[0] = 1;
    for (int i(1); i < n; i++) {
        b[i] = b[i - 1] * a[i - 1];
    }
    int c[100];
    c[n - 1] = 1;
    for (int i(n - 2); i >= 0; i--) {
        c[i] = c[i + 1] * a[i + 1];
    }
    for (int i(0); i < n; i++) {
        niz[i] = c[i] * b[i];
    }
}


int main() {
    int niz[]={2, 3, 4, 5, 6};
    int rez[]={0, 0, 0, 0, 0};
    int n = 5;
    noviNiz(niz, rez, n);
    for (int i = 0; i < n; i++) std::cout << rez[i] << " ";
}
