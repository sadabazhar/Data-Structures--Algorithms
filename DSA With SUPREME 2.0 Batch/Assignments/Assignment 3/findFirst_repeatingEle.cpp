// Q. Find first repeating element, given Array arr[] = {8, 4, 1, 4, 1, 2} 
// O/P if founded return i.e; if not then return -1;

#include<iostream>
#include<vector>
using namespace std;

// Using two pointers findig duplicates
int Find1(vector <int> &arr){
    cout<<endl<<"Using two pointers"<<endl;
    for(int i=0 ; i<arr.size() ; i++){
        for(int j= i+1 ; j<arr.size() ; j++){
            if(arr[i] == arr[j]){
                return arr[i];
                break;
            }
        }
    }
    return -1;
}


int main(){
    vector <int> arr = {8, 4, 1, 4, 1, 2};
    int ans = Find1(arr);

    if(ans != -1){
        cout << "First repeating element: " << ans << endl;
    } else {
        cout << "Their is no repeating element." << endl;
    }
}