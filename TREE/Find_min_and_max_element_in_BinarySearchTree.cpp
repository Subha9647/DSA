 #include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode * left;
    BstNode * right;
};

BstNode * GetNewNode(int data)
{
    BstNode * newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

BstNode * Insert(BstNode * root, int data)
{
    if(root == NULL)
    {
        root = GetNewNode(data);
    }
    else if(root->data >= data)
    {
        root->left = Insert(root->left,data);
    }
    else
    {
        root->right = Insert(root->right,data);
    }

    return root;
}

int findMaxElement(BstNode * root)
{
    if(root == NULL)
    {
        cout << "Error, Tree is Empty";
        return -1;
    }

    BstNode * current = root;
    while(current->right != NULL)
    {
        current = current -> right;
    }

    return current->data;

}

int findMinElement(BstNode * root)
{
    if(root == NULL)
    {
        cout << "Error , Tree is empty" << endl;
        return -1;
    }

    BstNode * current = root;
    while(current->left != NULL)
    {
        current = current->left;
    }

    return current-> data;
}

int main ()
{
    BstNode * root = NULL;

    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);

    int max = findMaxElement(root);
    int min = findMinElement(root);

    cout << "The max element of the tree is "<< max << endl;
    cout <<"The min element of the tree is " << min << endl;


    return 0;

}