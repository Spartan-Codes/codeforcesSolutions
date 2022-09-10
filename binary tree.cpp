#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class Node{
	int data;
	Node *left;
	Node *right;
	public:
	friend class tree;
	Node(int data){
		this->data = data;
		this->left =NULL;
		this->right = NULL;
	}	
};
class tree{
	public:
	vector<int> pre_order;
	vector<int> post_order;
	vector<int> in_order;
	vector<int> level_order;
	vector<int>long_path;
	Node *root;
	Node *root2;
		tree(){
			this->root= NULL;
			this->root2 = NULL;
		}
		void insertion(int data){
			Node *ptr = new Node(data);
			if(root == NULL){
				root=ptr;
				cout<<data<<"  inserted at the root "<<endl;
			}
			else{
				Node *temp=root;
				char ch;
				while(true){
					cout<<"if you want to insert "<<data<<"  to left or right of  "<<temp->data<<"  enter l or r"<<endl;
					cin>>ch;
					if((ch == 'l')||(ch == 'L')){
						if(temp->left == NULL){
							temp->left = ptr;
							cout<<data<<"  inserted to the left of "<<temp->data<<endl;
							break;
						}else{
							temp =temp->left;
						}
					}
					else{
						if(temp->right == NULL){
							temp->right = ptr;
							cout<<data<<"  inserted to the right of "<<temp->data<<endl;
							break;
						}
						else{
							temp=temp->right;
							
						}
					}
				}
			}
		}
		void pre_order_recursive(Node *root){
			if(root == NULL){
				return;
			}
			pre_order.push_back(root->data);
			pre_order_recursive(root->left);
			pre_order_recursive(root->right);
		}
		void post_order_recursive(Node *root){
			if(root == NULL){
				return;
			}
			post_order_recursive(root->left);
			post_order_recursive(root->right);
			post_order.push_back(root->data);
		}
		void in_order_recursive(Node *root){
			if(root == NULL){
				return;
			}
			in_order_recursive(root->left);
			in_order.push_back(root->data);
			in_order_recursive(root->right);
		}
		void level_order_traversal(){
			if(this->root != NULL){
			Node *temp = root;
			queue<Node *> q;
			q.push(temp);
			Node *val;
			while(!q.empty()){
				val=q.front();
				q.pop();
				level_order.push_back(val->data);
				if(val->left != NULL){
					q.push(val->left);
				}
				if(val->right != NULL){
					q.push(val->right);
				}
			}
		}else{
			cout<<"the tree has no elements to show "<<endl;
		}
		}
		void print_all_orders(){
			int size_ = in_order.size();
			cout<<"pre order result of the tree:    ";
			for(int i=0;i<size_;i++){
				cout<<pre_order[i]<<"  ";
			}cout<<endl;
			cout<<"in order result of the tree:    ";
			for(int i=0;i<size_;i++){
				cout<<in_order[i]<<"  ";
			}cout<<endl;
			cout<<"post order result of the tree:    ";
			for(int i=0;i<size_;i++){
				cout<<post_order[i]<<"  ";
			}cout<<endl;
			cout<<"level order result of the tree:    ";
			for(int i=0;i<size_;i++){
				cout<<level_order[i]<<"  ";
			}cout<<endl;
			
		}
		void pre_order_iterative(){
			Node *temp=root;
			stack<Node *>st;
			st.push(temp);
			Node *val;
			while(!st.empty()){
				val=st.top();
				st.pop();
				pre_order.push_back(val->data);
				if(val->right != NULL){
					st.push(val->right);
				}
				if(val->left != NULL){
					st.push(val->left);
				}
			}	
		}
		void post_order_iterative2(){
			Node *temp =root;
			stack<Node *> st1;
			stack<Node *> st2;
			st1.push(temp);
			Node *val;
			while(!st1.empty()){
				val = st1.top();
				st1.pop();
				st2.push(val);
				if(val->left != NULL){
					st1.push(val->left);
				}
				if(val->right != NULL){
					st1.push(val->right);
				}
			}
			while(!st2.empty()){
				val =st2.top();
				post_order.push_back(val->data);
				st2.pop();
			}
		}
		void in_order_iterative(){
			stack<Node *>st;
			Node *temp=root2;
			st.push(temp);
			temp=temp->left;
			while((temp != NULL)||(!st.empty())){
				if(temp){
					st.push(temp);
					temp=temp->left;
				}
				else{
				temp=st.top();
				st.pop();
				in_order.push_back(temp->data);
				temp=temp->right;
			}
			}
		}
		int find_(Node *node,vector<Node *> vect){
			int len=vect.size();
			int flag=0;
			for(int i=0;i<len;i++){
				if(vect[i] == node){
					flag=1;
					break;
				}
			}
			return flag;
		}
		void post_order_iterative(){
			stack<Node *>st;
			vector<Node*>visited;
			Node *temp=root;
			Node *val;
			while((temp != NULL)||(!st.empty())){
				if(temp != NULL){
					st.push(temp);
					temp=temp->left;
				}
				else{
					temp = st.top();
					st.pop();
					int find;
					find = find_(temp,visited);
					if((temp->right != NULL)&&(!find)){
						st.push(temp);
						visited.push_back(temp);
						temp=temp->right;	
					}
					else{
						post_order.push_back(temp->data);
						temp=NULL;
					}
				}
			}	
		}
		int height_(Node *root,int height){
			if(root == NULL){
				return height;
			}
			int a,b;
			a=height_(root->left,height+1);
			b=height_(root->right,height+1);
			if(a>b){
				return a;
			}
			return b;
		}
	
			
		
		bool check_equal(Node *root1,Node *root2){
			if((root1 == NULL)&&(root2 == NULL)){
				return true;
			}
			else{
				if((root2 != NULL)&&(root1 == NULL)){
					return false;
				}
				else{
					if((root2 == NULL)&&(root1 != NULL)){
						return false;
					}
					else{
						if(root1->data == root2->data){
							bool val;
							val = check_equal(root1->left,root2->left);
							if(val == true){
								val = check_equal(root1->right,root2->right);
								return val;
							}
							else{
								return false;
							}
						}else{
							return false;
						}
					}
				}
			}
		}
		Node * make_clone(Node *root1){
			if(root1 != NULL){
				Node *ptr = new Node(root1->data);
				ptr->left = make_clone(root1->left);
				ptr->right = make_clone(root1->right);
				return ptr;
	        }
		}
		Node *make_mirror(Node *root1){
			if(root1 != NULL){
				Node *ptr = new Node(root1->data);
				ptr->left = make_mirror(root1->right);
				ptr->right = make_mirror(root1->left);
				return ptr;
			}
		}
		
};
int main(){
	tree t,t1,t2;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<5;i++){
		t.insertion(arr[i]);
	}
	t.root2 = t.make_mirror(t.root);
	for(int i=0;i<5;i++){
		t1.insertion(arr[i]);
	}
	t.pre_order_iterative();
	t.in_order_iterative();
	t.post_order_iterative2();
	t.level_order_traversal();
	t.print_all_orders();
	int h= t.height_(t.root,0);	
	cout<<"height is "<<h<<endl;
	bool val = t.check_equal(t.root,t1.root);
	cout<<val<<endl;
}