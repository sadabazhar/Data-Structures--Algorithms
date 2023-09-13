#include<iostream>
using namespace std;

int setbit(int num, int k){
    // e.g;  k = 3 -> 11 , num = 10 -> 1010
    k =  k<<1;  // 110
    num = num|k; // 1010 | 110 = 1110 -> 14
    return num;
}

int main(){
    int num, k;
    cout<<"Enter number here: ";
    cin>>num;
    cout<<"Enter position where you want to set the bit: ";
    cin>>k;
    cout<<"After set the bit "<<setbit(num, k);
    return 0;
}