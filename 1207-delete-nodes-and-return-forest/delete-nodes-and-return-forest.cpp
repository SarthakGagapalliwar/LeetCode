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
    TreeNode* deleteHelper(TreeNode* root, unordered_set<int>& st, vector<TreeNode*>& result) {
        if (root == nullptr) {
            return nullptr;
        }

        root->left = deleteHelper(root->left, st, result);
        root->right = deleteHelper(root->right, st, result);

        if (st.find(root->val) != st.end()) {
            if (root->left != nullptr) {
                result.push_back(root->left);
            }
            if (root->right != nullptr) {
                result.push_back(root->right);
            }
            return nullptr; 
        }
        return root;
    }

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> st(to_delete.begin(), to_delete.end());
        vector<TreeNode*> result;

        root = deleteHelper(root, st, result);

        if (root != nullptr && st.find(root->val) == st.end()) {
            result.push_back(root);
        }

        return result;
    }
};
