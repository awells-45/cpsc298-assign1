// This program takes as console input the weight of a cereal box in ounces, and calculates and prints the weight in metric tons and the number of boxes needed to amount to one full ton.

#include <iostream>
#include <cmath> // needed to use the ceil function

using namespace std;

int main(int argc, char **argv){
  const double OUNCES_PER_TON = 35273.92;
  double cerealWeightOunces;
  double cerealWeightTons;
  int numCerealBoxes;

  if(argc != 2){
    cout << "Incorrect data entered." << endl;
    return -1;
  }

  cerealWeightOunces = atof(argv[1]); // console input

  cerealWeightTons = cerealWeightOunces / OUNCES_PER_TON;
  numCerealBoxes = ceil(1.0 / cerealWeightTons); // using ceiling to round up to the whole number of boxes


  cout << "Metric tons of cereal per box: " << cerealWeightTons << endl;
  cout << "Number of boxes needed to reach a ton: " << numCerealBoxes << endl;

  return 0;
}
