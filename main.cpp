#include <iostream>
#include <string>
#include "matrix.h"
#include "kernel.h"

using namespace std;

int main()
{
    Matrix matrix;
    Kernel kernel;

    matrix.convoluted(kernel);

    cout << "RANDOMLY GENERATED 8X8 MATRIX" << endl;
    cout << "VALUES ARE BETWEEN 0 AND 9" << endl;
    matrix.displayGrid();
    cout << "RANDOMLY GENERATED 3X3 KERNEL MATRIX" << endl;
    cout << "VALUES ARE BETWEEN 0 AND 1" << endl;
    kernel.display();
    cout << "6X6 GRID AFTER CONVOLUTION" << endl;
    matrix.displayCMatrix();
}
