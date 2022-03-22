#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned)time(0));
  int rdnum;
  int minimum = 101;
  for (int i = 0; i < 5; i++) {
    rdnum = (rand() % 100) + 1;
    cout << rdnum << endl;
    if (minimum > rdnum) { // minimum is greater than the random number
            // set minimum equal to that random number
         minimum = rdnum;  }
  }
  cout << "Minimum Number: " << minimum << endl;
}