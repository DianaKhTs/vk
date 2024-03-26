#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x = 0;
    int arr[n];// 9 8 7 0 4 0 5 6
    int ind_zero = n;
    int count_zero = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
        {
            count_zero++;
        }
        arr[i] = x;
    }
    for(int i = n-1; i >=0; i--)
    {
        if (arr[i] == 0)
        {
            ind_zero--;
            for (int j = i; j < ind_zero; j++)
            {
                //assert(arr[j]*arr[j-1]<0);
                swap(arr[j],arr[j+1]);
            }
        }
        if (ind_zero == n - count_zero)
        {
            break;
        }
      

        
    
        
    }
 

    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}