/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tem=new ListNode();
        ListNode* b=tem;
        while(list1&&list2){
            if(list1->val<list2->val){
                ListNode* c=new ListNode(list1->val);
                 b->next=c;
             b=b->next;
                list1=list1->next;
            }
            else {
                ListNode* c=new ListNode(list2->val);
                 b->next=c;
             b=b->next;
             list2=list2->next;
            }
            // else{
            //     ListNode* c=new ListNode(list1->val);
            //     ListNode* d=new ListNode(list2->val);
            //     b->next=c;
            //     b=b->next;
            //     b->next=d;
            //     b=b->next;
            // }
            
            
        }
        while(list1){
             ListNode* c=new ListNode(list1->val);
             b->next=c;
             b=b->next;
             list1=list1->next;
        }
        while(list2){
             ListNode* c=new ListNode(list2->val);
             b->next=c;
             b=b->next;
             list2=list2->next;
        }
        return tem->next;
    }
};