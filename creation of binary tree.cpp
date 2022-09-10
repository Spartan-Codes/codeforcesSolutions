#include<iostream>
#include<string>
using namespace std;
class Node{
	int data;
	Node *left;
	Node *right;
	public:
		friend class tree;
	Node(int d){
		this->data = d;
		this->left = NULL;
		this->right = NULL;
	}
};
class tree{
	public:
	Node *root;
	tree(){
		this->root =NULL;
	}
	Node * create_tree_pre(string pre,string in){
		if(in.size() == 0){
			return NULL;
		}
		Node *ptr = new Node(pre[0]-48);
		int pos = in.find(pre[0]);
		ptr->left = create_tree_pre(pre.substr(1,pos),in.substr(0,pos));
		ptr->right = create_tree_pre(pre.substr(pos+1),in.substr(pos+1));
		return ptr;
	}
	Node *create_tree_post(string post,string in){
		if(in.size() == 0){
			return NULL;
		}
		int pos = post.size();
		Node *ptr = new Node(post[pos-1] - 48);
		int pos_in = in.find(post[pos-1]);
		ptr->left = create_tree_post(post.substr(0,pos_in),in.substr(0,pos_in));
		ptr->right = create_tree_post(post.substr(pos_in,pos_in),in.substr(pos_in + 1));
		return ptr;
	}
	
	void pre_order(Node *root){
		if(root == NULL){
			return;
		}
		cout<<root->data<<"  ";
		pre_order(root->left);
		pre_order(root->right);
	}
	void post_order(Node *root){
		if(root == NULL){
			return;
		}
		post_order(root->left);
		post_order(root->right);
		cout<<root->data<<"  ";
	}
	void inorder(Node *root){
		if(root == NULL){
			return;
		}
		inorder(root->left);
		cout<<root->data<<"  ";
		inorder(root->right);
		
	}
};
int main(){
	string pre_order = "1245367";
	string in_order = "4251637";
	string post_order = "4526731";
	tree t;
	Node *ptr1 = t.create_tree_pre(pre_order,in_order);
	t.post_order(ptr1);
	cout<<endl;
	Node *ptr2 = t.create_tree_post(post_order,in_order);
	t.pre_order(ptr2);
	cout<<endl;
}