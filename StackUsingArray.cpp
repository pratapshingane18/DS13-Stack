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

*/