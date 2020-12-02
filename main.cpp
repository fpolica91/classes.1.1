#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "monolitic.h"
#include "object_oriented.h"
#include "modular.h"
using namespace std;




class Rectangle{
  private: int length;
  private: int breadth;

// default constructor //
 public:

  Rectangle(){
    length = 0;
    breadth = 0;
  }

// constructor //
   Rectangle(int l, int b){
    length = l;
    breadth = b;
  }

    int area(){
      return length * breadth;
    }

    void setLength(int l){
      length = l;
    }
    int getLength(){
      return length;
    }

    int getBreadth(){
      return breadth;
    }

};



int main() {
  Rectangle r(10, 5);
  int area = r.area();
  // monolitic();
  modular();
  object_oriented();
  
}