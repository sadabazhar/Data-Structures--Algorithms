// Note before performing Binary search array elements must be sorted

#include<iostream>
#include<vector>
#include<algorithm> // For using sorting function
using namespace std;

int Search(vector<int> &nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // Target found
            } else if (nums[mid] < target) {
                left = mid + 1; // Search in the right half
            } else {
                right = mid - 1; // Search in the left half
            }
        }
        
        return -1; // Target not found
    }

int main(){
    vector <int> arr = {12, 343, 64, 61, 72, 3};

    // Use the sort() function to sort the vector
    sort(arr.begin(), arr.end());

    int ans = Search(arr, 64);

    if(ans != -1){
        cout << "Key present at index: " << ans << endl;
    } else {
        cout << "Key not found." << endl;
    }
    return 0;
}