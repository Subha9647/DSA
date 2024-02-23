# include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node * left;
    Node * right;
};

// FUNCTION FOR PREORDER TRAVERSAL
void preorder(Node * root)
{
    if(root == NULL)
    {
        return ;
    }

    cout << root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}

// FUNCTION FOR INORDER TRAVERSAL
void Inorder(Node * root)
{
    if(root == NULL)
    {
        return;
    }

    Inorder(root->left);
    cout << root -> data << " ";
    Inorder(root->right);
}

// FUNCTION FOR POSTORDER TRAVERSAL
void Postorder(Node * root)
{
    if(root == NULL)
    {
        return;
    }

    Postorder(root -> left);
    Postorder(root->right);
    cout <<root->data<<" ";
}


// Function to Insert Node in a Binary Search Tree
Node *Insert(Node *root, char data)
{
    if (root == NULL)
    {
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data <= root->data)
        root->left = Insert(root->left, data);
    else
        root->right = Insert(root->right, data);
    return root;
}

int main()
{
    /*Code To Test the logic
      Creating an example tree
                       
                M
               / \
              B   Q
             / \   \
            A   C   Z
    */
    Node *root = NULL;
    root = Insert(root, 'M');
    root = Insert(root, 'B');
    root = Insert(root, 'Q');
    root = Insert(root, 'Z');
    root = Insert(root, 'A');
    root = Insert(root, 'C');
    
    // Print Nodes in PreOrder.
    preorder(root);
    cout << endl;

    // Print Nodes in Inorder.
    Inorder(root);
    cout << endl;

    // Prints Nodes in Postorder
    Postorder(root);
    cout << endl;
}