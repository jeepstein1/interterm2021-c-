/*
*Jenny Epstein
*ID # 2338652
*CPSC 298- 07
*fireCapacity.cpp
*/
#include <iostream>
using namespace std;

int main(){
  int maxRoomCapacity;
  int numPeopleAttending;

  cout << "Enter the maximum room capacity: " << endl; //prompt user to enter max room capacity
  cin  >> maxRoomCapacity; //save value of  max capacity to the maxRoomCapacity variable

  cout << "Enter the number of people attending the meeting: " << endl; //prompt user to enter number of people attending
  cin  >> numPeopleAttending; //save value of the number of people to the numPeopleAttending variable

  if(numPeopleAttending <= maxRoomCapacity){ //will execute if numPeopleAttending value is less than or equal to maxRoomCapacity
    cout << "It is legal to hold this meeting." << endl;
    cout << "Additional legal room capcitiy: " << (maxRoomCapacity - numPeopleAttending) << endl;
  }
  else{ //will execute if numPeopleAttending is greater than maxRoomCapacity
    cout << "The meeting cannot be held due to violation of fire regulations." << endl;
    cout << "Number of people that must be excluded from meeting: " << (numPeopleAttending - maxRoomCapacity) << endl;
  }
  return 0;
}
