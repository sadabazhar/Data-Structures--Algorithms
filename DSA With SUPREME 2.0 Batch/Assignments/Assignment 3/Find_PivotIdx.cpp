// Example : given Array arr[] ={1, 4, 6, 3, 2} 
// Pivot index is 2:  i.e; 1+4 = 3+2 therefor pivot ele is 6

#include<iostream>
using namespace std;
int Find_pivot(int arr[], int size){
    int sum = 0;
    for(int i=0 ; i<size ; i++){
        sum = sum + arr[i];
    }

    int leftsum = 0;
    int rightsum = sum;

    for(int i=0 ; i<size ; i++){
        rightsum = rightsum - arr[i];
        if(rightsum == leftsum){
        return i;
        break;
        }
        leftsum = leftsum + arr[i];
    }
    return -1;
}

int main(){
    int arr[] ={1, 4, 6, 3, 2};
    cout<<(Find_pivot(arr, 5));
}