#include <iostream>

std::string binarni(int a) {
    std::string binarni_broj = "";

    while (a != 0) {
        int c = a % 2;
        a /= 2;
        if (c == 0) binarni_broj = "0" + binarni_broj;
        else binarni_broj = "1" + binarni_broj;
    }

    return binarni_broj;
}

int main() {
    int broj;
    std::cin>>broj;
    std::cout<<binarni(broj);
    return 0;
}
