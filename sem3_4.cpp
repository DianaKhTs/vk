#include <iostream>
#include <unordered_map>
#include <string.h>
using namespace std;
int* two_sum(int* data, int n, int target){
    int arr[2];
    unordered_map<int, int> hash;
    int diff;
    for (int i = 0; i < n; i++){
        diff = target - data[i];
        if (hash.contains(data[i])){
            arr[0] = i;
            arr[1] = hash[diff];
            return arr;
        }
        diff = target - data[i];
        hash[diff] = i;
    }
    return arr;
}
int main(){
    
} 