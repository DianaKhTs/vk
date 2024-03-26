/*
Дан отсортированный по возрастанию массив целых чисел и заданное число.
Заданное число может и не находится в массиве. Тогда необходимо вернуть предполагаемый индекс, 
где мог бы находится элемент. Другими словами, 
найдите правильное место для вставки элемента. Если же число есть, то возвращаем его индекс.
*/
#include <iostream>
#include <cmath>
#include<time.h>



using namespace std;
void PrintArray(int* arr, int n) 
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int BinarySearch(int* arr, int start_p,int end_p, int x)
{

    int n = end_p - start_p + 1;
    if (n == 1)
    {
        return start_p;
    }
    int p_mid =  start_p + n/2;
    if(x > arr[p_mid])
    {
        return BinarySearch(arr, arr[p_mid+1],end_p,x);
    }
    else if (x <arr[p_mid])
    {
        return BinarySearch(arr, start_p, p_mid-1,x);
    }
    else 
    {
        return p_mid;
    }
}
  int main()
{
    srand(time(0));
    const int n = 5;
    int arr[n];

    
    for (int i = 0; i < n; i++)
    {
       //cin >> x;
       arr[i] = rand()%100;
    }
    //BubbleSort(arr,n);
    PrintArray(arr,n);
        
    int val;
    cin >> val;
    cout << BinarySearch(arr, 0,n-1,val);
    

}