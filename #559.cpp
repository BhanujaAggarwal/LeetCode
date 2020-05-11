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
    int maxDepth(Node* root) {
        if(!root) return 0;
        vector<Node*>:: iterator it = root->children.begin();
        int maxi=0;
        while(it!=root->children.end()){
            maxi = max(maxi,maxDepth(*it));
            it++;
        }
        return maxi+1;
    }
};