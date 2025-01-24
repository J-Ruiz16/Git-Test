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


/**
 * Calculates the product of 1 through n
 *
 * @param int n number of integer 
 * @pre 
 * @return int return an the total product as integer x
 * @post 
 * 
 */
int product(int n){
  int y = 1;

  for (int i = 1; i <= n; i++){
    y *= i;
  }

  return y;
}

int main() {

  int num;

  std::cout << "Enter an integer: " << std::endl;
  std::cin >> num;

  int total = sum(num);
  int totalTwo = product(num);

  std::cout << "The sum of numbers 1 to " << num << " is: " << total << std::endl;
  std::cout << "The product of numbers 1 to " << num << " is: " << totalTwo << std::endl;
  
  return 0;
}
