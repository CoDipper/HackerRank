//Day Twenty-Three

#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
    //Level Ordering
	void levelOrder(Node * root){
        int h = height(root);  
        int i;  
        for (i = 1; i <= h; i++){
            printGivenLevel(root, i);
        } 
	}
    //Printing a single level
    void printGivenLevel(Node* root, int level){  
        if (root == NULL){
            return;
        }if(level == 1){
            cout << root->data << " ";
        }else if (level > 1){  
            printGivenLevel(root->left, level-1);  
            printGivenLevel(root->right, level-1);  
        }  
    }  
    //Finding the height of the tree
    int height(Node* node){  
        if (node == NULL){
            return 0;
        }else{  
            /* compute the height of each subtree */
            int lheight = height(node->left);  
            int rheight = height(node->right); 
            if (lheight > rheight){
                return(lheight + 1); 
            }else{
                return(rheight + 1);  
            } 
        }   
    }

};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
