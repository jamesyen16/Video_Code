#include <iostream>

using namespace std;

int main(){
  char letter;
  int n1 = 10;
  int n2 = 203;
  int n3 = 207;

  cout << "letter address: " << &letter << endl;
  cout << "n1: " << &n1 << " n2: " << &n2 << endl;
  cout << "n3: " << &n3 << endl;

  char * cptr;
  int * iptr;


  iptr = &n2;
  cout << "iptr value: " << *iptr << endl;
 
  *iptr = 1001; 
  cout << "iptr value: " << *iptr << endl;

  *iptr *= 2;
  cout << "iptr value: " << *iptr << endl;

  iptr = &n1;
  cout << "iptr value: " << *iptr << endl;

  return 0;
  
}
