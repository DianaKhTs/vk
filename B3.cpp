/*Задача к уроку хеш-таблицы: На вход подается две строки a и b
Используя хеш таблицу, попытайтесь определить, является ли строка b анаграммой к строке a.
Анаграмма-это слово или фраза, образованные путем перестановки букв другого слова или фразы,
как правило, используя все исходные буквы ровно один раз
*/


#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


int main(){
    string a, b;
    cin>>a>>b;
    unordered_map<char,int> hash;
    if (a.size()!=b.size()){
        cout<<"false"<<endl;
        return 0;
    }

    for (int i = 0; i < a.size(); i++){
        if (hash.find(a[i])==hash.end()){
            hash.insert({a[i],1});
        }
        else{
            hash[a[i]]+=1;
        }

        if (hash.find(b[i])==hash.end()){
            hash.insert({b[i],-1});
            continue;
        }
        else{
            hash[b[i]]-=1;
        }
        
    }
    for(auto& item : hash)
    {
       if (item.second!=0){
            cout<<"false";
            return 0;
       }
        //cout << item.first << " : " << item.second << endl; 
    }
    cout <<"true"<<endl;
    return 0;

}