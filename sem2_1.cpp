#include <iostream>
#include <stdio.h>
#include <string.h>
#include <queue>

using namespace std;

int main(){
    string st;
    cin>>st;
    string str;
    cin>>str;
    queue<char> q;

    for (int i = 0; i < st.size();i++){
        q.push(st[i]);
    }

    for (int i = 0; i < str.size();i++){
        if (str[i] == q.front() ){
            q.pop();
        }


    }
    if (q.size()==0){
        cout<<"yes";
    }
    
    return 0;
}