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
    void pathFinder(TreeNode* root, int targetSum,vector<int> sumList,vector<vector<int>> &finalList){
        if(root==NULL) return ;
        int diff=targetSum;
        diff-=root->val;
        sumList.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if (diff==0){
                finalList.push_back(sumList);
                return;
            }
            else return;
        }
        pathFinder(root->left,diff,sumList,finalList);
        pathFinder(root->right,diff,sumList,finalList);
            

       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>sumList;
        // int sum=0;
        vector<vector<int>> finalList;
        pathFinder(root,targetSum,sumList,finalList);
        
        
        return finalList;
    }
};