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

