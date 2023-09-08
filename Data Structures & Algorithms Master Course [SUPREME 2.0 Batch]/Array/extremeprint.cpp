#include <iostream>
using namespace std;
int extreamprint(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    while(left <= right){
        if(left == right){
            cout<<arr[left];
        }else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}

int main() {
  int arr[] = {66, 22, 1, 4, 15};
  extreamprint(arr, 5);
  return 0;
}