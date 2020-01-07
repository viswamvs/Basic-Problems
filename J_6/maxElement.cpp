#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {

    int N, i = 0;
    cin >> N;
    
    stack<long int> myStack, maxStack;
    
    while(i < N){
        int type, x;
        cin >> type;
        if(type == 1){
            cin >> x;
           
            myStack.push(x);
            if(!maxStack.empty()){
                if(x >= maxStack.top()){ maxStack.push(x); }
            }else{
                maxStack.push(x);
            }
        }else if(type == 2){
           
            if(!myStack.empty()){ 
                if(myStack.top() == maxStack.top()) { maxStack.pop(); }
                myStack.pop();
            }
        }else if(type == 3){
            
            cout << maxStack.top() << endl;
        }
        
        i++;
    }
    return 0;
}

