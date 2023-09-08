#include<iostream>
using namespace std;
int factorial(int num){
    int fact = 1;
    for(int i = num ; i >= 1 ; i--){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int num;
    cin>>num;
    cout<<"Factorial of "<<num<<" is : "<<factorial(num);
    return 0;
}
