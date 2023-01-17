/*



*/

#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    struct Node *next;
}top=NULL;


void push(int x){
    struct Node *t;
    t = new Node;
    
    if(t == NULL){
        cout<<"Stack/Heap is FULL"<<endl;
    }

    else{
        t->data =x;
        t->next = top;
        top =t;
    }
}
int main(){


    return 0;
}