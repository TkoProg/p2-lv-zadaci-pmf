#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool f(std::string s) {
    if (s.length() > 3) return true;
    return false;
}

void podijeli(std::string *v, int n, bool (*f)(std::string), std::vector<std::string*> &v1, std::vector<std::string*> &v2) {
    for (int i = 0; i < n; i++) {
        if (f(v[i])) v1.push_back(new std::string(v[i]));
        else v2.push_back(new std::string(v[i]));
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
}

int main() {
    int n = 5;
    std::string *niz = new std::string [n];
    std::string unos;
    for (int i = 0; i < n; i++) {
        niz[i] = unos;
        getline(std::cin, unos);
    }
    std::vector<std::string*> v1;
    std::vector<std::string*> v2;
    bool (*g)(std::string) = f;
    podijeli(niz,5,g,v1,v2);
    for (int i = 0; 1 < v1.size(); i++) std::cout<<v1[i]<<" ";
    std::cout<<std::endl;
    for (int i = 0; 1 < v2.size(); i++) std::cout<<v2[i]<<" ";
}
