#include<iostream>
using namespace std;
bool prime(int num){
    for(int i = 2 ; i < num ; i++){
        if(num % i == 0) return false;
        else return true;
    }
}
int main(){
    int num;
    cout<<"Enter number here :";
    cin>>num;
    for(int i = 2 ; i <= num ; i++){
        if(prime(i)) cout<<i<<" ";
    }
    return 0;
}