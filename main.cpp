// a program for average of tests
// the scores from 3 tests 
// Afham. 8.28.19
#include <iostream>
using namespace std; 
int main() {
  double test_1;
  double test_2;
  double test_3;
  double average;  //based on 3 scores
  double sum; // I added the tests before dividing them
  cout <<"Calculates the average test score." <<endl;
  cout <<"Enter test 1: ";
  cin >> test_1;
  cout <<"Enter test 2: ";
  cin >> test_2;
  cout <<"Enter test 3: ";
  cin >> test_3;
  sum=test_1+test_2+test_3;
  average=sum/3;
  cout << "The test average is " << average << " . " << endl;
return 0;
}