#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>
#include <vector>
#include <iomanip> 
#include "kernel.h"
#define VECTOR_SIZE 8
#define CVECTOR_SIZE 6

using namespace std;

class Matrix{
private:
  vector<vector<int> > grid;
  vector<vector<int> > cMatrix;

public:
  Matrix();
  ~Matrix();
  void convoluted(Kernel k);
  void displayGrid();
  void displayCMatrix();
};
#endif
