#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    cout << "Printing the array " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "Printing Done " << endl;
}

int main(){

    int num[15];

    cout << " Value at index 1 " << num[2] << endl;

    int second[3] = {4, 5, 8};

    cout << "Value at index 2 is "<< second[2] << endl;

    int third[15] = {3, 4};

    int n = 15;
    printArray(third, 15);
    
    int fourth[10] = {2};
    n = 10;
    printArray(fourth, 10);

    int fifth[20] = {1};
    n = 20;
    printArray(fifth, 20);
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<< "Size of fifth is " << fifthSize << endl;

    cout << endl << "Everything is cool " << endl <<endl;

    return 0;
}