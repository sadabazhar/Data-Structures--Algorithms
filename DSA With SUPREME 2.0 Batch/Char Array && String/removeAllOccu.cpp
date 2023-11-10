#include<iostream>
#include<string.h>
using namespace std;

string removeOccurrences(string s, string part) {

      while(s.find(part) != string::npos){
        s.erase(s.find(part), part.length());
      }
      return s;
    }

int main(){
    string s, part;
    cout<<"Enter string: ";
    cin>>s;
    cout<<endl<<"Your String: "<<s<<endl;
    cout<<"Your part of string, that you want to esare: ";
    cin>>part;
    cout<<"Final ans: "<<removeOccurrences(s,part);
    return 0;
}