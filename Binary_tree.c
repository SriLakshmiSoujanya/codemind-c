#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node TreeNode;
void preOrder (TreeNode *root){
	if(root != NULL){
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
int main()
{
	int level;
	int i;
	printf("Enter number of levels: ");
	scanf("%d",&level);
	int no_of_nodes=(int)pow(2,level)-1;
	TreeNode* nodes[no_of_nodes];
	for(i=0;i<no_of_nodes;i++){
	  printf("Index: %d\nEnter\n1.Node\n2.NULL\n",i);
	  int ch;
	  scanf("%d",&ch);
	  if(ch==1){
	  	int val;
	  	printf("Enter a value for the node: ");
	  	scanf("%d",&val);
	  	TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
	  	newNode->left=NULL;
	  	newNode->right=NULL;
	  	newNode->data=val;
	  	nodes[i]=newNode;
	  }	
	  else{
	  	nodes[i]=NULL;
	  }
	}
	for(i=0;i<no_of_nodes / 2;i++){
		if(nodes[i] != NULL){
			nodes[i]->left=nodes[2 * i + 1];
			nodes[i]->right=nodes[2*i+2];
		}
	}
	TreeNode *root = nodes[0];
	preOrder(root);
}
