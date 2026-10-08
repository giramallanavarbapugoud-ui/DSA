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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev=NULL;
        ListNode * bb=head;
        while(bb!=NULL){
            int a=bb->val;
            if(a==val){
                 if (prev == NULL) {
                    head = bb->next;
                }
                else{
                    prev->next=bb->next;
                }
                
                

            }
            else{
                prev=bb;
            }
            bb=bb->next;
        }
        return head;
    }
};