/*
*Jenny Epstein
*ID # 2338652
*jeepstein@chapman.edu
*CPSC 298- 07
*cereal.cpp
*/

#include <iostream>
using namespace std;

int main(){
  const double METRIC_OUNCES_PER_TON = 35273.92; // constant holds the value ounces in a ton
  double cerealOuncesWeight;
  double cerealTonWeight;
  double numberOfBoxesNeeded;

  cout << "Enter the weight of a cereal package in ouces: " << endl; //prompt user for input
  cin >> cerealOuncesWeight; //save input for cereal box weight in ounces to the variable cerealTonWeight

  cerealTonWeight = cerealOuncesWeight/METRIC_OUNCES_PER_TON;//calculates the number of tons a cereal weighs

  numberOfBoxesNeeded = METRIC_OUNCES_PER_TON / cerealOuncesWeight; //calculates the number of boxes needed to make a ton of cereal

  //display output to user
  cout << "Tons of cereal per package: " << cerealTonWeight << endl;
  cout << "Number of boxes needed for a ton of cereal: " << numberOfBoxesNeeded << endl;

  return 0;
}
