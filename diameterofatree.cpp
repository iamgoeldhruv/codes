class Solution {
  public:
  int height(struct Node * node)
  {
      if(node==NULL)
      {
          return 0;
      }
      int h1=height(node->left);
      int h2=height(node->right);
      int ans=max(h1,h2)+1;
      return ans;
      
  }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root==NULL)
        {
            return 0;
        }
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left)+1+height(root->right);
        int ans=max(op1,max(op2,op3));
        return ans;
    }
};