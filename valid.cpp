/*
Author: Michael Coleman
Course: CSCI-135
Instructor:  Genady Maryash
Assignment: Lab 2A

This program asks the user to input an integer in the range of greater than 0 and less than 100. If the number is out of range, the program keeps asking to re-enter until a valid number is input.
*/

#include <iostream>
#include <cmath>

int main() {
  int b;
  
  std::cout << "Print a number between 0 and 100: ";
  std::cin >> b;
  if ((b < 100) && (b > 0)) {
    std::cout << "Number squared is "<< pow(b,2) <<std::endl;
      }
    
  else {
   std::cout << "Please re-enter: ";
    
  while (std::cin >> b) {
    if (b >= 100){
    std::cout << "Please re-enter: ";
      }
    else if (b <= 0) {
      std::cout << "Please re-enter: " ;
      }
    else {
      std::cout << "Number squared is "<< pow(b,2) <<std::endl;
      
    }
    }
    }
  return 0;
  }
    
      

