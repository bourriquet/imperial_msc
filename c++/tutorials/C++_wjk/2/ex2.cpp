#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int lower, upper, step;
  
  double cels, abs;

  cout << "This program gives a table of F, C and K temperatures." << endl;

  cout << "Enter a lower F temp." << endl;
  cin >> lower;

  cout << "Enter an upper F temp." << endl;
  cin >> upper;

  cout << "Enter a step F value." << endl;
  cin >> step;

  cout << "The table of temperatures starting at " << lower << " and ending at " << upper;
  cout << " with a step value of " << step << " is as follows..." << endl << endl;

  cout << setiosflags(ios::left);

  cout.width(20);
  cout << "Fahrenheit";
  cout.width(20);
  cout << "Celsius";
  cout.width(20);
  cout << "Absolute" << endl << endl;

  cout.setf(ios::fixed);
  cout.precision(2);
  for (int i = lower; i <= upper; i += step) {
    cout.width(20);
    cout << i;

    cout.width(20);
    cels = (((float)i - 32) * (5.0 / 9));
    cout << cels;

    cout.width(20);
    abs = cels + 273.15;
    cout << abs << endl;

  }

  return 0;
}
