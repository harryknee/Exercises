#include <iostream>
 
typedef int tree_t;

struct TreeNode{
    tree_t val;
    TreeNode* left;
    TreeNode* right;
};

// this is almost identical to cons_ListNode
TreeNode* cons_tree(tree_t e, TreeNode* l, TreeNode* r){
    TreeNode* tmp;
    tmp = new TreeNode;
    tmp->val = e;
    tmp->left = l;
    tmp->right = r;
    return tmp;
}

// insert into tree under the node t
// for e == t-val, we also put it on the right of the node
TreeNode* ordered_insertion_tree(tree_t e, TreeNode* t){
    if(t == NULL){
        return cons_tree(e, NULL, NULL);
    }
    else if(e < t->val){
        t->left = ordered_insertion_tree(e, t->left);
        return t;
    }
    else{
        t->right = ordered_insertion_tree(e, t->right);
        return t;
    }
}

// print out tree
// print out child nodes to the left first, then the right (by recusion)
// because left child nodes are less than the parent node, while the right child nodes are greater
void print_tree(TreeNode* t){
    if(t != NULL){
        print_tree(t->left);
        std::cout << t->val << std::endl;
        print_tree(t->right);
    }
}

void deallocate_tree(TreeNode* t){
    if(t != NULL){
        deallocate_tree(t->left);
        deallocate_tree(t->right);
        delete t;
    }
}

int main(){
  int* p1;
  int* p2;
  
  *p2 = 15
  std::cout << *p2; 
}