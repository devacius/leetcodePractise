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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node1=head;
        ListNode* node2=head;
        int count=0;
        while(node1->next){
            count++;
            node1=node1->next;
        }
        int a=count-n;
         if(a<0){
            head=head->next ;
             return head;
         }
        
        while(a--){
            node2=node2->next;
        }
        node2->next=node2->next->next;
        return head;
    }
};