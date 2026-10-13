// Name: Andrew Savio
// CIS 5 Week 7 Homework - Odd and Even
// Fills an array of 20 random ints (0-99), then separates them into
// even and odd arrays in a single for loop, preserving original order.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  const int N = 20;
  int values[N];

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
  }

  int evens[N];
  int odds[N];
  int evenCount = 0;
  int oddCount = 0;

  // One loop: separate elements into evens and odds
  for (int i = 0; i < N; ++i) {
    if (values[i] % 2 == 0) {
      evens[evenCount] = values[i];
      ++evenCount;
    } else {
      odds[oddCount] = values[i];
      ++oddCount;
    }
  }

  // Print the original array with index and element
  for (int i = 0; i < N; ++i) {
    cout << "[" << i << "] " << values[i] << endl;
  }

  // Print only up to each count
  cout << "Even:";
  for (int i = 0; i < evenCount; ++i) {
    cout << " " << evens[i];
  }
  cout << endl;

  cout << "Odd:";
  for (int i = 0; i < oddCount; ++i) {
    cout << " " << odds[i];
  }
  cout << endl;

  return 0;
}
