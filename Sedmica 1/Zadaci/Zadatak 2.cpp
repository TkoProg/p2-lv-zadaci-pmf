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

    switch (operacija) {
        case '*':
            std::cout<<std::setw(7)<<broj1<<std::endl;
            std::cout<<std::setw(7)<<broj2<<" *"<<std::endl;
            std::cout<<"---------"<<std::endl;
            std::cout<<std::setw(7)<<broj1*broj2<<std::endl;
            break;
        case '+':
            std::cout<<std::setw(7)<<broj1<<std::endl;
            std::cout<<std::setw(7)<<broj2<<" +"<<std::endl;
            std::cout<<"---------"<<std::endl;
            std::cout<<std::setw(7)<<broj1+broj2<<std::endl;
            break;
        case '/':
            std::cout<<std::setw(7)<<broj1<<std::endl;
            std::cout<<std::setw(7)<<broj2<<" /"<<std::endl;
            std::cout<<"---------"<<std::endl;
            std::cout<<std::setw(7)<<broj1/broj2<<std::endl;
            break;
        case '-':
            std::cout<<std::setw(7)<<broj1<<std::endl;
            std::cout<<std::setw(7)<<broj2<<" -"<<std::endl;
            std::cout<<"---------"<<std::endl;
            std::cout<<std::setw(7)<<broj1-broj2<<std::endl;
            break;
        default:
            std::cout<<"Pogresan unoos!";
    }
    return 0;
}
