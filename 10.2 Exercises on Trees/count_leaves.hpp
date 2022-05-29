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

bool search_ordered_tree(tree_t e, TreeNode* t){
  // only returns a bool value either:
  // - false after reaching end node of tree (under only the possible branch)
  // - true if found
  // - else returns a function of the next search under the possible branch (if e < node, next search the left child node)
  if (t == NULL){
    return false;
  }
  else{
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
}

int count_occurrences_tree(tree_t e, TreeNode* t){
  int i = 0;
  if (! search_ordered_tree(e, t)){
    return 0;
  }
  else{
    while(t != NULL){
      if (e == t->val){
        // because ordered_insertion function would put same input to the right if equal
        i += 1;
        t = t->right;
      }
      else if(e < t->val){
        t = t->left;
      }
      else{
        t = t->right;
      }
    }
    return i;
  }
}

TreeNode* min_element_tree(TreeNode* t){
  if (t == NULL){
    return NULL;
  }
  else{
    // stop if the next left pointer is NULL (reached end)
    while(t->left != NULL){
      t = t->left;
    }
    return t;
  }
}

int count_nodes_tree(TreeNode* t){
  if (t == NULL){
    return 0;
  }
  return count_nodes_tree(t->left) + count_nodes_tree(t->right) + 1;
}

int count_leaves_tree(TreeNode* t){
  if ((t->left == NULL) && (t->right == NULL)){
    return 1;
  }
  if (t->left == NULL){
    return count_leaves_tree(t->right);
  }
  if (t->right == NULL){
    return count_leaves_tree(t->left);
  }
  // this is when both l/r nodes are not null
  return count_leaves_tree(t->left) + count_leaves_tree(t->right);
}

int main(){
    TreeNode* t;
    t = NULL;
    t = ordered_insertion_tree(15, t);
    t = ordered_insertion_tree(20, t);
    t = ordered_insertion_tree(6, t);
    t = ordered_insertion_tree(20, t);
    t = ordered_insertion_tree(4, t);
    t = ordered_insertion_tree(20, t);
    t = ordered_insertion_tree(9, t);

    // equivalent to min_element_tree(t)->val
    std::cout << count_nodes_tree(t) << std::endl;

    std::cout << count_leaves_tree(t);

    deallocate_tree(t);
 
}