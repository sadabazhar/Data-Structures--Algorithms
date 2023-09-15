// Example : given Array arr[] ={8, 4, -2, 0, -1, 2} 
// arrange in all -ve to to left i.e; {-2, -1, 0, 8, 4 2}

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
            }
        }
    }
    return -1;
}


int main(){
    vector <int> arr ={8, 4, 2, 0, 2, 1};
    cout<<Find1(arr);
}