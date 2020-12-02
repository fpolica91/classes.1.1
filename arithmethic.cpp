#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Arithmetic{
  private:
    int a;
    int b;

  public:
    Arithmetic(int a, int b);
    int add();
    int sub();
};

// scope resolutions
Arithmetic::Arithmetic(int a, int b){
  this -> a =a;
  this -> b =b;
}

int Arithmetic::add(){
  return a + b;
}

int Arithmetic::sub(){
  return a - b;
}