#include<iostream>
#include<vector>
using namespace std;


void Sort(vector <int> &nums){
    int n = nums.size();

    for(int i=1 ; i<n ; i++){
        
        int key = nums[i];
        int j = i-1;

        while (nums[j] > key && j>=0)
        {
            //Shifting element
            nums[j+1] = nums[j];
            j--;
        }
        
        // Store element at their right position
        nums[j+1] = key;
    }
}

void Print(vector <int> &nums){
    cout<<"Elements of Array: ";
    int n = nums.size();

    for(int i=0 ; i<n ; i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector <int> nums = {12, 343, 64, 61, 72, 3};
    Print(nums);
    cout<<endl<<"After Sorting"<<endl;
    Sort(nums);
    Print(nums);
    return 0;
}