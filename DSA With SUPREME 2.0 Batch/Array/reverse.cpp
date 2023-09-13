#include <iostream>
using namespace std;
int reversearray(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    while(left <= right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int print(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
  int arr[] = {66, 22, 1, 4, 15};
  cout<<endl<<"Before reversing : ";
  print(arr, 5);
  cout<<endl<<"after reversing : ";
  reversearray(arr, 5);
  print(arr, 5);
  return 0;
}