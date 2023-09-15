// Example : given Array arr[] ={1, 0, 2, 0, 1, 2} 
// 0 indicates red, 1 indicates green and 2 indicates blue
// Sort rgb formates

#include<iostream>
#include<vector>
using namespace std;

// Using two pointers
void SortColor(vector <int> &arr){
    int idx = 0, left =0, right = arr.size() -1 ;
    int n = arr.size();

    while (idx<=right)
    {
        if(arr[idx] == 0){
            swap(arr[left], arr[idx]);
            left++, idx++;
        }else if(arr[idx] == 2){
            swap(arr[right], arr[idx]);
            right--;
        }else{
            idx++;
        }
    }
    
}

// using sorting technique

void Sort(vector <int> &arr){
    for(int i=0 ; i<arr.size() ; i++){
        for(int j=i+1 ; j<arr.size() ; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

void print(vector <int> &arr){
    int n = arr.size();
    cout<<"{";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}";
}

int main(){
    vector <int> arr ={1, 0, 2, 0, 1, 2};  //{0, 1, 1, 0, 2, 2} 

    SortColor(arr);
    Sort(arr);
    print(arr);
}