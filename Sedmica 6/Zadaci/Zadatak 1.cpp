/*#include <iostream>
#include <algorithm>
#include <string>

int brojRazlicitihSlova(const std::string& a) {
    bool vidjeniKarakteri[256];
    for(bool & i : vidjeniKarakteri) {
        i = false;
    }
    int brojac(0);
    for(char e : a) {
        if(!vidjeniKarakteri[e]) {
            vidjeniKarakteri[e] = true;
            brojac++;
        }
    }
    return brojac;
}

int main() {
    // Ovo auto je zapravo samo string
    auto* stringovi = new std::string[]{"adgg", "bafh", "cdg", "dsaddf", "egvdh"};
    sort(stringovi, stringovi+5, [](const std::string& a, const std::string& b){
        if (brojRazlicitihSlova(a) == brojRazlicitihSlova(b)) return a < b;
        return a.length() < b.length();
    });
    for(int i = 0; i < 5; i++) {
        std::cout<<stringovi[i]<<std::endl;
    }
    delete [] stringovi;
    return 0;
}

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Funkcija za računanje broja različitih slova u stringu
int brojRazlicitihSlova(const string& s) {
    bool videniKarakteri[256] = {false}; // Pretpostavljamo ASCII karaktere
    int brojac = 0;
    for (char c : s) {
        if (!videniKarakteri[c]) {
            videniKarakteri[c] = true;
            brojac++;
        }
    }
    return brojac;
}

int main() {
    string* stringovi = new string[]{"adgo", "bafh", "cdg", "dsaddf", "egvdh"};

    // Sortiranje
    sort(stringovi, stringovi + 5, [](const string& a, const string& b) {
        int brojA = brojRazlicitihSlova(a);
        int brojB = brojRazlicitihSlova(b);
        if (brojA == brojB) return a < b;
        return brojA < brojB;
    });

    // Ispis sortiranih stringova
    cout << "Sortirani stringovi:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << stringovi[i] << endl;
    }

    // Oslobađanje memorije
    delete[] stringovi;

    return 0;
}*/

//Dzanin nacin sa vjezbi

#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

int brojRazlicithSlova(const std::string& s)  {
    bool pojavljenaSlova[128];
    for(int i = 0; i < 128; i++) {
        pojavljenaSlova[i] = false;
    }
    int brojac = 0;
    for(int i(0); i < s.length(); i++) {
        if(!pojavljenaSlova[s[i]]) {
            pojavljenaSlova[s[i]] = true;
            brojac++;
        }
    }
    return brojac;
}

bool uporedi(const std::string& s1, const std::string& s2) {
    if (brojRazlicithSlova(s1) < brojRazlicithSlova(s2)) return true;
    if (brojRazlicithSlova(s1) > brojRazlicithSlova(s2)) return false;
    return s1 < s2;
}

int main() {
    int n;
    std::cin>>n;
    std::cin.ignore(10000, '\n');
    std::cout<<brojRazlicithSlova("abcdd");
    auto *niz = new std::string[n];
    for (int i(0); i < n; i++) {
        getline(std::cin, niz[i]);
    }
    std::sort(niz, niz+n, uporedi);
    for (int i(0); i < n; i++) {
        std::cout<<niz[i]<<std::endl;
    }
    delete [] niz;
}
