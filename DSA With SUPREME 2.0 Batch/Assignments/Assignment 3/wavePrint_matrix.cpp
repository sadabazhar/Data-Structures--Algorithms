// print a matrix into wave form 
//eg; given matrix arr = {1,2,3},
//                       {4,5,6},          
//                       {7,8,9} 
// O/P => 1 4 7 8 5 2 3 6 9 
// Logic If row index is odd then print asc order, else desc order.


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

void NormalForm(vector <vector <int>> &arr, int row, int col){
    cout<<"Elements of Array Column wise"<<endl;
    for(int j=0 ; j<col ; j++){
    for(int i=0 ; i<row ; i++){
        cout<<arr[i][j]<<" ";
    }   
    }
}

void WaveForm(vector <vector <int>> &arr, int col){
    int row = arr.size();
    cout<<"Wave Form"<<endl;
    for(int j=0 ; j<col; j++){
        if(j%2 == 0){
            for(int i=0 ; i<row ; i++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int i=row-1 ; i>=0 ; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main(){
    vector < vector <int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    // Getdata(arr, 3, 3);
    // NormalForm(arr, 3, 3);
    WaveForm(arr, 4);
    return 0;
}