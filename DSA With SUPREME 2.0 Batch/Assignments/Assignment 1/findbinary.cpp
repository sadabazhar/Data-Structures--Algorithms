#include<iostream>
#include<math.h>
using namespace std;

int Findbinary(int num){
    int binarydigits = 0, bit;
    for(int i = 0 ; num > 0 ; i++){
        bit = num%2;
        binarydigits = bit* pow(10,i) +binarydigits;
        num = num/2;
    }
    return binarydigits;
}

int main(){
    int num;
    cin>>num;
    cout<<"Binary digits of "<<num<<" is "<<Findbinary(num);
    return 0;
}