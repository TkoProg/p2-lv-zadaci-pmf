#include <iostream>

const int max_duzina_naziva_predmeta(50);
const int max_broj_predmeta(10);
const int max_broj_studenata(200);
const int max_duzina_naziva_studenta(20);

char naziv_predmeta[max_broj_predmeta][max_duzina_naziva_predmeta];
char imena_studenata[max_broj_studenata][max_duzina_naziva_studenta];
int ocjene[max_broj_studenata][max_broj_predmeta];

void ispisiPredmete(int broj_predmeta) {
    for (int i(0); i < broj_predmeta; i++) {
        std::cout<<naziv_predmeta[i]<<'\n';
    }
}

void ispisiStudente(int broj_studenata) {
    for (int i(0); i <broj_studenata; i++) {
        std::cout<<imena_studenata[i]<<'\n';
    }
}

void ispisiOcjene(int broj_studenata, int broj_predmeta) {
    for (int i(0); i < broj_studenata; i++) {
        for (int j(0); j < broj_predmeta; j++) {
            std::cout<<ocjene[i][j]<<" ";
        }
        std::cout<<'\n';
    }
}

void ispisiProsjekOcjena(int broj_studenata, int broj_predmeta, char studenti[max_broj_studenata][max_duzina_naziva_studenta]) {
    for (int i(0); i < broj_studenata; i++) {
        double zbir(0);
        for (int j(0); j < broj_predmeta; j++) {
            zbir += ocjene[i][j];
        }
        std::cout<<"Prosjek ocjena za studenta "<<studenti[i]<<" je: "<<zbir / broj_predmeta;
        std::cout<<'\n';
    }
}

void ispisiProsjekPredmeta(int broj_studenata, int broj_predmeta, char predmeti[max_broj_predmeta][max_duzina_naziva_predmeta]) {
    for (int i(0); i < broj_predmeta; i++) {
        double zbir(0);
        for (int j(0); j < broj_studenata; j++) {
            zbir += ocjene[j][i];
        }
        std::cout<<"Prosjek ocjena za predmet "<<predmeti[i]<<" je: "<<zbir / broj_studenata;
        std::cout<<'\n';
    }
}

int main() {
    int broj_predmeta, broj_studenata, ocjena;

    std::cout<<"Unesite broj predmeta: ";
    std::cin>>broj_predmeta;

    std::cin.ignore(10000, '\n');

    std::cout<<"Unesite broj studenata: ";
    std::cin>>broj_studenata;

    std::cin.ignore(10000, '\n');

    for (int i(0); i < broj_predmeta; i++) {
        std::cout<<"Unesite predmet broj "<<i+1<<": ";
        std::cin.getline(naziv_predmeta[i], max_duzina_naziva_predmeta);
    }

    for (int i(0); i < broj_studenata; i++) {
        std::cout<<"Unesite ime broj "<<i+1<<": ";
        std::cin.getline(imena_studenata[i], max_duzina_naziva_studenta);
        for (int j(0); j < broj_predmeta; j++) {
            std::cout<<"Unesite ocjenu za "<<naziv_predmeta[j]<<": ";
            std::cin>>ocjena;
            std::cin.ignore(10000, '\n');
            ocjene[i][j] = ocjena;
        }
    }

    // ispisiPredmete(broj_predmeta);
    // ispisiStudente(broj_studenata);
    // ispisiOcjene(broj_studenata, broj_predmeta);
    ispisiProsjekOcjena(broj_studenata, broj_predmeta, imena_studenata);
    std::cout<<"----------------------"<<'\n';
    ispisiProsjekPredmeta(broj_studenata, broj_predmeta, naziv_predmeta);

    return 0;
}
