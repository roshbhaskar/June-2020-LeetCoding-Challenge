
int sumnum(struct TreeNode* root,int sum)
{
    if(root==NULL)
    {
        return 0;
    }
    sum = sum*10 + root->val;
    if(root->left == NULL && root->right == NULL)
    {
        return sum;
    }
    return sumnum(root->left,sum)+sumnum(root->right,sum);
}

int sumNumbers(struct TreeNode* root){
    return sumnum(root,0);

}