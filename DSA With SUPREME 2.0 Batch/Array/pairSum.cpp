// Eg: I/P -> {1,2,3,5,2,4} target -> 7 
// O/P -> {5,2} {3,4}

#include<iostream>
using namespace std;

void TwoSum(int arr[], int size, int target){
    bool ans;
    for(int i=0 ; i<size-1 ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(arr[i]+arr[j] == target){
                cout<<"Two Sum: "<<arr[i]<<"+"<<arr[j]<<endl;
                ans = true;
            }
        }
    }
    if(!ans)
    cout<<"Two sum is not found";
}

void ThreeSum(int arr[], int size, int target){
    bool ans;
    for(int i=0 ; i<size-2 ; i++){
        for(int j=i+1 ; j<size-1 ; j++){
            for(int k=i+2 ; k<size ; k++){
                if(arr[i]+arr[j]+arr[k] == target){
                cout<<"Two Sum: "<<arr[i]<<"+"<<arr[j]<<"+"<<arr[k]<<endl;
                ans = true;
            }
            }
        }
    }
    if(!ans)
    cout<<"Two sum is not found";
}
int main(){
    int arr[] = {1,2,3,5,2,4};
    TwoSum(arr, 6, 7);
    // ThreeSum(arr, 6, 7);
    return 0;
}