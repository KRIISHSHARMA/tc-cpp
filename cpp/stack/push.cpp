#include <iostream>
using namespace std;

void Push(char* arr, int currentpointer, int numberofelements, char element) {

  if (currentpointer == numberofelements - 1) {
    cout << "OVERFLOW , STACK IS ALREADY FULL";
  } else {
    arr[++currentpointer] = element;
  }
}

int main() {
  char arr[6] = "kriis"; // This is a character array, not a string.
  Push(arr,4, 6, 'h');  // Passing a character 'h', not a string "h".
  
  // Printing the elements of the array.
  for (int i = -1 ; i < 6; ++i) { // i = -1 cause i[0] = k 
    cout << arr[i] << endl;
  }
  
  return 0;
}
