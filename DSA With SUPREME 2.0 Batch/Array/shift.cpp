// Example : I/P -> {2, 3, 5, 12, 65, 54}
// O/P -> {54, 2, 3, 5, 12, 65}

#include<iostream>
using namespace std;

void shift(int arr[],int size, int pos){
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
    //Print all elements
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {2, 3, 5, 12, 23, 32};
    shift(arr, 6, 1);
    return 0;
}