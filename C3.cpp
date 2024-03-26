/*Задача к модулю (хеш-таблицы) На вход подается два параметра: кол-во элементов в массиве и сам массив.
Необходимо вернуть элемент, который встречается больше половины раз. Если такого элемента нет, возвращайте -1*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i <n; i++){
        cin>>arr[i];
    }

    unordered_map<int,int> hash;
    for(int i = 0; i < n;i++){
        if (hash.find(arr[i])==hash.end()){
            hash.insert({arr[i],1});
            continue;
        }
        hash[arr[i]]+=1;

    }

    for(auto& item : hash)
    {
        if (item.second>n/2){
            cout << item.first<<endl;
            return 0;
        }
        //cout << item.first << " : " << item.second << endl; 
    }
    cout << -1;
    return 0;

}