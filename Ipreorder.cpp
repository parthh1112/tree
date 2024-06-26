#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        (*this).val = val;
        (*this).left = nullptr;
        (*this).right = nullptr;
    }
};
void preorder(TreeNode *&root)
{
    stack<TreeNode *> s;
    s.push(root);
    while (!s.empty())
    {
        TreeNode *pp = s.top();
        cout << pp->val << " ";
        s.pop();
        if (pp->right)
            s.push(pp->right);
        if (pp->left)
            s.push(pp->left);
    }
}
int main()
{
    TreeNode *root = new TreeNode(0);
    root->left = new TreeNode(1);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    preorder(root);
    return 0;
}