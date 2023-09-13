//Example : I/P -> [1,2,3] 
// O/P -> [1,1],[1,2],[1,3] [2,1],[2,2],[2,3]  [3,1],[3,2],[3,3]
#include<iostream>
using namespace std;

void print_AlltwoPairs(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
            cout<<arr[i]<<","<<arr[j]<<" ";
        }
        cout<<endl;
    }
}

void print_AllthreePairs(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
            for(int k=0 ; k<size ; k++){
            cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[] ={1,2,3};
    print_AlltwoPairs(arr,3);
    // print_AllthreePairs(arr,3);
    return 0;
}
