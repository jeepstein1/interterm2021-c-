/*
*Jenny Epstein
*ID # 2338652
*jeepstein@chapman.edu
*CPSC 298- 07
*intarray.cpp
*/
#include <iostream>
using namespace std;

int main(){
  int numArrayElements = 10; //variable that holds array size
  int numArray[numArrayElements];//numArray
  int userNum; //holds the user input to be added to array


  for(int i = 0; i < numArrayElements; ++i){ //will save 10 numbers from user input to the array
    cout << "Enter a non-negative number: " << endl;
    cin >> userNum;

    while(userNum < 0){//asks user to input a positive number and will continue to loop until proper input is received
      cout << "Enter a valid number: " << endl;
      cin >> userNum;//ask for new input
    }

    numArray[i] = userNum; //save the positive value in userNum to the array at index i
  }

  for(int i = 0; i < numArrayElements; ++i){ //will print out the value at each index
    cout << "Value at index " << i << ": " << numArray[i] << endl;
  }

  return 0;
}
