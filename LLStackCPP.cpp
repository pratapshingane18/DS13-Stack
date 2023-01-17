#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Stack
{
    private:
    Node *top;

    public:

    Stack(){
        top = NULL;
    }

    void push(int x);
    int pop();
    void Display();




};


void Stack::push(int x){
    Node *t = new Node;
    if(t == NULL){
        cout<<"STack is FULL"<<endl;


    }

    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop()
{
    int x =-1;
    if(top == NULL){
        cout<<"Stack is Empty"<<endl;

    }
    else{
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;

    }

    return x;
}

int main(){
    return 0;
}