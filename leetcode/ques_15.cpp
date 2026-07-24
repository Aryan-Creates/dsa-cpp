// SORT 0 1 array

#include <iostream>
using namespace std;

void PrintArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SortArray(int arr[], int n){
    int start = 0, end = n - 1;
    while(start < end){
        // Add safety check (start < end) to prevent out-of-bound errors
        while(arr[start] == 0 && start < end){
            start++;
        }
        while(arr[end] == 1 && start < end){
            end--;
        }
        
        // Move the swap and pointer updates INSIDE the main while loop
        if(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main(){
    int arr[8] = {1, 0, 0, 1, 0, 1, 1, 0};

    SortArray(arr, 8);
    PrintArray(arr, 8);
    return 0;
}
