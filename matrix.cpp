#include <iostream>
using namespace std;
int main() {
    int rowsA, colsA, rowsB, colsB;
    std::cout << "enter the numberv of rows and columns of matrixA: ";
    std::cin >>  rowsA >> colsA;
    std::cout << "enter the number of rows and columns of matrix B: ";
    std::cin >> rowsB >> colsB;

    if (colsA != rowsB) {
        std::cout << "matrix multiplication not possible.columns of A must equal rows of B" << endl;
        return 0;
    }
    int matrixA[rowsA][colsA],matrixB[rowsB][colsB],result[rowsA][colsB];
    for (int i=0;i<rowsA; i++) {
        for (int j=0;j<colsB;j++) {
             result[i][j] = 0;
        }
    }
    std::cout << "enter elements of matrixA: " << endl;
    for (int i=0;i<rowsA;i++) {
        for (int j=0;j<colsA;j++) {
            std::cout << "enter element at position: ", i+1,j+1;
            std::cin >> matrixA[i][j];
        } 
    }
    std::cout << "enter elements of matrixB: " << endl;
    for (int i=0;i<rowsB;i++) {
        for (int j=0;j<colsB;j++) {
            std::cout << "enetr element at position: ", i+1,j+1;
            std::cin >> matrixB[i][j];
        }
    }

    for (int i=0; i<rowsA; i++) {
        for (int j=0; j<colsB; j++) {
            for (int k=0; k<colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    std::cout << "resultant matrix after multiplication: " << endl;
    for (int i=0; i<rowsA; i++) {
        for (int j=0; j<colsB; j++) {
            std::cout << result[i][j];
        }
        std::cout << endl;
    }
    return 0;
}
