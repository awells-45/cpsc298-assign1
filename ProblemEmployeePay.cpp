// This program takes the hours worked in a week of an employee as console input and calculates and prints the gross pay, net pay, and any witheld amounts

#include <iostream>

using namespace std;

int main(int argc, char **argv){
  const float HOURLY_PAY = 16.00;
  const float OVERTIME_HOURLY_PAY = 1.5 * HOURLY_PAY;
  const float SOCIAL_SECURITY_TAX = 0.06;
  const float FEDERAL_INCOME_TAX = 0.14;
  const float STATE_INCOME_TAX = 0.05;
  const int MEDICAL_INSURANCE_COST = 10;

  int hoursWorked;
  float grossPay;
  float socialTaxWitheld;
  float fedTaxWitheld;
  float stateTaxWitheld;
  float netPay;

  if(argc != 2){
    cout << "Incorrect data entered." << endl;
    return -1;
  }

  hoursWorked = atoi(argv[1]);

  if (hoursWorked > 40){ // calculating gross pay
    grossPay = (40 * HOURLY_PAY) + ((hoursWorked - 40) * OVERTIME_HOURLY_PAY);
  } else {
    grossPay = hoursWorked * HOURLY_PAY;
  }
  cout << "Gross Pay: $" << grossPay << endl;

  socialTaxWitheld = SOCIAL_SECURITY_TAX * grossPay;
  cout << "Social Security Tax Witheld: $" << socialTaxWitheld << endl;

  fedTaxWitheld = FEDERAL_INCOME_TAX * grossPay;
  cout << "Federal Income Tax Witheld: $" << fedTaxWitheld << endl;

  stateTaxWitheld = STATE_INCOME_TAX * grossPay;
  cout << "State Income Tax Witheld: $" << stateTaxWitheld << endl;

  cout << "Medical Insurance Costs Witheld: $" << MEDICAL_INSURANCE_COST << endl;

  netPay = grossPay - socialTaxWitheld - fedTaxWitheld - stateTaxWitheld - MEDICAL_INSURANCE_COST; // Net pay = gross pay - witheld amounts
  cout << "Net Pay: $" << netPay << endl;


  return 0;
}
