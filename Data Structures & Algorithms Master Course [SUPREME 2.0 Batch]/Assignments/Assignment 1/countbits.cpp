#include<iostream>
#include<math.h>
using namespace std;

void CountBits(int num){
    int setbit, clearbit, bit, binarydigits;
    setbit = clearbit = binarydigits = 0;
    for(int i = 0 ; num > 0 ; i++){
        bit = num%2;
        if(bit == 1){
            setbit++;
        }else{
            clearbit++;
        }
        binarydigits = bit* pow(10,i) +binarydigits;
        num = num/2;
    }

    cout<<"Binary digits of "<<num<<" is "<<binarydigits<<endl;
    cout<<"No. of Setbits are : "<<setbit<<endl;
    cout<<"No. of Clearbits are : "<<clearbit<<endl;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    CountBits(num);
    return 0;
}