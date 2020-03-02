#include<bits/stdc++.h>
#include<iostream>
using namespace std;

/* A binary tree node has data,
pointer to left child and
a pointer to right child */
class node
{
	public:
	int data;
	node* left;
	node* right;

	/* Constructor that allocates a new node with the
	given data and NULL left and right pointers. */
	node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};
node* getNode(int data){
    node* n ;
    n->data=data;
    n->left=n->right=NULL;
    return n;
}
node *Insert(node *root,int data){
    if(root==NULL)
    {
        root=getNode(data);
    }
    else if (data<= root->data)
    {
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}
void printKDistant(node *root , int k)
{
	if(root == NULL)
		return;
	if( k == 0 )
	{
		cout << root->data << " ";
		return ;
	}
	else
	{
		printKDistant( root->left, k - 1 ) ;
		printKDistant( root->right, k - 1 ) ;
	}
}


/* Driver code*/
int main()
{

	/* Constructed binary tree is
			1
			/ \
		2 3
		/ \ /
		4 5 8
	*/

	node *root =  NULL;

	int t,n,l,r;
	cin>>t;
	while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>l;
            root =Insert(root,l);
        }
        cin>>r;
        printKDistant(root,r);
  }
   /*
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(8);*/

	//printKDistant(root, 2);
	return 0;
}

// This code is contributed by rathbhupendra

