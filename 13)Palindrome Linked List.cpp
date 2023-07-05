#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

// reverselist function
LinkedListNode<int> *reverselist(LinkedListNode<int> *head)
{
    LinkedListNode<int>* pre=NULL;
    LinkedListNode<int>* next=NULL;

    while(head!=NULL)
    {
        next=head->next;
        head->next=pre;
        pre=head;
        head=next;
    }
    return pre;
}


bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    // Not Working
    // string s="";

    // LinkedListNode<int> *temp=head;

    // while(temp!=NULL)
    // {

    //     s+=temp->data;
    //     temp=temp->next;
    // }
    // // string palindrom
    // if(s.length()==1) return true;
    // int left=0;
    // int right=s.length()-1;

    // while(left<right)
    // {
    //     if(s[left]!=s[right])
    //     return false;
    //     left++;
    //     right--;
    // }
    // return true;

   // Brute force
// LinkedListNode<int> *temp=head;
// vector<int> arr;

// while(temp!=NULL)
// {

//     arr.push_back(temp->data);
//     temp=temp->next;
// }

// int left=0;
// int right=arr.size()-1;

// while(left<=right)
// {

// if(arr[left]!=arr[right]) return false;
//     left++;
//     right--;
// }

// return true;

// optimized approach
// First fin dthe middle of the linklist


// if link list only consist of single node then return true

if(head==NULL || head->next==NULL)
{
    return true;
}
// find the middle of linklist
LinkedListNode<int> *slow=head,*fast=head;

while(fast->next!=NULL and fast->next->next!=NULL)
{
 
 slow=slow->next;
 fast=fast->next->next;
}

// then find the reverse of after the middle linklist
slow->next=reverselist(slow->next);
slow=slow->next;

while(slow!=NULL)
{
    if(head->data!=slow->data) return false;
    head=head->next;
    slow=slow->next;
}
return true;


}