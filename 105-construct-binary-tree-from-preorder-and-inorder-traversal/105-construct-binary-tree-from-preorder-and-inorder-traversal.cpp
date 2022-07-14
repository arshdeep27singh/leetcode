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
    void createMapping(vector<int> in, map<int, int> &nodetoIndex, int n){
        
        //mapping to know the value and location of each element
        for(int i=0; i<n; i++){
            // if(in[i] == element)
            //     return i;
            nodetoIndex[in[i]] = i;
        }
        // return -1;
    }
    TreeNode * solve(vector<int> in, vector<int> pre, int &index, int inorderStart, int inorderEnd, int n, map<int,int> &nodetoIndex){
        //base case
        if(index >= n || inorderStart > inorderEnd) return NULL;
        
        //create a root node for element
        int element = pre[index++];
        TreeNode* root= new TreeNode(element);
        
        //find the position of that element
        int position = nodetoIndex[element];
        // int position  = findPosition(in, element, n);
        
        //recursive calls
        root->left = solve(in, pre, index, inorderStart, position-1, n, nodetoIndex);
        root->right = solve(in, pre, index, position+1, inorderEnd, n, nodetoIndex);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int preOrderIndex = 0;
        map<int, int> nodetoIndex;
        createMapping(inorder, nodetoIndex, n);
        TreeNode * ans = solve(inorder, preorder, preOrderIndex, 0, n-1, n, nodetoIndex);
        return ans;
    }
};