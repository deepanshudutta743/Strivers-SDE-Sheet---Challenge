/****************************************************************

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

*****************************************************************/
#include<bits/stdc++.h>
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    
    //brute force
// Tc:O(M*N)
//Sc: O(1)    
// while(firstHead!=NULL)
// {

// Node* temp=secondHead;
// while(temp!=NULL)
// {
//   if(firstHead==temp)
//   {
//       return firstHead;
//   }

//     temp=temp->next;
// }
// firstHead=firstHead->next;
 
// }

// return NULL;


//Better solution
// Using hashmap
// TcO(M+N) ScO(M)
// unordered_map<Node*,int> mp;

// Node* temp1=firstHead;
// Node* temp2=secondHead;

// while(temp1!=NULL)
// {

// mp[temp1]=temp1->data;

// temp1=temp1->next;
// }
//    while(temp2!=NULL)
//    {
//    if(mp.find(temp2)!=mp.end())
//     {
//     return temp2;
//     }
//    temp2=temp2->next;
//     }

// return NULL;

// optimized length solution
// Tc O(M)+O(N)+O(M-N)
		// int n = 0;
		// int m = 0;
		// Node* ptr1 = firstHead;
		// Node* ptr2 = secondHead;
		// while(ptr1 != NULL){
		// 	n++;
		// 	ptr1 = ptr1 -> next;
		// }
		// while(ptr2 != NULL){
		// 	m++;
		// 	ptr2 = ptr2 -> next;
		// }
		// int t = abs(n - m);
		// if(n > m){
		// 	while(t){
		// 		firstHead = firstHead -> next;
		// 		t--;
		// 	}
		// }
		// else{
		// 	while(t){
		// 		secondHead = secondHead -> next;
		// 		t--;
		// 	}
		// }
		// while(firstHead != NULL and secondHead != NULL){
		// 	if(firstHead == secondHead){
		// 		return firstHead;
		// 	}
		// 	firstHead = firstHead -> next;
		// 	secondHead = secondHead -> next;
		// }
		// return NULL;


// most optimized and concize approach
		// Node *ptr1 = firstHead;
		// Node *ptr2 = secondHead;
		// while(ptr1 != ptr2){
		// 	if(ptr1 == NULL){
		// 		ptr1 = secondHead;
		// 	}
		// 	else{
		// 		ptr1 = ptr1 -> next;
		// 	}
		// 	if(ptr2 == NULL){
		// 		ptr2 = firstHead;
		// 	}
		// 	else{
		// 		ptr2 = ptr2 -> next;
		// 	}
		// }
		// return ptr1;


    // same code with little bit consize
    Node *ptr1 = firstHead;
	Node *ptr2 = secondHead;

    while(ptr1!=ptr2)
    {

      ptr1=ptr1==NULL? secondHead : ptr1->next;
      ptr2=ptr2==NULL? firstHead : ptr2->next;
    }
    return ptr1;


}
