#include <iostream>
using namespace std;

void PrintArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SwapAlternate(int arr[], int size){

    for(int i = 0; i < size; i+=2){
        if(i + 1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even[8] = {1, 3, 5, 6, 7, 8, 9, 0};
    int odd[5] = {1, 3, 5, 6, 7};

    SwapAlternate(even, 8);
    PrintArray(even, 8);

    cout << endl;

    SwapAlternate(odd, 5);
    PrintArray(odd, 5);

    return 0;
}