#include "Matrix.h"

int main() {

    cout << "\n\t\t---------------------------- LETTERS -----------------------------\n";
    Matrix<char>* letters = new Matrix<char>(10, '-');
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                       'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < letters->getRows(); i++) {
        for (int j = 0; j < letters->getCols(); ++j) {
            letters->insert(alphabet[i], i, j);
        }
    }
    letters->printMatrix();
    letters->resize(5,5);
    letters->printMatrix();
    letters->resize(15,15);
    letters->printMatrix();
    for (int i = 0; i < letters->getRows(); i++) {
        for (int j = 0; j < letters->getCols(); j++) {
            letters->insert(alphabet[i], i, j);
        }
    }
    letters->printMatrix();
    letters->resize(25, 25);
    letters->printMatrix();


    cout << "\n\t\t---------------------------- NUMBERS -----------------------------\n";
    Matrix<int>* numbers = new Matrix<int>(15, 0);
    for (int i = 0; i < numbers->getRows(); i++) {
        for (int j = 0; j < numbers->getCols(); j++) {
            numbers->insert(i, j, i);
        }
    }
    numbers->printMatrix();
    numbers->resize(2, 2);
    numbers->printMatrix();
    numbers->resize(10, 10);
    numbers->printMatrix();
    for (int i = 0; i < numbers->getRows(); i++) {
        for (int j = 0; j < numbers->getCols(); ++j) {
            numbers->insert(1, i, j);
            numbers->insert(0, j, i);
        }
    }
    numbers->printMatrix();

    delete letters;
    delete numbers;
    return 0;
}
