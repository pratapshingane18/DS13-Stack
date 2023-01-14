/*
        ***** STACK *****

        LIFO- Last In First Out
        The last element which was inserted is deleted/pop

        Real Life:
        1)
         ___________________________
        |car1 -> car2 ->car3 ...carn
        |___________________________

        Car n will get out first then car n-1 then ... car2 and lasy car1.

        2) Given a Can and balls Indside it to get the ball
         at the bottom we first have to take out all the balls above it.

        If we want to Reverse Something at it into a Stack and we pop it we get it in reverse order

        Recurssion uses Stack;

        Recurssion can be converted intro Iteration and also Iteration can be converted intro Recurrsion;

        When we convert Recurrsion into Iteration we have to use Stack in Iteration;
        known as programmers stack;


        ADT of Stack:
        contains:

        Data Representation and Operations of Stack

        ADT STACK:

        Data:
        1.Space for storing Elements;
        2.Top pointer;

        Operations:
        1. push(x);
        2. pop();
        3. Peek(index);
        4. stackTop();
        5. isEmpty();
        6. isFull();


        Consider Given Stack

            |       |4
            |   25  |3 <- Top()
            |   20  |2
            |   15  |1
            |   09  |0
            |_______|


        1) push(30);

            |   30  |4 <- Top()
            |   25  |3 
            |   20  |2
            |   15  |1
            |   09  |0
            |_______|     


        2) pop()
            |       |4
            |   25  |3 <- Top()
            |   20  |2
            |   15  |1
            |   09  |0
            |_______|


        3) Peek - Knowing a value at a particular Index; - for Deletion

        4) StackTop - to know the topmost value of the stack    

        5) is Empty()- to check id stack is empty

        - No    

        6) isFull() - to check is stack is full

        - No


        Implementation of Stack:

        - Array Impementation
        - Linked List Implementation
        

*/

#include<iostream>
using namespace std;

int main(){

    cout<<"Stack"<<endl;
    return 0;
}