/*На вход подается строка с многократным повторением разных букв.
Надо понять какое максимальное количество повторений встречается в строке.
Используя хеш таблицу, записывайте пару буква - количество вхождений в строку,
что бы потом пройдя в цикле по ней вернуть максимальное значение повторений.*/

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


int main(){
    string str;
    cin>>str;
    unordered_map<char,int> hash;
    for (int i = 0; i < str.size(); i++){
        if (hash.find(str[i])==hash.end()){
            hash.insert({str[i],1});
            continue;
        }
        hash[str[i]]+=1;
    }

    int counter=0;
    for(auto& item : hash)
    {
        counter= max(counter, item.second);
       // cout << item.first << " : " << item.second << endl; 
    }
    cout<<counter<<endl;
    

}
