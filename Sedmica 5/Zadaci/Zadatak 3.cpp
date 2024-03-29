#include <iostream>
#include <vector>
#include <algorithm>

bool Manji(std::vector<int> v1, std::vector<int> v2) {
    int m = std::min(v1.size(), v2.size());
    int i = -1;
    while(v1[i] == v2[i] && i < m) {
        i++;
        for (int j(i); j < m; j++) {
            if (v1[j] < v2[j]) return true; // v1 < v2
            else if (v1[j] > v2[j]) return false; // v1 > v2
        }
    }
    if (v1.size() < v2.size()) return true;
    if (v1.size() > v2.size()) return false;
    return true; // Ako su potpuno isti
}

void Sortiraj(std::vector<std::vector<int>> &v) {
    int n = v.size();
    int i, j;
    std::vector<int> pomocni;
    for(i = 0; i<n-1;i++) {
        for(j = 0; j <n -i -1;j++) {
            if (Manji(v[j],v[j+1]) == 0) {
                pomocni = v[j];
                v[j] = v[j+1];
                v[j+1] = pomocni;
            }
        }
    }
}

/*void SortirajSaVektorima(std::vector<std::vector<int>*> &v) {
    int n = v.size();
    int i, j;
    std::vector<int>* pomocni;
    for(i = 0; i<n-1;i++) {
        for(j = 0; j <n -i -1;j++) {
            if (Manji(v[j],v[j+1]) == 0) {
                pomocni = v[j];
                v[j] = v[j+1];
                v[j+1] = pomocni;
            }
        }
    }
}*/

int main() {
    std::vector<std::vector<int>> v{{5,4,3,21,0}, {1,2,3}, {1,2,3,0}, {5,4,2}, {5,4,3,22,1,0}};
    Sortiraj(v);
    for(auto & i : v) {
        for(int j : i) {
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
}
