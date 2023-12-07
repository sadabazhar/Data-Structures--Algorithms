#include<iostream>
#include<queue>
using namespace std;

void interleave(queue<int> &first){
    queue<int> second;
    int n = first.size();

    // Step 1 Original Queue ke 1st part ko Q 2nd me push kro && Queue ko pop kro
    for(int i = 0; i < n / 2; i++){
        int temp = first.front();
        first.pop();
        second.push(temp);
    }

    // Step 2: ek bar first part and ek bar second part ko origin q ke push kro
    while(!second.empty()){
        first.push(second.front());
        second.pop();

        if(!second.empty()){
            second.push(first.front());
            first.pop();
        }
    }

}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    interleave(q);
    cout << "Size of queue: " << q.size() << endl;
    cout << "Elements of queue: ";
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}
