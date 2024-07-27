#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool f(std::string s) {
    if (s.length() > 3) return true;
    return false;
}

template<typename tip>
void podijeli1(tip poc, tip kraj, bool (*f)(std::string), std::vector<std::string> &v1, std::vector<std::string> &v2) {
    for(auto it = poc; it!=kraj; it++) {
        if (f(*(it))) v1.push_back(*(it));
        else v2.push_back(*(it));
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    }

void podijeli(std::string *v, int n, bool (*f)(std::string), std::vector<std::string> &v1, std::vector<std::string> &v2) {
    for (int i = 0; i < n; i++) {
        if (f(v[i])) v1.push_back(v[i]);
        else v2.push_back(v[i]);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
}

int main() {
    int n = 5;
    std::string *niz = new std::string [n];
    std::string unos;
    std::array<std::string, 5> novi = {"a", "b", "KKK", "ABC", "RRRR"};
    getline(std::cin, unos);
    for (int i = 0; i < n; i++) {
        niz[i] = unos;
        getline(std::cin, unos);
    }
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    bool (*g)(std::string) = f;
    podijeli(niz,5,g,v1,v2);
    for (int i = 0; 1 < v1.size(); i++) std::cout<<v1[i]<<" ";
    std::cout<<std::endl;
    for (int i = 0; 1 < v2.size(); i++) std::cout<<v2[i]<<" ";
}
