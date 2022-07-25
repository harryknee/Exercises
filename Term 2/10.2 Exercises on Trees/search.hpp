#include <iostream>
 
typedef int tree_t;

struct TreeNode{
    tree_t val;
    TreeNode* left;
    TreeNode* right;
};

// this is almost identical to cons_ListNode
// e -> element
// l -> left; r -> right
TreeNode* cons_tree(tree_t e, TreeNode* l, TreeNode* r){
    TreeNode* tmp;
    tmp = new TreeNode;
    tmp->val = e;
    tmp->left = l;
    tmp->right = r;
    return tmp;
}

// insert into tree under the node t
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

bool search_ordered_tree(tree_t e, TreeNode* t){
  // only returns a bool value either:
  // - false after reaching end node of tree (under only the possible branch)
  // - true if found
  // - else returns a function of the next search under the possible branch (if e < node, next search the left child node)
  if (t == NULL){
    return false;
  }
  if (e == t->val){
    return true;
  }
  else if (e < t->val){
    return search_ordered_tree(e, t->left);
  }
  else{
    return search_ordered_tree(e, t->right);
  }
}

int main(){
    TreeNode* t;
    t = NULL;
 
    t = ordered_insertion_tree(15, t);
    t = ordered_insertion_tree(20, t);
    t = ordered_insertion_tree(6, t);
    t = ordered_insertion_tree(1, t);
    t = ordered_insertion_tree(4, t);
    t = ordered_insertion_tree(18, t);
    t = ordered_insertion_tree(9, t);
 
    std::cout << search_ordered_tree(2,t);
 
    deallocate_tree(t);
 
}

/* 
search(e, t) = false if t is empty
search(e, t) = true if we have found e in the current node
search(e, t) = search(e, t->left) if e is less than the value in the current node
search(e, t) = search(e, t->right) otherwise
Implement this in a function bool search_ordered_tree(tree_t e, TreeNode* t) and write a main to test it.
*/