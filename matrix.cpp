#include <iostream>
#include "matrix.h"

Matrix::Matrix() :  grid(VECTOR_SIZE,vector<int>(VECTOR_SIZE)),
                    cMatrix(CVECTOR_SIZE,vector<int>(CVECTOR_SIZE))
{
  srand(time(NULL));
  for(int i = 0; i < grid.size(); i++)
  {
    for(int j = 0; j < grid[i].size(); j++)
    {
      grid[i][j] = rand()%10;
    }
  }
}
Matrix::~Matrix()
{}

void Matrix::convoluted(Kernel k)
{
    for(int i = 1;i < grid.size()-1;i++)
    {
      for(int j = 1; j < grid.size()-1;j++)
      {
        int total = 0;
        total = (grid[i-1][j-1] * k.rKernel()[0][0]) + (grid[i-1][j] * k.rKernel()[0][1]) + (grid[i-1][j+1] * k.rKernel()[0][2])
              + (grid[i][j-1] * k.rKernel()[1][0]) + (grid[i][j] * k.rKernel()[1][1]) + (grid[i][j+1] * k.rKernel()[1][2])
              + (grid[i+1][j+1] * k.rKernel()[2][0]) + (grid[i+1][j] * k.rKernel()[2][1]) + (grid[i+1][j+1] * k.rKernel()[2][2]);

        cMatrix[i-1][j-1] = total;
      }
    }
}

void Matrix::displayGrid()
{
  for(int i = 0;i < grid.size();i++)
  {
    for(int j = 0; j < grid[i].size();j++)
    {
        cout << grid[i][j] << "  ";
    }
    cout << endl;
  }
}

void Matrix::displayCMatrix()
{
  for(int i = 0;i < cMatrix.size();i++)
  {
    cout << left << setw(5);
    for(int j = 0; j < cMatrix[i].size();j++)
    {
        cout << cMatrix[i][j] << setw(5);
    }
    cout << endl;

  }
}
