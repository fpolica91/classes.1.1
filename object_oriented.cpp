#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "monolitic.h"
#include "modular.h"
using namespace std;



class Rectangle{
  private: int length;
  private: int breadth;

 public: void initialize(int l, int b){
   length = l;
   breadth =b;
  }

  public: int area(){
    return length * breadth;
  }

  public: int perimeter(){
    return 2*(length + breadth);
  }
};


int object_oriented(){
  Rectangle r;
  r.initialize(10, 5);
  int area = r.area();
  int perimeter = r.perimeter();

  cout<<"The area is ** "<< area <<endl;
  cout<<"The perimeter is ** "<< perimeter <<endl;

  return 0;
}