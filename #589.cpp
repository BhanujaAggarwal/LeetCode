/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        stack<Node*> s;
        s.push(root);
        Node* temp;
        while(!s.empty()){
            temp = s.top();
            s.pop();
            ans.push_back(temp->val);
            vector<Node*> ::iterator it = temp->children.end();
            while(it!=temp->children.begin()){
                it--;
                s.push(*it);
            } 
        }
        return ans;
    }
};