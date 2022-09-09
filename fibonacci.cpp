#include <iostream>

/*
Author: Michael Coleman
Course: CSCI-135
Instructor: their name
Assignment: Lab2D

This program prints out the first 59 fibonacci numbers. 
*/
int main() {
   
  int fib[60];
  int nextnum = 0; 
  fib[0] = 0;
  fib[1] = 1;
  
  std::cout << fib [0] << std::endl  << fib[1] << std::endl;

  for (int i = 2; i < 60 ;i++){

    fib[i] = fib[i-1] + fib[i-2];  
    std::cout << fib [i] << std::endl;
    
  }
}
// As the numbers approach 2 billion the numbers start turning negative. This is happening because an integers highest number can be 2147483647. Since the number is higher, there is an error.
