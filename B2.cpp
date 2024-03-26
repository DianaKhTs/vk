#include <iostream>

using namespace std;


bool BinarySearch(int* start_p,int* end_p, int x)
{

    int n = end_p - start_p + 1;
    if (n == 1)
    {
        return false;
    }
    int* p_mid =  start_p + n/2;
    if(x > *p_mid)
    {
        return BinarySearch(p_mid+1,end_p,x);
    }
    else if (x <*p_mid)
    {
        return BinarySearch(start_p, p_mid-1,x);
    }
    else 
    {
        return true;
    }
    

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int val;
    cin>>val;
    (BinarySearch(arr, arr+n-1, val)==1)?cout<<"true":cout<<"false";
}