
#include <iostream>
#include <cstdlib>
using namespace std;
// arr_1 - food
// arr_2 - animals

void create_array(int* arr, int n){
        
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
}

void PrintArray(int* arr, int n) 
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int compare(const void * x1, const void * x2)  

{

  return ( *(int*)x1 - *(int*)x2 );             

}

int feed_animals(int* arr_1, int n1, int* arr_2, int n2){
        qsort(arr_1,n1, sizeof(arr_1[0]),compare);
        qsort(arr_2,n2, sizeof(arr_2[0]),compare);
        PrintArray(arr_1,n1);
        PrintArray(arr_2,n2);
        int count = 0;

        for(int i = 0; i < min(n1,n2); i++){
            if(arr_2[i]>arr_1[i]){
                return count;
            }
            count++;
        }
        return count;
}

int main(){
    
    int n1,n2;
    cin>>n1>>n2;
    int arr_1[n1];
    int arr_2[n2];
    create_array(arr_1,n1);
    create_array(arr_2,n2);
    cout << feed_animals(arr_1,n1,arr_2,n2);
}