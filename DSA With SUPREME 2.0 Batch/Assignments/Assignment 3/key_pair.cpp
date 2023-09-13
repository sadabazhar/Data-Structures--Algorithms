// Example : given Array arr[] ={1, 2, 5, 10, 6} I/P -> 16 
// O/P -> {3, 4} => 10 + 6 = 16

#include<iostream>
using namespace std;
bool keypair(int arr[], int size, int target){
    bool ans;
    for(int i=0 ; i<size-1 ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(arr[i]+arr[j] == target){
                cout<<"key pair: "<<arr[i]<<"+"<<arr[j]<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[] ={1, 44, 6, 8, 9};
    int key = 45;
    if(keypair(arr, 5, key));
    else cout<<"Not founded";
}