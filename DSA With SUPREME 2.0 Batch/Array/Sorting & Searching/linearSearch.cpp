#include<iostream>
#include<vector>
using namespace std;

int Search(vector<int> &arr, int key){
    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    vector <int> arr = {12, 343, 64, 61, 72, 3};
    int ans = Search(arr, 3);
    
    if(ans != -1){
        cout << "Key present at index: " << ans << endl;
    } else {
        cout << "Key not found." << endl;
    }
    return 0;
}