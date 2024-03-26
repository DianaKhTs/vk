
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x = 0;
    int arr[n];
    int ind_even = -1;
    int count_even = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if (x%2==0)
        {
            count_even++;
        }
        arr[i] = x;
    }
    //cout << endl;
    for(int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            ind_even++;
            //for (int j = i; j > ind_even; j--)
            //{
                //assert(arr[j]*arr[j-1]<0);
                swap(arr[i],arr[ind_even]);
            //}
        }
        if (ind_even == count_even-1)
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
