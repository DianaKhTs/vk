#include <iostream>
#include <stack>
#include<string.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;

    

    for (int i = 0; i < s.size();){
       // cout<< "i=" <<i<<endl;
        //cout << "size " << s.size() << endl;
        if ( st.size()==0 || s[i]!=st.top()){
            st.push(s[i]);
            //cout << "if " << s << " " << st.top() << " " << i << endl;
            i++;
            continue;
        }
       // cout<<"else"<<endl;
        st.pop();
       // cout << "str:"<< s<<endl;
       
        s.erase(i-1,2);
        
        //cout << "str:"<< s << endl;
        //cout << "size " << s.size() << endl;
        i-=1;
       // cout<< "i=" <<i<<endl;
        
        //s.erase(i);
    
        
     
        



    }

    cout << s;
    

}