#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int copy_time(int n, int x, int y){
    int l = 0;
    int r = (n-1)*max(x,y);
    int mid;

    while(l+1<r){
        mid = (r+l)/2;
        if (mid/x + mid/y < n-1){
            l = mid;
        }
        else{
            r = mid;
        }

    }
    return r+min(x,y);
}
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    copy_time(n, x, y);
}