#include<iostream>
using namespace std;

//Using linear search technique
int Linearsearch(int arr[], int size){
    int ans = arr[0];
    for(int i=0 ; i<size ; i++){
        if(ans == arr[i])
        ans++;
    }
    return ans;
}

//Using mathematic falmulas

int Find(int arr[], int size){
    int sum=0;
    for(int i=0 ; i<size ; i++){
        sum = sum+arr[i];
    }
    int TotalSum = (size*(1+size))/2;
    int ans = TotalSum -sum;
    return ans;
}

int main(){
    int arr[] = {0,1,2,4};
    cout<<"Missing Number is "<<Linearsearch(arr, 4)<<endl;
    cout<<"Missing Number is "<<Find(arr, 4);
    return 0;  
}