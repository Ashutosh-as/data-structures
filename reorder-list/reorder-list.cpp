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
    ListNode* reverse(ListNode* head){
        ListNode* prev;
        ListNode*after;
        prev=NULL;
        while(head){
          after= head->next;
            head->next=prev;
            prev=head;
            head=after;
            
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
           while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* end= reverse(slow->next);
        slow->next=NULL;
        ListNode* after1;
        ListNode* after2;
        while(end){
            after1=head->next;
            after2=end->next;
            head->next=end;
            end->next=after1;
            head=after1;
            end=after2;
            
        }
        
    }
};