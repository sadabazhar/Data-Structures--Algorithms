#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector <int> find(vector <vector <int>> &arr){
    int row_idx, max = INT_MIN;
    int n = arr.size();
    for(int i=0 ; i<n ; i++){
        int count = 0;
        for(int j=0 ; j<arr[i].size() ; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(count>max){
        max=count;
        row_idx = i;
        }
    }

    vector <int> ans ={row_idx, max};
    return ans;
}


int main(){
    vector< vector <int > > arr = {
        {1, 0, 1, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 0},
        {1, 0, 0, 0}
    };

    vector <int> arr2 = find(arr);
    for(int i=0 ; i<arr2.size() ; i++){
        cout<<arr2[i]<<" ";
    }
}