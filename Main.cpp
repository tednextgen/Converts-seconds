#include <iostream>
using namespace std;

int main() {
   int input;
   int minutes;
   int hours;
   int seconds;
   cin >> input;
   seconds = input % 60;
   minutes = (input / 60) % 60;
   hours = input / 3600;
   cout << "Seconds: " << seconds << endl;
   cout << "Minutes: "  << minutes << endl;
   cout << "Hours: " << hours << endl;
   /* Type your code here. */

   return 0;
}
