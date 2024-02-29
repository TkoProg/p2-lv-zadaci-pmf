#include <iostream>

int main() {
    int n, obrat = 0, kopija;
    std::cin>>n;
    kopija = n;

    while(n > 0) {
        int cifra;
        cifra = n % 10;
        n = n / 10;
        obrat = obrat * 10;
        obrat = obrat + cifra;
    }

    std::cout<<abs(kopija - obrat);
    return 0;
}
