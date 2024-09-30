//stack operation
//1)Push
//2)pop
//3)Display
//4)Is Empty
//5)IsFull
#include<iostream>
using namespace std;

#define MAX 10
int ar[MAX];
int top=-1;

void push(int n)
{
    if (top==MAX)
    {
        cout<<"Stack Overflow";
        return;
    }
    else{
        ar[top]=n;
        top++;
    }
    

    //cout<<top<<endl;

}

void pop()
{
    if (top==-1){
        cout<<"Stack Underflow";
        
    }
    else{
        int n;
        n=ar[top];
        top=top-1;
    }
    
}


void display()
{
    cout<<"Stack is:"<<endl;
    int i=top;
    while(i>=0)
    {
        cout<<ar[i-1]<<"\n";
        i--;
    }
}


void IsEmpty()
{
    if (top==-1){
        cout<<"Stack is Empty";
        
    }
    else{
        cout<<"Stack is not Empty";
    }
}


void IsFull()
{
    if (top==MAX)
    {
        cout<<"Stack is Full";
    }
    else{
        cout<<"Stack is not full";
    }
}



int main()
{
    
    int i,n;
    
    int choice;

    while (true)
    {
        cout<<"1) To Push an element"<<endl;
        cout<<"2) To Pop an element"<<endl;
        cout<<"3) To Display Stack"<<endl;
        cout<<"4) To Check Stack is Empty"<<endl;
        cout<<"5) To Check Stack is Full"<<endl;
        cout<<"0)Exit"<<endl;
        cout<<"Enter your Choice:";
        cin>>choice;

        if (choice==1)
        {
            cout<<"Enter element to be pushed:";
            cin>>n;
            push(n);
        }

        else if (choice==2)
        {
            
            pop();
        }

        else if (choice==3)
        {
            
            display();
        }

        else if (choice==4)
        {
            
            IsEmpty();
        }
        else if (choice==5)
        {
            
            IsFull();
        }

        else if(choice==0)
        {
            break;
        }

        else
        {
            cout<<"Invalid Input";
        }
        cout<<"\n \n";
    }

    return 0;
}