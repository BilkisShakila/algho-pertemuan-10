#include <iostream>
using namespace std;

class Node // membuat node 
{
public : //akses modifier
    int data; //data yang disimpan 
    Node *next; //pointer ke node yang berikutnya
    //contructor

    Node() //node contructor
    {
        next = NULL; // inisialisasi next dengan null
    }
}; 

class stack // membuat class stack
{
private : // akses modifier
    Node *top; // pointer ke node teratas

public : // akses modifier
    stack() // contructor stack
    { 

        top = NULL; // inisialisasi top dengan null
    }

    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push Value: " << value << endl;
        return value;
    }

    void pop()
    {
        if (isEmpaty())
        {
            cout << "Stack is Empaty" << endl;
        }

        cout << "Popped Value: " << top->data << endl;
        top = top->next;
    }

    
}