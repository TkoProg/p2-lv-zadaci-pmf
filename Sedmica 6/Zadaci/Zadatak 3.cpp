#include <iostream>
#include <algorithm>

template<typename Tip>
Tip* vratiSortiran(Tip *niz, Tip n) {
    Tip *rez = new Tip[n];
    for(int i = 0; i < n; i++) {
        rez[i] = niz[i];
    }
    std::sort(rez, rez+n);
    return rez;
}

int main() {
    int n = 6;
    int niz[]{11,54, 2, 89, 5, 12};
    int *rez = vratiSortiran(niz, 6);
    for(int i = 0; i < n; i++) std::cout<<rez[i]<<" ";
}
