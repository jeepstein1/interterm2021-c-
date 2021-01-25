/*
*Jenny Epstein
*ID # 2338652
*CPSC 298- 07
*employeePay.cpp
*/

#include <iostream>
using namespace std;

int main(){
  const double HOURLY_WAGE = 16.00;
  const double HOURLY_OVERTIME_WAGE = 24.00;
  const double SOCIAL_SECURITY_TAX = 0.06;
  const double FEDERAL_INCOME_TAX = 0.14;
  const double STATE_INCOME_TAX = 0.05;
  const int MEDICAL_INSURANCE = 10;
  double hoursWorked;
  double overTimeHours;
  double totalCompensation;

  cout << "Enter the number of hours worked this week: " << endl;//prompt user to input hours worked
  cin >> hoursWorked; //save user input to the hoursWorked variable

  if(hoursWorked > 40){ //will calculate total pretax compensation for over 40 hours a week
    overTimeHours = hoursWorked - 40;
    totalCompensation = (40 * HOURLY_WAGE) + (overTimeHours * HOURLY_OVERTIME_WAGE);
  }
  else{//will calculate total pretax compensation for under 40 hours a week
    totalCompensation = (hoursWorked * HOURLY_WAGE);
  }
  //display the calculated values out to the user
  cout << "Gross pay: $" << totalCompensation << endl;
  cout << "Social Security tax: $" << (totalCompensation * SOCIAL_SECURITY_TAX) << endl;
  cout << "Federal Income tax: $" << (totalCompensation * FEDERAL_INCOME_TAX) << endl;
  cout << "State Income tax: $" << (totalCompensation * STATE_INCOME_TAX) << endl;
  cout << "Medical Insurance tax: $" << MEDICAL_INSURANCE << endl;
  cout << "Net take-home pay: $" << (totalCompensation - ((totalCompensation * SOCIAL_SECURITY_TAX)+(totalCompensation * FEDERAL_INCOME_TAX)+(totalCompensation * STATE_INCOME_TAX)+MEDICAL_INSURANCE)) << endl;



  return 0;
}
