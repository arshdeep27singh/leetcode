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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>paths;
        vector<int> path;
        findPath(root, targetSum, path, paths);
        return paths;
    }
private:
    void findPath(TreeNode* node, int targetSum, vector<int> &path, vector<vector<int>> &paths){
        if(!node) return;
        path.push_back(node->val);
        
        if(!node->left && !node->right && node->val == targetSum)
            paths.push_back(path);
        
        findPath(node->left, targetSum - node->val, path, paths);
        findPath(node->right, targetSum - node->val, path, paths);
        path.pop_back();
    }
};