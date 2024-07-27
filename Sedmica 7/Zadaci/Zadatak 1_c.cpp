#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool f(std::string s) {
    if (s.length() > 3) return true;
    return false;
}

void podijeli(std::vector<std::string> v, bool (*f)(std::string), std::vector<std::string> &v1, std::vector<std::string> &v2, std::vector<std::string> &v3) {
    for (int i = 0; i < v.size(); i++) {
        if(find(v3.begin(), v3.end(), v[i]) == v3.end()) {
            if (f(v[i])) v1.push_back(v[i]);
            else v2.push_back(v[i]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
}

int main() {
    std::vector<std::string> v; // vector stringova
    std::string unos;
    getline(std::cin, unos);
    while (unos != "KRAJ") {
        v.push_back(unos);
        getline(std::cin, unos);
    }
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::vector<std::string> v3{"a", "b", "c"};
    bool (*g)(std::string) = f;
    podijeli(v,g,v1,v2, v3);
    for (int i = 0; 1 < v1.size(); i++) std::cout<<v1[i]<<" ";
    std::cout<<std::endl;
    for (int i = 0; 1 < v2.size(); i++) std::cout<<v2[i]<<" ";
}
