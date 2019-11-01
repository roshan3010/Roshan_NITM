include <stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* createNode(int data)
{
	struct node* newNode = (struct node*) malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return(newNode);
}

int main()
{
	struct node* root=createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);

}