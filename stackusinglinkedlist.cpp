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

    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empaty." << endl;
        }
        else
        {
            Node *current = top;
            while (current !=NULL)
            {
                cout << current->data << " " <<endl;
                current = current->next;
            }
            cout << endl;
        }
        
}
    bool isEmpaty()
    {
        return top == NULL;
    }
};

int main()
{

    stack stact;

    int choice = 0;
    int value;

    while (choice !=5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push : ";
            cin >> value;
            stact.push(value);
            break;
       
}