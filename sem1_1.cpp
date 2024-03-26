#include <iostream>
#include <stdio.h>

using namespace std;

struct ForwardList
{
    int _value;
    ForwardList* _next;
};


void ReverseList(ForwardList* list){
   ForwardList* list_elem = (ForwardList*)malloc(sizeof(ForwardList));
   ForwardList* prev = (ForwardList*)malloc(sizeof(ForwardList));
   ForwardList* cur = (ForwardList*)malloc(sizeof(ForwardList));
   ForwardList* tmp = (ForwardList*)malloc(sizeof(ForwardList));
   prev = nullptr; 
   cur = list;
   list_elem = list;

   while(cur!=nullptr){
        tmp = cur->_next;
        cur->_next = prev;
        prev = cur;
        cur = tmp;
   }
   list = prev;

   for (int i = 0; i<10;i++)
    {
        
        cout << list_elem->_value << " ";

        list_elem =  list_elem->_next;
    }



}


int main()
{
    srand(time(0));
    ForwardList* list = (ForwardList*)malloc(sizeof(ForwardList));
   
    list->_value = 0;
    list->_next = nullptr;

    for (int i = 0; i<10;i++)
    {
        ForwardList* list_elem = (ForwardList*)malloc(sizeof(ForwardList));
        list_elem->_value=rand()%5;
        cout << list_elem->_value << " ";
        list_elem->_next =  list;
        list = list_elem;
    }
   
    cout << endl;

   // ReverseList(list);

    free(list);
    return 0;

}