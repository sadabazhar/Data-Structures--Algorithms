// print a matrix into spiral form 
//eg; given matrix arr = {1,2,3},
//                       {4,5,6},          
//                       {7,8,9} 
// O/P => 1 2 3 6 9 8 7 4 5
// Logic If row index is odd then print asc order, else desc order.


#include<iostream>
#include<vector>
using namespace std;

void spiralForm(vector <vector <int>> &arr){
    int row = arr.size();
    int col = arr[0].size();
    int count=0; //for comparison with total sum
    int TotalSum = row*col;

    int startRow=0;
    int endCol=col-1;
    int endRow=row-1;
    int startCol=0;

    //loop to checking all elements are printing or not
    while (count<TotalSum)
    {
        //For starting row
        for(int i=startCol; i<=endCol && count<TotalSum ; i++){
            cout<<arr[startRow][i]<<" ";
            count++;
        }
        startRow++;

        //For ending column
        for(int i=startRow; i<=endRow  && count<TotalSum ; i++){
            cout<<arr[i][endCol]<<" ";
            count++;
        }
        endCol--;

        //For ending Row
        for(int i=endCol; i>=startCol  && count<TotalSum ; i--){
            cout<<arr[endRow][i]<<" ";
            count++;
        }
        endRow--;

        //For starting row
        for(int i=endRow; i>=startRow  && count<TotalSum ; i--){
            cout<<arr[i][startCol]<<" ";
            count++;
        }
        startCol++;
    }
    
}

int main(){
    vector < vector <int>> arr = {
        {1,2,3},
        {4,5,6},          
        {7,8,9}
    };
    spiralForm(arr);
    return 0;
}