#include <iostream>
#include <vector>
#include <string>

void ispisiStudente(const std::vector<std::string>& imena) {
    for (int i(0); i < imena.size(); i++) {
    std::cout<<imena[i]<<'\n';
    }
}

void ispisiPredmete(const std::vector<std::vector<std::string>>& pred) {
    for (int i(0); i < pred.size(); i++) {
        for (int j(0); j < pred[i].size(); j++) {
            std::cout<<pred[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}

int brojStudenataNaPredmetu (const std::string& pro_predmet, const std::vector<std::vector<std::string>>& pred) {
    int brojac_pred(0);
    for (int i(0); i < pred.size(); i++) {
        for (int j(0); j < pred[i].size(); j++) {
            if (pred[i][j] == pro_predmet) brojac_pred++;
        }
    }
    return brojac_pred;
}

void ispisiStudenteNaPredmetu (const std::string& pro_predmet, const std::vector<std::vector<std::string>>& pred, const std::vector<std::string>& stud) {
    for (int i(0); i < pred.size(); i++) {
        for (int j(0); j < pred[i].size(); j++) {
            if (pred[i][j] == pro_predmet) {
                std::cout<<stud[i]<<'\n';
            }
        }
    }
}

void dodajPredmet (const std::string& pred_za_dodati, const std::string& stu_za_dodati, std::vector<std::string>& imena, std::vector<std::vector<std::string>>& pred) {
    int indeks(0);
    for (int i(0); i < imena.size(); i++) {
        if (imena[i] == stu_za_dodati) {
            indeks = i;
            break;
        }
    }
    pred[indeks].push_back(pred_za_dodati);
}

int main() {
    std::vector<std::string> imena_studenata;
    std::vector<std::vector<std::string>> predmeti;

    int brojac(0);

    while (true) {
        brojac++;
        std::cout<<"Unesite ime studenata "<<brojac<<": ";
        std::string ime;
        std::getline(std::cin, ime);

        if (ime == "KRAJ") break;

        imena_studenata.push_back(ime);
    }

    // ispisiStudente(imena_studenata);

    for (int i(0); i < imena_studenata.size(); i++) {
        int brojac2(0);
        std::vector<std::string> predmeti_studenta;
        std::cout<<"Unesite predmete za studenta "<<imena_studenata[i]<<"..."<<'\n';
        while (true) {
            brojac2++;
            std::cout<<"Unesite predmet "<<brojac2<<": ";
            std::string predmet;
            std::getline(std::cin, predmet);
            if (predmet == "KRAJ") break;
            predmeti_studenta.push_back(predmet);
        }
        predmeti.push_back(predmeti_studenta);
    }

    // ispisiPredmete(predmeti);

    std::cout<<"-------------------"<<'\n';

    std:: string predmet_za_provjeriti("Analiza");
    std::cout<<"Broj studenata na "<<predmet_za_provjeriti<<"je: "<<brojStudenataNaPredmetu(predmet_za_provjeriti, predmeti)<<'\n';

    std::cout<<"-------------------"<<'\n';

    std::cout<<"Predmet "<<predmet_za_provjeriti<<" slusaju: "<<'\n';
    ispisiStudenteNaPredmetu(predmet_za_provjeriti, predmeti, imena_studenata);

    std::cout<<"-------------------"<<'\n';

    std::string predmet_za_dodati("Operativni Sistemi");
    std::string studentu_dodati(imena_studenata[1]);
    dodajPredmet(predmet_za_dodati, studentu_dodati, imena_studenata, predmeti);
    ispisiPredmete(predmeti);

    return 0;
}
