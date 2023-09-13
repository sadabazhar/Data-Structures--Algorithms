#include<iostream>
#include<vector>
using namespace std;

void Getdata(vector <vector <int>> &arr, int row, int col){
    cout<<"Enter element in array: "<<endl;
    for(int i=0 ; i<row ; i++){
        cout<<"Enter "<<i<<"th Row: ";
    for(int j=0 ; j<col ; j++){
        cin>>arr[i][j];
    }   
    }
}

void Showdata(vector <vector <int>> &arr, int row, int col){
    cout<<"Elements of Array"<<endl;
    for(int i=0 ; i<row ; i++){
    for(int j=0 ; j<col ; j++){
        cout<<arr[i][j]<<" ";
    }   
     cout<<endl;
    }
}

void Transpose(vector <vector <int>> &arr, int row, int col){
    cout<<"- After Transposing -"<<endl;
    for(int i=0 ; i<row ; i++){
    for(int j=i ; j<col ; j++){
        swap(arr[i][j], arr[j][i]);
    }   
    }
}

int LinearSearch(vector <vector <int>> &arr, int row, int col, int target){
    for(int i=0 ; i<row ; i++){
    for(int j=0 ; j<col ; j++){
        if(arr[i][j] == target)
        return true;
    }   
    }
    return false;
}

int main(){
    vector < vector <int>> arr (3, vector <int> (3));
    Getdata(arr, 3, 3);
    Showdata(arr, 3, 3);
    Transpose(arr, 3, 3);
    Showdata(arr, 3, 3);
    int target;
    cout<<"Enter element do you want to sreach: ";
    cin>>target;
    if(LinearSearch(arr, 3, 3, target)) cout<<"Element founded";
    return 0;
}