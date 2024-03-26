#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

// abba
void is_palindrom(){
    string st;
    cin>>st;
    stack<char> s;
    for (int i = 0;i < st.size()/2;i++){
        s.push(st[i]);
    }
    for (int i = s.size()/2+1; i < s.size(); i++ ){
        if (s.top()!=st[i]){
            cout << "no";
            return;
        }
        s.pop();
    }
    cout << "yes";

}
int main(){
    is_palindrom();
    

  
}