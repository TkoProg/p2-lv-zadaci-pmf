#include <iostream>
#include <vector>
#include <algorithm>

template<typename Tip>
void Obrni(Tip *pocetak, Tip *iza_kraja){
    std::reverse(pocetak, iza_kraja);
}

int main() {
    std::vector<int> v{1,2,3,4,5,6,7,8,9};
    int *pok1 = &v[2];
    int *pok2 = &v[5];
    Obrni(pok1, pok2);
    for(auto i : v) std::cout << i << " ";
}
