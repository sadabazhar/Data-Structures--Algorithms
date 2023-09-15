// Example : given Array arr[] ={8, 4, -2, 0, -1, 2} 
// arrange in all -ve to to left i.e; {-2, -1, 0, 8, 4 2}

#include<iostream>
#include<vector>
using namespace std;

// Using two pointers saperate -ve only

void shift(vector <int> &arr){
    cout<<endl<<"Using two pointers saperate -ve only"<<endl;
    int j = 0;
    for(int idx = 0 ; idx < arr.size() ; idx++){
        if(arr[idx] < 0){
            swap(arr[idx], arr[j++]);
        }
    }
}

// Using two pointers saperate -ve and +ve
void Move(vector <int> &arr){
    cout<<endl<<"Using two pointers saperate -ve and +ve"<<endl;
    int left = 0, idx = 0;
    int n = arr.size();
    int right = n-1;
    while (idx<=right)
    {
        if(arr[idx] < 0){
            swap(arr[idx], arr[left]);
            left++, idx++;
        }else if(arr[idx] > 0){
            swap(arr[idx], arr[right]);
            right--;
        }else{
            idx++;
        }
    }
    
}

// using sorting technique

void Sort(vector <int> &arr){
    cout<<endl<<"Using sorting technique"<<endl;
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
    vector <int> arr ={8, 4, -2, 0, -1, 2};

    shift(arr);
    print(arr);
    Move(arr);
    print(arr);
    Sort(arr);
    print(arr);
}