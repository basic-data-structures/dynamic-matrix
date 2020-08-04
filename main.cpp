#include "Matrix.h"

int main() {

    cout << "\n\t\t---------------------------- LETTERS -----------------------------\n";
    Matrix<char>* letters = new Matrix<char>(0, '-');
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                       'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    letters->resize(10, 10);
    for (int i = 0; i < letters->getRows(); i++) {
        for (int j = 0; j < letters->getCols(); ++j) {
            (*letters)(i, j) = alphabet[i];
        }
    }
    cout << *letters;
    letters->resize(5,5);
    cout << *letters;
    letters->resize(15,15);
    cout << *letters;
    for (int i = 0; i < letters->getRows(); i++) {
        for (int j = 0; j < letters->getCols(); j++) {
            (*letters)(i, j) = alphabet[i];
        }
    }
    cout << *letters;
    letters->resize(25, 25);
    cout << *letters;


    cout << "\n\t\t---------------------------- NUMBERS -----------------------------\n";
    Matrix<int>* numbers = new Matrix<int>(15, 0);
    for (int i = 0; i < numbers->getRows(); i++) {
        for (int j = 0; j < numbers->getCols(); j++) {
            (*numbers)(i, j) = i;
        }
    }
    cout << *numbers;
    numbers->resize(2, 2);
    cout << *numbers;
    numbers->resize(5, 10);
    cout << *numbers;
    for (int i = 0; i < numbers->getRows(); i++) {
        for (int j = 0; j < numbers->getCols(); ++j) {
            (*numbers)(i, j) = 1;
        }
    }
    numbers->printMatrix();
    numbers->resize(6, 2);
    for (int i = 0; i < numbers->getRows(); i++) {
        for (int j = 0; j < numbers->getCols(); ++j) {
            (*numbers)(i, j) = 5;
        }
    }
    cout << *numbers;

    delete letters;
    delete numbers;
    return 0;
}
