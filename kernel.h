#ifndef KERNEL_H_
#define KERNEL_H_

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#define KVECTOR_SIZE 3

using namespace std;

class Kernel{
private:
  vector<vector<int> > matrix;

public:
  Kernel();
  ~Kernel();
  void display();
  vector<vector<int> >  &rKernel();

};
#endif
