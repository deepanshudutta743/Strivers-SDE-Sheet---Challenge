class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //brute force
        // Easy
        ListNode* p1=list1;
        ListNode* p2=list2;
        
        ListNode* dummy=new ListNode(-1);
        ListNode* p3=dummy;

        while(p1!=NULL and p2!=NULL)
        {
            if(p1->val<=p2->val)
            {
                p3->next=p1;
                p1=p1->next;
            }
            else
            {
                p3->next=p2;
                p2=p2->next;
            }

            p3=p3->next;

        }
        while(p1!=NULL)
        {
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;

        }
        while(p2!=NULL)
        {
       
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
        
       return dummy->next;



        // optimal opprach
        // if(list1==NULL) return list2;
        // if(list2==NULL) return list1;

        // if(list1->val>list2->val)
        // swap(list1,list2);

        // ListNode* res=list1;
        // while(list1!=NULL and list2!=NULL)
        // {
        //     ListNode* temp=NULL;
        //     while(list1!=NULL and list1->val<=list2->val)
        //     {
        //         temp=list1;
        //         list1=list1->next;
        //     }
        //     temp->next=list2;
        //     swap(list1,list2);

        // }
        
        // return res;
        
        
    }
};