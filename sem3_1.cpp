// shell sort
// division into subarrays and using insertion_sort
#include <iostream>

using namespace std;
void PrintArray(int* arr, int n) 
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void shell_sort(int* arr, int sz){
    int gap = sz/2;
    int mid_gap;
    while (gap > 0){
        for(int cur = gap; cur < sz; cur++){
            mid_gap = cur;
            while(mid_gap >= gap && arr[mid_gap]<arr[mid_gap-gap]){
                swap(arr[mid_gap],arr[mid_gap-gap]);
                mid_gap-=gap;

            }
        }
        gap = gap/2;

    }
    PrintArray(arr,sz);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    shell_sort(arr,n);
    return 0;
}