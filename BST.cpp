#include<iostream>
using namespace std;
//Struct created to create structure of Binary Search tree
struct Node {
	int data; 
	Node* left;
	Node* right;
};

//This will create a new node and return the value of new
Node* Create_new_Node(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

//returns the addressof the new root
Node* Insert(Node* root,int data) {
	if(root == NULL) { // empty tree
		root = Create_new_Node(data);
	}
//Checks if the value is less than root,then goes to left
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(Node* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	Node* root = NULL;  // Creating an empty tree
	//I am inserting following numbers
	root = Insert(root,50);	
	root = Insert(root,40);	
	root = Insert(root,60);
	root = Insert(root,20);
	root = Insert(root,45);
	root = Insert(root,90);
  root = Insert(root,10);
  root = Insert(root,24);
  root = Insert(root,49);
  root = Insert(root,80);
  root = Insert(root,95);
  root = Insert(root,15);
  root = Insert(root,28);
  root = Insert(root,48);
  root = Insert(root,75);
  root = Insert(root,85);


 
	int number;
	cout<<"Enter number you want to search: ";
	cin>>number;
	if(Search(root,number) == true) {
    cout<<"The number " <<number <<" is in the list";}
    
	else {
    cout<<"The number " <<number <<" is not in the list";;
}
}
