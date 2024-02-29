#include <iostream>

int main() {
    int broj = 1, najvise = -1, cifra, kopija, ispisati;
    while(true) {
        int brojac = 0;
        std::cin>>broj;

        if (broj == 0) break;

        kopija = broj;

        while (broj > 0) {
            cifra = broj % 10;
            broj = broj / 10;

            if (cifra % 2 != 0) {
                brojac += 1;
            }
        }

        if (brojac >= najvise) {
            najvise = brojac;
            ispisati = kopija;
        }
    }
    std::cout<<ispisati;
    return 0;
}
