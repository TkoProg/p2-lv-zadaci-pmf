#include <iostream>

void binarni(int a) {
    if (a > 1) binarni(a / 2);
    std::cout<<a % 2;
    return;
}

int main() {
    int broj;
    std::cin>>broj;
    binarni(broj);
    return 0;
}
