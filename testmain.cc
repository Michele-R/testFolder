#include <iostream>
#include <stdlib.h>
//#include "gtest/gtest.h"
template <class T>
T somma(T a, T b){
return (a+b);
}


int main(){
  std::cout << "Hello word" << std::endl;
  if(somma<int>(8,3)==11){
   exit(1); 
  }
   

return 0;

}
