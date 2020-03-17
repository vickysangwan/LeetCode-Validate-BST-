//Using In-Order traversal
class Solution {
public:
    bool isValidBST(TreeNode* root)
    {
        int flag=0;
        if(root==NULL)
        {
            return true;
        }
        vector<int> bst;
        inorder(root,bst);
        for(int i=0;i<bst.size()-1;i++)
        {
            if(bst[i]>=bst[i+1])
            {
                flag++;
            }
        }
        if(flag==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void inorder(TreeNode* root,vector<int> &bst)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,bst);
        bst.push_back(root->val);
        inorder(root->right,bst);
    }

};
