#include <iostream>
#include <iomanip>

int main() {
    int broj1, broj2;
    char operacija;

    std::cout<<"Unesite broj: ";
    std::cin>>broj1;
    std::cout<<"Unesite broj: ";
    std::cin>>broj2;
    std::cout<<"Unesite operaciju: ";
    std::cin>>operacija;

    // Ovdje su koristeni redni brojevi char-ova umjesto '*', '+', itd...

    switch (operacija) {
        case 42:
            std::cout<<std::setw(7)<<broj1<<std::endl;
            std::cout<<std::setw(7)<<broj2<<" *"<<std::endl;
            std::cout<<"---------"<<std::endl;
            std::cout<<std::setw(7)<<broj1*broj2;
            break;
        case 43:
            std::cout<<std::setw(7)<<broj1<<std::endl;
            std::cout<<std::setw(7)<<broj2<<" +"<<std::endl;
            std::cout<<"---------"<<std::endl;
            std::cout<<std::setw(7)<<broj1+broj2;
            break;
        case 47:
            std::cout<<std::setw(7)<<broj1<<std::endl;
            std::cout<<std::setw(7)<<broj2<<" /"<<std::endl;
            std::cout<<"---------"<<std::endl;
            std::cout<<std::setw(7)<<double(broj1)/broj2;
            break;
        case 45:
            std::cout<<std::setw(7)<<broj1<<std::endl;
            std::cout<<std::setw(7)<<broj2<<" -"<<std::endl;
            std::cout<<"---------"<<std::endl;
            std::cout<<std::setw(7)<<broj1-broj2;
            break;
        default:
            std::cout<<"Pogresan unoos!";
    }
    return 0;
}
