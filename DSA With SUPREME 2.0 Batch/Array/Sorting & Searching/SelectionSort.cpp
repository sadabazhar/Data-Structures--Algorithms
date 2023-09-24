#include<iostream>
#include<vector>
using namespace std;

void Swap(int &num1, int &num2){

    //If both elements are equal, there is no need to swap them.
    if(num1 == num2)
    return;

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void Sort(vector <int> &nums){
    int n = nums.size();

    for(int i=0 ; i<n-1 ; i++){
        // Find minimum element's Index
        int minIdx = i;

        for(int j=i+1 ; j<n ; j++){
            if(nums[j] < nums[minIdx])
            minIdx = j;
        }

        // Move the minimum element to the front of the array.
        Swap(nums[minIdx], nums[i]);
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
    vector <int> nums = {17, 2, 3, 3, 3, 3};
    Print(nums);
    cout<<endl<<"After Sorting"<<endl;
    Sort(nums);
    Print(nums);
    return 0;
}