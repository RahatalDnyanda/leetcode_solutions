/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> mpp; //to mark visited node
        ListNode* cur = head;
        while(cur != NULL){
            if(mpp.find(cur) != mpp.end()){
                return cur;
            }
            mpp[cur] = 1;
            cur = cur->next;
        }

        return NULL;
    }
};