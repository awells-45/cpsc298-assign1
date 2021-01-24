// This program takes in from the command line the maximum capacity of a room for a meeting and the number of people to attend the meeting, and prints whether the fire regulations would allow the meeting to be held and the number over or under capacity.

#include <iostream>

using namespace std;

int main(int argc, char **argv){
  int maxRoomCapacity;
  int numPeopleAttending;

  if(argc != 3){ // Checking for the correct amount of command line arguements
    cout << "Incorrect data entered." << endl;
    return -1;
  }

  maxRoomCapacity = atoi(argv[1]); // Converting console input to integers
  numPeopleAttending = atoi(argv[2]);

  if(numPeopleAttending <= maxRoomCapacity){
    cout << "Meeting can legally be held" << endl;
    cout << (maxRoomCapacity - numPeopleAttending) << " additional people may attend" << endl;
  } else {
    cout << "Too many people for the meeting to be held according to fire regulations" << endl;
    cout << (numPeopleAttending - maxRoomCapacity) << " people must be excluded to meet regulations" << endl;
  }

  return 0;
}
