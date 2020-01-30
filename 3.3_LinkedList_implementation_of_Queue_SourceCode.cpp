/* 3.3 Sourcecode - Linked list implementation of Queue*/

/*Queue - Linked List implementation*/

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* frnt=NULL;
Node* rear=NULL;

//Enqueue ftn
void Enqueue(int x){
    Node* temp=new Node;
    temp->data=x;
    temp->next=NULL;
    if(frnt==NULL && rear==NULL){ //if empty
        frnt=rear=temp;  /*making the node as first element*/
    }
    else{
        rear->next=temp; //since in Q, we add in end
        rear=temp;
    }
}

//Dequeue ftn
void Dequeue(){
    Node* temp=frnt; //since in Q, we delete from front
    if(frnt==NULL) return; //empty list
    if(frnt==rear){ //only one element
        frnt=rear=NULL; //make it empty
    }
    else{
        frnt=frnt->next;
        delete temp; //important..!!!dealloc temp
    }
}

void Print(){
    Node* temp=frnt;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Print(); // 1 2 3
    Dequeue();
    Print(); //2 3
    return 0;
}

