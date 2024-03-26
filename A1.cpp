

#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int x = 0;
    int arr[n];
    int count_el = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }
    int ind = 0;
    int val;
    cin>>val;
    while (ind < n && arr[ind] != val )
    {
        ind++;
    }
    for(int i = ind+1; i < n; i++)
    {
        if (arr[i] != val)
        {
            arr[ind] = arr[i];
            count_el++;
            ind++;
        }
      
    }
 
/*
    for (int i = 0; i < ind ; i++)
    {
        cout << arr[i] << " ";
    }
*/
    cout<< count_el;
    return 0;
}
