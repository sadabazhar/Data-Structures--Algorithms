#include <iostream>
#include<limits.h>
using namespace std;
int min(int arr[], int size){
  int min = INT_MAX;
  for(int i = 0 ; i < size ; i++){
    if(min>arr[i]) min = arr[i];
  }
  return min;
}
int max(int arr[], int size){
  int max = INT_MIN;
  for(int i = 0 ; i < size ; i++){
    if(max<arr[i]) max = arr[i];
  }
  return max;
}
int main() {
  int arr[7];
  cout<<"Enter elements : ";
  for(int i = 0 ; i < 7 ; i++){
    cin>>arr[i];
  }
  cout<<"Minimum element in array : "<<min(arr,7)<<endl;
  cout<<"Minimum element in array : "<<max(arr,7);
  return 0;
}