#include <iostream>

template<typename Tip>
void SmjestiMinIMax(Tip *pocetak, Tip *iza_kraja, Tip *&min, Tip *&max) {
    for(int *pok = pocetak; pok < iza_kraja; pok++) {
        if(*pok < *min) min = pok;
        else if(*pok >= *max) max = pok;
    }
}

int main() {
    int niz[]{6,2,4,8,6,1,3};
    int *Min = &niz[0]; // Moglo je i int *Min{nullptr};
    int *Max = &niz[0];

    // Zanimljivo je ovo proslijedjivanje pointera u funkciju po referenci. Nisam znao da to moze!
    SmjestiMinIMax(niz,niz+7,Min,Max);
    std::cout<<"Min element je: "<<*Min<<"\n"<<"Max element je: "<<*Max;
    return 0;
}
