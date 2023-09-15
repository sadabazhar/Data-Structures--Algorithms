// Example : I/P -> {2, 3, 5, 12, 65, 54}
// O/P -> {54, 2, 3, 5, 12, 65}

#include<iostream>
using namespace std;

void method1(int arr[],int size, int pos){
    int TempArr[pos];
    //Storing into Temp Array
    for(int i=size-pos ; i<size ; i++){
        TempArr[i- (size-pos)] = arr[i];
    }
    //shifting by kth position
    for(int i=size-1 ; i>pos-1 ; i--){
        arr[i] = arr[i-pos];
    }
    //storing element into original array from temp Array
    for(int i=0 ; i<pos ; i++){
        arr[i] = TempArr[i];
    }

    // Print an array
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

void method2(int arr[],int size, int pos){
     pos = pos % size;
    int TempArr[pos];

    // Storing into Temp Array
    for (int i = 0; i < size; i++) {
        int k = (i + pos) % size;
        TempArr[k] = arr[i];
    }

    int j = size - 1;

    // Copy elements from the end of arr to the beginning of TempArr
    for (int i = size - 1; i >= size - pos; i--) {
        TempArr[i] = arr[j--];
    }

    // Copy remaining elements from the beginning of arr to the end of TempArr
    for (int i = 0; i < size - pos; i++) {
        TempArr[i] = arr[i];
    }
}


int main(){
    int arr[] = {2, 3, 5, 12, 23, 32};
    // method1(arr, 6, 1);
    method2(arr, 6, 2);
    return 0;
}