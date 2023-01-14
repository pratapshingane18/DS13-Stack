/*

Requirement:

1) Array
2) var - size of an array.
3) var - to point on top of the array;

Element is always inserted from back end only;

struct Stack{
    int size;
    int top;
    int *s; // pointer to an array.
}


*** Important ***
Condition for stack to be Empty:
top == -1;
Condition for stack to be full:
top == size -1;
 


int main(){
    struct Stack st;
    cout<<"Enter Stack Size"<<endl;
    cin>>st.size;
    st.s = new int[st.size];
    st.top = -1;
}




Operations on Stack:
1) push(x);

// time- constant O(1)

- Increment top 
- insert value at s[top];

void push(Stack *st, int x){
    // Check si stack is full

    if(st->top == st->size -1){
        cout<<"Stack Overflow"<<endl;
    }

    else{
        st->top++;
        st->s[st->top] =x;
    }
}


2) pop();

- Take out the value;
- decrement the top pointer;

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

3) peek()
// Constant time;

Position                 |      Index
top position             |    Index of any inserted or pushed first 
is first but index       |     in the stack is 0 then 1 then ..
 is last                 |      but its position is last


Pos = Top -Index + 1;              Index = Top - Pos +1;

int peek(Stack st, int pos){
    int x = -1;
    if((top - pos +1 ) < 0){
        cout<<"Invalid Position"<<endl;
    }

    else{
        x = st.s[st.(top - pos +1)];
    }

    return x;
}


4) Stack top
// time - constant

void stackTop(Stack st){
    if(st.top == -1){
        return -1;
    }

    else{
        return st.s[st.top];
    }
}

5) isEmpty()
// time - constant
int isEmpty(Stack st){
    if(st.top == -1){
        return 1;
    }
    else{
        return 0;
    }
}


6) isFull()
// time constant
int isFull(Stack st){
    if(st.top == st.size -1){
        return 1;
    }
    else{
        return 0;
    }
}

*/


