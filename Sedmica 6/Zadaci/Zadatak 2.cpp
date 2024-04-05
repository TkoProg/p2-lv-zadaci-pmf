#include <iostream>


// Moras koristiti dvostruki pokazivac na referencu ovdje
void Rotiraj(int** &mat, int n) {
    int **pomocna = new int* [n];
    for(int i = 0; i < n; i++)
        pomocna[i] = new int[n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            pomocna[i][j] = mat[j][n-1-i];

    for(int i = 0; i < n; i++) delete mat[i];
    delete [] mat;

    mat = pomocna;
}

void Rotiraj2(int** mat, int n) {
    int **pomocna = new int* [n];
    for(int i = 0; i < n; i++)
        pomocna[i] = new int[n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            pomocna[i][j] = mat[j][n-1-i];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            mat[i][j] = pomocna[i][j];

    for(int i = 0; i < n; i++) delete [] pomocna[i];
    delete [] pomocna;
}

int main() {
    int n(3);
    // Kreiranje matrice
    int **matrica = new int* [n];
    for(int i = 0; i < n; i++)
        matrica[i] = new int[n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            std::cin>>matrica[i][j];

    Rotiraj(matrica, n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << matrica[i][j] << " ";
        }
        std::cout<<""<<std::endl;
    }

    //Brisanje matrice
    for(int i = 0; i < n; i++) delete [] matrica[i];
    delete [] matrica;
}
