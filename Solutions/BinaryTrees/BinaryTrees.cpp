#include <iostream>
#include <ctime>
#include<array> 
using namespace std;

template <typename TYPE>
class BinaryTree
{
    struct node
    {
        TYPE data;
        struct node *right;
        struct node *left;
    };
    typedef node *Node;

private:
    Node root = NULL;
    void Push(TYPE t)
    {
        Node element = new node;
        element->data = t;
        element->left = NULL;
        element->right = NULL;
        root = element;
    }
    // inorder = -3,-2,1,2,3
    Node Inorder(Node n)
    {
        if (n == NULL)
        {
            return NULL;
        }
        cout << " ( ";
        Inorder(n->left);
        cout << "" << n->data << "";
        Inorder(n->right);
        cout << " ) ";
        return n;
    }

    // preorder = 1,-2,-3,2,3
    Node Preorder(Node n)
    {
        if (n == NULL)
        {
            return NULL;
        }
        cout << "" << n->data << "";
        cout << "( ";
        Preorder(n->left);
        Preorder(n->right);
        cout << " )";
    }

    // postorder =3,2,-2,-3,1
    Node Postorder(Node n)
    {
        if (n == NULL)
        {
            return NULL;
        }
        cout << "( ";
        Postorder(n->right);
        Postorder(n->left);
        cout << " )";
        cout << "" << n->data << "";
    }

    bool isBinarySearchTree(Node n){
        if(n == NULL){
            return true;
        }
        Node l = n->left;
        Node r = n->right;
        if(l != NULL)
            if(l->data == n->data) return false;
        if(r != NULL)
            if(r->data == n->data) return false;
        
        bool resultL = isBinarySearchTree(n->left);
        bool resultR = isBinarySearchTree(n->right);
        return resultL * resultR;
    }

public:
    BinaryTree()
    {
        root = NULL;
    }

    BinaryTree(int a[], int length)
    {
        for (int i = 0; i < length; i++)
        {
            Add(a[i]);
        }
    }

    void Add(TYPE t)
    {
        if (root == NULL)
        {
            Push(t);
        }
        else
        {
            Node r = root;
            bool isRight = false;
            bool moved = false;
            while (moved == false)
            {
                if (t > root->data)
                {
                    isRight = true;
                    if (root->right == NULL)
                        moved = true;
                    else
                        root = root->right;
                }
                else
                {
                    isRight = false;
                    if (root->left == NULL)
                        moved = true;
                    else
                        root = root->left;
                }
            }

            Node element = new node;
            element->data = t;
            element->left = NULL;
            element->right = NULL;

            if (t > root->data)
            {
                root->right = element;
            }
            else
            {
                root->left = element;
            }
            root = r;
        }
    }

    void PrintInorder()
    {
        Inorder(root);
    }

    void PrintPreorder()
    {
        Preorder(root);
    }

    void PrintPostorder()
    {
        Postorder(root);
    }

    bool IsBinarySearchTree()
    {
        return isBinarySearchTree(root);
    }
};

int main()
{
    int a[5] = {-1,-2,-3,3,4};
    int b[5] = {-1,-1,-3,3,4};
    
    BinaryTree<int> treeA = BinaryTree<int>(a,5);
    BinaryTree<int> treeB = BinaryTree<int>(b,5);

    treeA.PrintInorder();
    cout<<endl;
    treeA.PrintPostorder();
    cout<<endl;
    treeA.PrintPreorder();
    cout<<endl<<endl;
    cout<<treeA.IsBinarySearchTree()<<endl;
    cout<<treeB.IsBinarySearchTree()<<endl;

    return 0;
}