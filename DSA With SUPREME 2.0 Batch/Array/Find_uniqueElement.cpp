#include<iostream>
using namespace std;
int FindUnique(int arr[], int size){
    int ans;
    for(int i=0 ; i<size ; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]={1,5,12,6,1,5,6};
    cout<<"Unique element: "<<FindUnique(arr, 7);
    return 0;
}