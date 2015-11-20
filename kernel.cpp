#include <iostream>
#include "kernel.h"

Kernel::Kernel() : matrix(KVECTOR_SIZE,vector<int>(KVECTOR_SIZE))
{
  srand(time(NULL));
  for(int i = 0; i < matrix.size(); i++)
  {
    for(int j = 0; j < matrix[i].size(); j++)
    {
      matrix[i][j] = rand()%2;
    }
  }
}
Kernel::~Kernel()
{}

void Kernel::display()
{
  for(int i = 0; i < matrix.size(); i++)
  {
    for(int j = 0; j < matrix[i].size(); j++)
    {
        cout << matrix[i][j] << "  ";
    }
    cout << endl;
  }
}

vector<vector<int> > &Kernel::rKernel()
{
  return matrix;
}
