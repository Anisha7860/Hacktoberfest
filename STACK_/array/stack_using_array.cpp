
//STACK USING ARRAY:

#include <iostream>
using namespace std;

int stack[100], n=100, top=-1;

void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}

void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}

void display() {
   if(top>=0) {
      cout<<"Stack elements are:"<<endl;
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty"<<endl;
}

int main() {
   int ch, val;
   do {
      cout<<endl;
      cout<<"------------------------------"<<endl;
      cout<<"|    Enter choice:           |"<<endl;
      cout<<"|    1) Push in stack        |"<<endl;
      cout<<"|    2) Pop from stack       |"<<endl;
      cout<<"|    3) Display stack        |"<<endl;
      cout<<"|    4) Exit                 |"<<endl;
      cout<<"------------------------------"<<endl;
      cout<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<endl;
            cout<<"  ->  Enter value to be pushed: "<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<":THANK YOU:"<<endl;
            break;
         }
         default: {
            cout<<" :INVALID CHOICE: "<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}