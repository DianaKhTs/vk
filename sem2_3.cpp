#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int bin_search_sqrt(int val){
    int l = 0;
    int r = val;
    int mid;
    while (l<=r){
        mid = (l+r)/2;
        if (mid*mid < val){
            l = mid+1;
            continue;
        }
        if (mid*mid > val){
            r = mid - 1;
            continue;
        }
        return mid;

    }
    return r;
}

int main(){
    int val;
    cin >> val;
    cout << bin_search_sqrt(val);
}