#include <iostream>
using namespace std;

void reverse(int arr[], int n){

    int start = 0;
    int end = n - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void PrintArray(int arr[] , int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[6] = { 1, 3, 4, 6, 7, -1};
    int brr[5] = { 2, 3, 5, 0, 1};

    reverse(arr, 6);
    reverse(brr, 5);

    PrintArray(arr, 6);
    PrintArray(brr, 5);

    return 0;
}