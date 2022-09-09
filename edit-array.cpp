/*
Author: Michael Coleman
Course: CSCI-135
Instructor:  Genady Maryash
Assignment: Lab 2C
This program creates an array of 10 integers, and provides the user with an interface to edit any of its elements
*/
#include <iostream>

int main() {
  int myData[10];
  int i;
  int v;

  
for (int i = 0; i < 10; i++) {

  myData[i] = 1;
std::cout << myData[i] << " ";
  
}
  std::cout <<  " \n";

 do {
  std::cout << "Input index: ";
  std::cin >> i ;
  std::cout << "Input value: ";
  std::cin >> v;

  myData[i] = v;
  for (int i = 0; i < 10; i++) {
  std::cout << myData[i] << " ";
    }
   std::cout <<  " \n";
   } while (i < 10 && i >= 0);  
}
