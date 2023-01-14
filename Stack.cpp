#include<iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void create(struct Stack *st){
    cout<<"Enter Size"<<endl;
    cin>>st->size;

    st->top = -1;
    st->s = new int[st->size];

}

void display(struct Stack st){
    int i =0;
    for( i = st.top; i >= 0; i--){
        cout<<st.s[i]<<" ";
    }

    cout<<endl;
}

void push(struct Stack *st, int x){
    // Check if stack is full

    if(st->top == st->size -1){
        cout<<"Stack Overflow"<<endl;
    }

    else{
        st->top++;
        st->s[st->top] =x;
    }
}


// 2) pop();

// - Take out the value;
// - decrement the top pointer;

// time - constant O(1);

int pop(Stack *st){

    int x =-1; // if nothing is there to delete then return -1;
    if(st->top == -1){
        cout<<"Stack Underflow"<<endl;

    }
    else{
        x = st->s[st->top];
        st->top--;

    }
    return x;

}


// 3) peek()
// Constant time;

// Position                 |      Index
// top position             |    Index of any inserted or pushed first 
// is first but index       |     in the stack is 0 then 1 then ..
//  is last                 |      but its position is last


// Pos = Top -Index + 1;              Index = Top - Pos +1;

int peek(Stack st, int pos){
    int x = -1;
    if((st.top - pos +1 ) < 0){
        cout<<"Invalid Position"<<endl;
    }

    else{
        x = st.s[st.top - pos +1];
    }

    return x;
}




// 4) Stack top
// time - constant

int stackTop(Stack st){
    if(st.top == -1){
        return -1;
    }

    else{
        return st.s[st.top];
    }
}

// 5) isEmpty()
// time - constant
int isEmpty(Stack st){
    if(st.top == -1){
        return 1;
    }
    else{
        return 0;
    }
}


// 6) isFull()
// time constant
int isFull(Stack st){
    if(st.top == st.size -1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    struct Stack st;
    create(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    
    display(st);
    return 0;
}