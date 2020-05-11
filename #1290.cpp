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
    int getDecimalValue(ListNode* head) {
        int ans=0;
        vector<int> v{head->val};
        ListNode *temp = head;
        while(temp->next){
            temp = temp->next;
            v.push_back(temp->val);
        }
        for(int i=0;i<v.size();i++){
            if(v[i]){
                ans+= pow(2,v.size()-1-i);
            }
        }
        return ans;
    }
};