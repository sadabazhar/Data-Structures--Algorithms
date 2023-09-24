#include<iostream>
#include<vector>
using namespace std;

void Swap(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void Sort(vector <int> &nums){
    int n = nums.size();

    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(nums[j] > nums[j+1]){
                Swap(nums[j], nums[j+1]);
            }
        }
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