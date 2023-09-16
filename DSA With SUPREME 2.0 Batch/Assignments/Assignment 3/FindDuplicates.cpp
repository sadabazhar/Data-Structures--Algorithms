// Example : given Array arr[] = {8, 4, 2, 0, 2, 4, 1} 
// O/p -> 4, 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Using two pointers findig duplicates
int Find1(vector <int> &arr){
    cout<<endl<<"Using two pointers"<<endl;
    vector <int> ans;
    for(int i=0 ; i<arr.size() ; i++){
        for(int j= i+1 ; j<arr.size() ; j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}

//Using Sorting function
int Find2(vector <int> &arr){
    cout<<endl<<"Using sorting"<<endl;
    for(int i=0 ; i<arr.size() ; i++){
            if(arr[i] == arr[i+1]){
                return arr[i];
            }
    }
    return -1;
}

int main(){
    vector <int> arr = {8, 4, 2, 0, 2, 1};
    // int ans = Find1(arr);

    sort(arr.begin(), arr.end());
    int ans = Find2(arr);
    
    if(ans != -1){
        cout << "Duplicate Number is " << ans << endl;
    } else {
        cout << "Duplicate not found." << endl;
    }
}