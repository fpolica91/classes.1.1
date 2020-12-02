#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct Rectangle{
  int length;
  int breadth;
};

int area(struct Rectangle r){
  return r.length * r.breadth;
}



int perimeter(struct Rectangle r){
  int p;
  p=2*(r.length+r.breadth);
  return p;
}

void initialize(struct Rectangle *r, int l, int b){
  r -> length =l;
  r -> breadth =b;
}

int modular(){
  struct Rectangle r = {0,0};
  
  int length =0, breadth =0;
  printf("Enter Length and Breadth ");
  cin>>length>>breadth;
  initialize(&r, length, breadth);

  int a = area(r);
  int peri = perimeter(r);

  cout<<"Area is "<<area<<" Perimeter is "<<peri<<endl;
  return 0;
}