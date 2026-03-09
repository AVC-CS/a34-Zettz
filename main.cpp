#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string month1, month2, month3;
  double rainfall1, rainfall2, rainfall3;
  double avg;
  avg = (rainfall1 + rainfall2 + rainfall3) / 3;
  
  cout << fixed << setprecision(2);
  cout << "The average rainfall for " 
  << month1 << ", " << month2 << ", and " << month3 
  << " is: " << avg << endl;
}
