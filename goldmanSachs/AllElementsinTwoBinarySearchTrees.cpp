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
void printInorder(vector<int> &vec , TreeNode* node)
{
    if (node == NULL)
        return;
 
    printInorder(vec , node->left);
 
vec.push_back(node->val); 
    printInorder(vec , node->right);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>r1,r2,result;
        printInorder(r1 , root1);
        printInorder(r2 , root2);
        int i=0,j=0;
        while(i<r1.size() &&j<r2.size())
        {
            if(r1[i]<=r2[j])
            {
result.push_back(r1[i++]);
            }
            else 
            {
                result.push_back(r2[j++]);
            }
        }
        while(i<r1.size())
        {
result.push_back(r1[i++]);
        }
         while(j<r2.size())
        {
            result.push_back(r2[j++]);

        }
        return result;
    }
};