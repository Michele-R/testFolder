#include <iostream>
#include "gtest/gtest.h"
template <class T>
T somma(T a, T b){
return (a+b);
}

//TEST(somma, integer) {
//  EXPECT_EQ(3, somma<int>(1,2));
//  EXPECT_EQ(5, somma<int>(3,2));
//}


int main(){
  std::cout << "Hello word" << std::endl;
  //RUN_ALL_TESTS();
return 0;

}
