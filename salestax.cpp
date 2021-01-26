/*
*Jenny Epstein
*ID # 2338652
*jeepstein@chapman.edu
*CPSC 298- 07
*salestax.cpp
*/

#include <iostream>
using namespace std;

float addTax(float taxRate, float itemCost){
  float salesTax = taxRate;
  float preTaxCost = itemCost;
  float postTaxTotal;

  postTaxTotal = salesTax * preTaxCost;

  return postTaxTotal;
}

int main(){
  // create two variables to serve as paramters for addTax method of type float
  float salesTax;
  float preTaxCost;
  //prompt user for input and save to the variables
  cout << "Enter the sales tax amount: " << endl;
  cin >> salesTax;
  cout << "Enter the pre-tax price of the item: " << endl;
  cin >> preTaxCost;
  cout << endl; //add a newline for formatting

  float postTaxTotal; //create variable to hold the final price
  postTaxTotal = preTaxCost + (addTax(salesTax, preTaxCost));//save the returned value of addTax method to variable

  //display the output to the user
  cout << "Tax on item: " << salesTax << "%" << endl;
  cout << "Pre tax price of item: $" << preTaxCost << endl;
  cout << "Final price of item: $" << postTaxTotal << endl;
  return 0;
}
