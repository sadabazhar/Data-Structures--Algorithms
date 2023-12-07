#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string input = "fklfbc";
    queue<char> q;
    int freQ[26] = {0};

        //Push character in Q
        for (int i = 0; i < input.size(); i++)
        {
            char ch = input[i];
            freQ[ch-'a']++;     //Update FreQ
            q.push(ch);

            //Generate final output
            while (!q.empty())
            {
                char front = q.front();

                if (freQ[front-'a'] > 1) //Repearing character
                {
                    q.pop(); // Q ko empty kro
                }else{
                    cout<<front; // Show non repeating character
                    break;
                } 
            }

            if (q.empty())
            {
                cout<<"#";
            }
        }
    return 0;
}
