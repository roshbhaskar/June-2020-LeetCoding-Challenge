count = 0;
void inorder(struct TreeNode* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    count = count +1;
    inorder(root->right);
}
int countNodes(struct TreeNode* root){
    
    count = 0;
    inorder(root);
    return count;

}