
#include<iostream>

 struct Node{
    int d;
    Node *p;
};

Node * first(int d);
void push(Node **top, int d); 
int pop(Node **top);
//======================
int main(){
    Node *top = first(1);
    for (int i = 2; i < 6; i++)
        push(&top, i); 
    while (top)
        std::cout << pop(&top)<<' '; 
    return 0;
}
//
// Начальное формирование стека 
Node * first(int d){
    Node *pv = new Node; 
    pv->d = d;
    pv->p = 0;
   
    return pv;
} //
// Занесение в стек
void push(Node **top, int d){
    Node *pv = new Node; 
    pv->d = d;
    pv->p = *top;
    *top = pv;
}
//
// Выборка из стека 
int pop(Node **top){
    int temp = (*top)->d; 
    Node *pv = *top;
    *top = (*top)->p; 
    delete pv;
    return temp;
}