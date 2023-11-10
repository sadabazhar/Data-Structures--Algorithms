#include<iostream>
#include<vector>
using namespace std;

int primesieve(int n){
    int prime[100] = {0};
    int ans = 0;
    
    for(int i=2 ; i<n ; i++){
        if(prime[i] == 0){
            for(int j=i*i ; j<n ; j+=i){
                prime[j] = 1;
            }
        }
    }
    for(int i=2 ; i<n ; i++){
        if(prime[i] == 0){
            ans++;
        }
    }
    return ans;
}

int main(){
    cout<<primesieve(14);
    return 0;
}