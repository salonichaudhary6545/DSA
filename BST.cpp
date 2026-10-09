//tree implementation
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node * left;
	node * right;
};
node * create(int data){
	node * newnode=(node *)malloc(sizeof(node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
node * insert(node * root,int value){
	if(root==NULL){
		return create(value);
	}
	if(value<root->data){
		root->left=insert(root->left,value);
	}
	if(value>root->data){
		root->right=insert(root->right,value);
	}
	return root;
}
void preorder(node * root){
	if(root!=NULL) {
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
}
void inorder(node * root){
	if(root!=NULL) {
	
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
}
void postorder(node * root){
	if(root!=NULL) {
	
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
}
main(){
	int item,ch=0;
	node * root=NULL;
	while(ch!=5){
		printf("1-> Insert node\n");
		printf("2-> Preorder traversal\n");
		printf("3-> Inorder traversal\n");
		printf("4-> Postorder traversal\n");
		printf("5-> Exit....\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter Element : ");
				scanf("%d",&item);
				root=insert(root,item);
			break;
			case 2:
				printf("Preorder traversal\n");
				preorder(root);
				printf("\n");
			break;
			case 3:
				printf("Inorder Traversal\n");
				inorder(root);
				printf("\n");
			break;
			case 4:
				printf("Postorder Traversal\n");
				postorder(root);
				printf("\n");
			break;
			case 5:
				printf("Exit..\n");
			break;
		}
	}
	
}
