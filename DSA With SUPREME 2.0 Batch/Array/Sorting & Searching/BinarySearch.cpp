// Note before performing Binary search array elements must be sorted

#include<iostream>
#include<vector>
#include<algorithm> // For using sorting function
using namespace std;

int Search(vector<int> &arr, int key){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = (start+end) /2;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid -1;
        }else if(arr[mid] < key){
            start = mid +1;
        }
    }
    return -1;
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