// Hoppock, Zachary
// tenArray.cpp
// November 14, 2020
// Allocate an array of specific values, add 1 to each element, then print the array
// Version #1

#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 10;
  int a[10];
  a[0] = 17;
  a[SIZE - 1] = 29;

  for (int i = 1; i < SIZE-1; i++)
  {
    a[i] = -1;
  }
  
  for (int i = 0; i < SIZE; i++)
  {
    a[i]++;
    cout << a[i] << endl;
  }

  for (int i = 0; i < SIZE; i++)
  {
    cout << a[i];
    if (i < SIZE - 1)
    {
      cout << ", ";
    }
  }

  return 0;
}