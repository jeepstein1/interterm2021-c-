/*
*Jenny Epstein
*ID # 2338652
*jeepstein@chapman.edu
*CPSC 298- 07
*conversion.cpp
*/

#include<iostream>
#include<string>
using namespace std;

float userInput(float userFeet, float userInches){
  float compoundedMeasurement = 0; //create variable for calculations
  compoundedMeasurement = (userFeet * 12) + userInches; //calculate the total number of inches from input
  return compoundedMeasurement;
}

float inchesToCentimetersConversion(float compoundedMeasurement){
  float tempCalculation = 0; //holds first part of calculation
  tempCalculation = compoundedMeasurement * 30.48;
  float finalCentimeterCalculation = 0; //holds second part of calculation to inches
  finalCentimeterCalculation = tempCalculation / 12;
  return finalCentimeterCalculation;
}

void calculationOutput(float finalCentimeterCalculation){

  int finalCentimeterNumber = 0;
  finalCentimeterNumber = (static_cast<int>(finalCentimeterCalculation) % 100); //calculate the number of centimeters by finding the remainder from the modulo function
  int finalMeterNumber = 0;
  finalMeterNumber = (static_cast<int>(finalCentimeterCalculation) / 100); //calcualte the number of meters by dividing the total inches by 100

  //print out calculation results to the user
  cout << "Total meters: " << finalMeterNumber << endl;
  cout << "Total centimeters: " << finalCentimeterNumber << endl;
}

int main(){
    string loopIndicator;
    cout << "If you would like to perform a conversion, enter yes. If not, enter quit." << endl;
    cin >> loopIndicator;
    while(loopIndicator == "yes"){//will run the conversion loop based on the user input
      float userFeet = 0;
      cout << "Enter the number of feet: " << endl; //prompt user to enter feet input
      cin >> userFeet;

      float userInches = 0;
      cout << "Enter the number of inches: " << endl; //prompt user to enter inches input
      cin >> userInches;

      float compoundedMeasurement = 0;
      compoundedMeasurement = userInput(userFeet, userInches); //save the calculated input value to the float
      float centimeterTotal = 0;
      centimeterTotal = inchesToCentimetersConversion(compoundedMeasurement); // apply the centimeter conversion on the value of compoundedMeasurement and save it to the centimeter total value

      calculationOutput(centimeterTotal); //prints out the final conversion to the user

      cout << "If you would like to perform another conversion, enter yes. If not, enter quit." << endl; //reprompt the user to enter another conversion or quit the loop
      cin >> loopIndicator;
    }


  return 0;
}
