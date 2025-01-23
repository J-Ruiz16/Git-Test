/**
 * @file main.cpp
 * @author Jocelyn Ruiz
 * @date 2025-01-22
 * @brief Edited to print sum of numbers
 * 
 * Program uses a method function to evaluate the sum and is called in main to print its value.
 */


#include <iostream>


/**
 * Calculates sum of numbers from 1 to n
 *
 * @param int n number of integer
 * @pre 
 * @return int total sum of integers as an integer
 * @post 
 * 
 */
int sum(int n){

  int x = 0;

  for (int i = 1; i <=n ; i++){
    x += i;
  }

  return x;
}

int main() {

  int num;

  std::cout << "Enter an integer: " << std::endl;
  std::cin >> num;

  int total = sum(num);

  std::cout << "The sum of numbers 1 to " << num << " is: " << total << std::endl;
  
  return 0;
}
