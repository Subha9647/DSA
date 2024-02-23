#include <iostream>
using namespace std;
// Definition of Node for Binary search tree
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

// Function to create a new Node in heap
BstNode *GetNewNode(int data)
{
    BstNode *newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// To insert data in BST, returns address of root node
BstNode *Insert(BstNode *root, int data)
{
    if (root == NULL)
    { // empty tree
        root = GetNewNode(data);
    }
    // if data to be inserted is lesser, insert in left subtree.
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    // else, insert in right subtree.
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}
// To search an element in BST, returns true if element is found
bool Search(BstNode *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == data)
    {
        return true;
    }
    else if (data <= root->data)
    {
        return Search(root->left, data);
    }
    else
    {
        return Search(root->right, data);
    }
}
int main()
{
    BstNode *root = NULL; // Creating an empty tree
    /*Code to test the logic*/
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    // Ask user to enter a number.
    int number;
    cout << "Enter number be searched\n";
    cin >> number;
    // If number is found, print "FOUND"
    if (Search(root, number) == true)
        cout << "Found\n";
    else
        cout << "Not Found\n";
}

// #include<bits/stdc++.h>
// using namespace std;

// struct BstNode
// {
//     int data;
//     BstNode * left;
//     BstNode * right;
// };

// // FUNCTION TO CREATE A NEW NODE IN HEAP
// BstNode * GetNewNode(int data)
// {
//     BstNode * newNode = new BstNode();
//     newNode -> data = data;
//     newNode ->left = NULL;
//     newNode -> right = NULL;

//     return newNode;
// }

// // FUNCTION TO INSERT DATA IN BST, RETURNS ADDRESS OF ROOT NODE
// BstNode * Insert(BstNode*root,int data)
// {
//     if(root == NULL)  // empty tree
//     {
//         root = GetNewNode(data);
//     }
//     // IF DATA TO BE INSERTED IS LESSER , INSERT IN LEFT SUBTREE
//     else if(data <= root->data)
//     {
//         root->left = Insert(root->left,data);
//     }
//     // ELSE INSERT IN RIGHT SUBTREE
//     {
//         root->right = Insert(root->right,data);
//     }

//     return root;

// }

// // TO SEARCH AN ELEMENT IN BST , RETURNS TRUE IF ELEMENT IS FOUND
// bool search(BstNode * root, int data)
// {
//     if(root == NULL)
//     {
//         return false;
//     }
//     else if(root->data == data)
//     {
//         return true;
//     }
//     else if(root->data <= data)
//     {
//         return search(root->left,data);
//     }
//     else
//     {
//         return search(root->right,data);
//     }
// }

// int main()
// {
//     BstNode * root = NULL; // creating an empty tree

//     root = Insert(root,15);
//     root = Insert(root,10);
//     root = Insert(root,20);
//     root = Insert(root,25);
//     root = Insert(root,8);
//     root = Insert(root,12);

//     // ASK YOUR USER TO ENTER A NUMBER

//     int number;
//     cout << "Enter the Number be Searched ";
//     cin >> number;

//     // IF NUMBER IS FOUND , PRINT FOUND

//     if(search(root,number) == true)
//     {
//         cout << "Found" << endl;
//     }
//     else
//     {
//         cout << "Not Found" << endl;
//     }

// }