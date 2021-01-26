/*
*Jenny Epstein
*ID # 2338652
*jeepstein@chapman.edu
*CPSC 298- 07
*zeroboth.cpp
*/

#include <iostream>
using namespace std;

void zeroBoth(int& firstParam, int& secondParam){ //call for two int paramters passed by refernce
  //output the original paramter values to the user
  cout << "First number original value: " << firstParam << endl;
  cout << "Second number original value: " << secondParam << endl;

  //update both parameters to be 0
  firstParam = 0;
  secondParam = 0;

  cout << endl; // add newline for formatting
  //print the updated values of the parameter to the user
  cout << "First number updated value: " << firstParam << endl;
  cout << "Second number updated value: " << secondParam << endl;

}

int main(){
  // two int variables that will be passed by reference in the zeroBoth method
  int firstParam;
  int secondParam;
  //prompt user for input and save to the variables
  cout << "Enter your first number: " << endl;
  cin >> firstParam;
  cout << "Enter your second number: " << endl;
  cin >> secondParam;
  zeroBoth(firstParam,secondParam); // apply the function zeroBoth

  return 0;
}
