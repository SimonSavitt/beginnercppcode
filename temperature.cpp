#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Converts temp from F to C
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
  return 0;
}