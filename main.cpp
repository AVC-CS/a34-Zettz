#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string month1, month2, month3;
  double rainfall1, rainfall2, rainfall3;

  cin >> month1 >> rainfall1;
  cin >> month2 >> rainfall2;
  cin >> month3 >> rainfall3;

  double avg = (rainfall1 + rainfall2 + rainfall3) / 3.0;
  
  cout << fixed << setprecision(2);
  cout << "The average rainfall for " 
  << month1 << ", " << month2 << ", and " << month3 
  << " is " << avg << " inches." << endl;
}

