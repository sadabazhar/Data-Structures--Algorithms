// Given array arr[] ={1, 33, 33, 33, 33, 76, 77}
// First occurrence at index 1 and last at index 4

#include<iostream>
#include<vector>
using namespace std;

vector<int> FindFirstOccurrence(vector<int> &arr, int key) {
    int start = 0;
    int end = arr.size() - 1;
    int temp;
    vector<int> ans;

    // for first Occurrence
    while (start <= end) {
        int mid = ((start/2) + (end/2)) / 2;

        if (arr[mid] == key) {
            temp = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
    }
    ans.push_back(temp);
    start = 0;
    end = arr.size() - 1; // Reset start and end
    while (start <= end) {
        int mid = ((start/2) + (end/2)) / 2;

        if (arr[mid] == key) {
            temp = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
    }
    ans.push_back(temp);

    return ans; // Return the vector containing first and last occurrences
}

int main() {
    vector<int> arr = {4, 4, 4, 5, 54, 65, 77};

    vector<int> ans = FindFirstOccurrence(arr, 4);
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}