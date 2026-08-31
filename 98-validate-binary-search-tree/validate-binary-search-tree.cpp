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
    bool checkBST(TreeNode* root){
        vector<int>InOrderList;
        InOrderTraversal(root,InOrderList);
        bool isBST=true;
        int prev=InOrderList[0];
        for(int i=1;i<InOrderList.size();i++){
            if(InOrderList[i]<=prev) isBST=false;
            prev=InOrderList[i];
        }
        return isBST;

    }
    void InOrderTraversal(TreeNode* root,vector<int>&InOrderList){
        if(root==NULL)return;
        InOrderTraversal(root->left,InOrderList);
        InOrderList.push_back(root->val);
        InOrderTraversal(root->right,InOrderList);
    }
    bool isValidBST(TreeNode* root) {
        //  if(root==NULL)return true;
         return checkBST(root);
    }
};