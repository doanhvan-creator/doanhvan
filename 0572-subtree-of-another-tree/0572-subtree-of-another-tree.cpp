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
    // kiểm tra 2 cây có giống nhau không
    bool sameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }

        if (p == nullptr || q == nullptr) {
            return false;
        }

        if (p->val != q->val) {
            return false;
        }

        return sameTree(p->left, q->left) &&
               sameTree(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr) {
            return false;
        }

        // nếu cây hiện tại giống subRoot
        if (sameTree(root, subRoot)) {
            return true;
        }

        // kiểm tra tiếp cây con trái hoặc phải
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};