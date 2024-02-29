#include <iostream>

int main() {
    int n;
    std::cout<<"Unesite broj: ";
    std::cin>>n;

    // Prvi trougao

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            std::cout<<" ";
        }
        for (int k = 0; k < i + 1; k++) {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }

    // Naopaki trougao

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            std::cout<<" ";
        }
        for (int k = 0; k < n - i - 1; k++) {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
