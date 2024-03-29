#include <iostream>
#include <vector>
#include <algorithm>

template<typename Tip>
void Obrni(Tip *pocetak, Tip *iza_kraja){
    std::reverse(pocetak, iza_kraja);
}

template<typename Tip>
void ObrniTeze(Tip *pocetak, Tip *iza_kraja){
    Tip *lijevi = pocetak;
    Tip *desni = iza_kraja - 1;
    while (lijevi < desni) {
        Tip temp = *lijevi;
        *lijevi = *desni;
        *desni = temp;
        // Moze i swap funkcija umjesto ovoga
        lijevi++;
        desni--;
    }
}

template<typename Tip>
void ObrniKojiMozeIteratore(Tip pocetak, Tip iza_kraja){
    Tip lijevi = pocetak;
    Tip desni = iza_kraja - 1;
    while (lijevi < desni) {
        swap(*lijevi, *desni); // Ovaj dio radi i za pokazivace i za iteratore
        // Moze i swap funkcija umjesto ovoga
        lijevi++;
        desni--;
    }
}

int main() {
    std::vector<int> v{1,2,3,4,5,6,7,8,9};
    int *pok1 = &v[2];
    int *pok2 = &v[5];

    Obrni(pok1, pok2);
    for(auto i : v) std::cout << i << " ";
    return 0;
}
