/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
// brute force
//  Node* temp=head;
//  int count=0;
//  while(temp!=NULL)
//  {
//      count++;
//      temp=temp->next;
//  }
// temp=head;

//         int p=count/2;
//      while(p--)
//      {
//          temp=temp->next;
//      }


// return temp;


Node* slow=head;
Node* fast=head;

while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
}
return slow;

}

