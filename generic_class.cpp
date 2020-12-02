#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// t is the generic variable 
// t is a generic data type -> t can be int, char, string;
template <class T>
class Generic{
  private:
    T a;
    T b;

  public:
    Generic(T a, T b);
    T add();
    T sub();
};

template<class T>
  Generic<T>::Generic(T a, T b){
  this -> a =a;
  this -> b =b;
};

template <class T>
 T Generic<T>::add(){
   T c;
   c = a + b;
   return c;
 }

 template <class T>
 T Generic<T>::sub(){
   T c;
   c = a - b;
   return c;
 }

 int start(){

   Generic<int> gen(10,5);
   Generic<float> gen2(2.2,3.3);
   cout<<gen.add()<<endl;
   cout<<gen2.add()<<endl;

   return 0;
 }