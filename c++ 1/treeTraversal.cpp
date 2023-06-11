#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
};

vector<vector<int>> res;
int depthCheck;
int rootValcheck;

void buildOrder(TreeNode* root, int depth)
{
    if(root == NULL)
        return;
    if(res.size() == depth)
        res.push_back(vector<int>());
    
    res[depth].push_back(root->data);
    buildOrder(root->left, depth+1);
    buildOrder(root->right, depth+1);
}

void levelOrder(TreeNode* root)
{
    buildOrder(root, 0);
    
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}

TreeNode* newNode(int val)
{
    TreeNode* temp = new TreeNode;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

int main()
{
    cout<<"Hello World" << endl;
    
    TreeNode* root = newNode(3);
    root->left = newNode(6);
    root->right = newNode(35);
    root->right->left = newNode(43);
    root->right->right = newNode(19);
    root->left->right = newNode(12);
    root->left->left = newNode(39);
    root->left->left->right = newNode(92);
    root->right->left->left = newNode(77);

    levelOrder(root);
    
    return 0;
}