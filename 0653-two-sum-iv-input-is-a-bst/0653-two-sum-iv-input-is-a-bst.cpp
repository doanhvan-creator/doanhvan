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
    unordered_set<int> s;

    bool dfs(TreeNode* root, int k) {
        if (root == nullptr) {
            return false;
        }

        // kiểm tra đã tồn tại số cần tìm chưa
        if (s.count(k - root->val)) {
            return true;
        }

        // lưu giá trị hiện tại
        s.insert(root->val);

        // duyệt cây trái và phải
        return dfs(root->left, k) || dfs(root->right, k);
    }

    bool findTarget(TreeNode* root, int k) {
        return dfs(root, k);
    }
};