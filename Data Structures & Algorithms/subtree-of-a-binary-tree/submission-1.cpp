/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p&&!q) return true;
        if(p&&!q||!p&&q) return false;
        bool check = (p->val==q->val);
        return check && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool rt = false, lt = false;
        if(root->right) rt = isSubtree(root->right,subRoot);
        if(root->left) lt = isSubtree(root->left,subRoot);
        return isSameTree(root,subRoot) || rt || lt;
    }
};
