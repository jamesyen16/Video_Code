#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int size = 5;
	int numbers[] = {10, 20, 30, 47, 58};

    cout << "Plain output of array: " << numbers << endl;
	cout << "Dereferenced value:    " << *numbers<< endl;

	//two different ways of accessing array
	cout << "using []" << endl;
    for(int i = 0; i < size; i++){
		cout << numbers[i] << "  ";
	}
	cout << endl;

	cout << "using * " << endl;
	for(int i = 0; i < size; i++){
		cout << *(numbers + i) << "  ";
	} 
	cout << endl;

	return 0;
}
