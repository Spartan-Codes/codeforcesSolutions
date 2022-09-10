#include<iostream>
#include<vector>
using namespace std;
class Node{
	public:
	Node *left,*right;
	int data;
	friend class tree;
	Node(int data){
		this->data =data;
		this->left =NULL;
		this->right = NULL;
	}	
};
class tree{
	public:
	Node *root;
	tree(){
		this->root =NULL;
	}
	void insertion(int data){
		Node *ptr=new Node(data);
		Node *temp=root;
		Node *prev=temp;
		if(root == NULL){
			this->root = ptr;
		}
		else{
			int flag=0;
			while(temp != NULL){
				prev = temp;
				if(temp->data < data){
					temp=temp->right;
					flag = 1;
				}
				else{
					temp = temp->left;
					flag = 0;
				}
			}
			if(flag){
				prev->right =ptr; 
			}
			else{
				prev->left =ptr;
			}
		}
	}
	void print_inorder(Node *root){
		if(root == NULL){
			return;
		}
		print_inorder(root->left);
		cout<<root->data<<"  ";
		print_inorder(root->right);
	}
	void print_preorder(Node *root){
		if(root == NULL){
			return;
		}
		cout<<root->data<<"  ";
		print_preorder(root->left);
		print_preorder(root->right);
	}
	void print_postorder(Node *root){
		if(root == NULL){
			return;
		}
		print_postorder(root->left);
		print_postorder(root->right);
		cout<<root->data<<"  ";
	}
	void deletion(int data){
		Node *temp =root;
		int cnt =1;
		int flag = 0;
		Node *prev;
		while((temp != NULL)&&(temp->data != data)){
			if(temp->data > data){
				prev = temp;
				temp = temp->left;
				flag = 0;
			}else{
				prev = temp;
				temp =temp->right;
				flag = 1;
			}
			cnt++;
		}
		if(temp != NULL){
			if((temp->left == NULL)&&(temp->right == NULL)){
				if(flag == 0){
					prev->left =NULL;
				}
				else{
					prev->right = NULL;
				}
				delete temp;
			}
			else{
				if(temp->right == NULL){
					if(flag == 0){
						prev->left = temp->left;
						delete temp;
					}
					else{
						prev->right = temp->left;
						delete temp;
					}
				}
				else if(temp->left == NULL){
					if(flag == 0){
						prev->left = temp->right;
						delete temp;
					}
					else{
						prev->right =temp->right;
					}
				}
				else{
					Node *n = this->find_min(temp->right);
					this->deletion(n->data);
					temp->data =n->data;
				}
			}
		}
		else{
			cout<<"element not found "<<endl;
		}
	}
	Node *find_min(Node *rt){
		Node *temp = rt;
		Node *prev = temp;
		while(temp != NULL){
			prev = temp;
			temp = temp->left;
		}
		return prev;
	}
	Node *find_max(){
		Node *temp = root;
		Node *prev = temp;
		while(temp != NULL){
			prev = temp;
			temp = temp->right;
		}
		return prev;
	}
	int search(int data){
		Node *temp =root;
		int cnt =1;
		while((temp != NULL)&&(temp->data != data)){
			if(temp->data > data){
				temp = temp->left;
			}else{
				temp =temp->right;
			}
			cnt++;
		}
		if(temp != NULL){
			return cnt;
		}
		else{
			cout<<"element not found "<<endl;
			return cnt;
		}
	}
};
int main(){
	tree t;
	int arr[13]={1,4,5,7,3,2,6,8,19,23,18,22,24};
	for(int i=0;i<13;i++){
		t.insertion(arr[i]);
	}
	t.print_inorder(t.root);
	cout<<endl;
	t.print_postorder(t.root);
	cout<<endl;
	t.print_preorder(t.root);
	cout<<endl;
	t.deletion(19);
	t.print_preorder(t.root);
}