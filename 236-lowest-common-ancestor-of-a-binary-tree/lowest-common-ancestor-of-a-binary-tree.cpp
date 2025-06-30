class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return NULL;
        }

        if (root == p || root == q) {
            return root;
        }

        TreeNode* a = lowestCommonAncestor(root->left, p, q);
        TreeNode* b = lowestCommonAncestor(root->right, p, q);

        if (a != NULL && b != NULL) {
            return root;
        }

        return (a != NULL) ? a : b;
    }
};
