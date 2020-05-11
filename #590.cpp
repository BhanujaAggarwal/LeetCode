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
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        stack<Node*> s1,s2;
        s1.push(root);
        Node* temp;
        while(!s1.empty()){
            temp = s1.top();
            s1.pop();
            s2.push(temp);
            vector<Node*>::iterator it = temp->children.begin();
            while(it!=temp->children.end()){
                s1.push(*it);
                it++;
            }
        }
        while(!s2.empty()){
            ans.push_back((s2.top())->val);
            s2.pop();
        }
        return ans;
    }
};