#include<iostream>
#include<vector>
using namespace std;

int Find(vector<int> &arr) {
    int ans = -1;
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int mid = (start + (end-start))/2;

    while(start <= end) {
    int diff = arr[mid] - mid;

    if(diff == 1) {
      //right me jao
      start = mid+1;
    }
    else {
      //ans store
      ans = mid;
      //left me jao
      end = mid - 1;
    }
     mid = start + (end-start)/2;
  }


  //Catch for last index element
  if(ans +1 == 0)
    return n+1;
  
  return ans+1; 
}

int main() {
    vector<int> arr = {1,2,3,4,5,6};

    cout << Find(arr);
    
    return 0;
}