#include<iostream>
using namespace std;
int printnumber(int arr[], int size){
    int result = 0;
    for(int i=0 ; i<size ; i++){
        result = result * 10 + arr[i];
    }
    return result;
}

int main(){
    int arr[10];
    int size;
    cout<<"Enter no. of elements: ";
    cin>>size;
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    cout<<printnumber(arr, size);
    return 0;
}