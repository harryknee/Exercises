#include <iostream>

typedef int list_t;

struct ListNode{
  list_t val;
  ListNode* next;
};

ListNode* cons_list(list_t e, ListNode* l){
  ListNode* tmp;
  tmp = new ListNode;
  
  tmp->val = e;
  tmp->next = l;

  return tmp;
}

void print_list(ListNode* l){
  if (l != NULL){
    std::cout << l->val << std::endl;
    print_list(l->next);
  }
}

ListNode* ordered_insertion_list(list_t e, ListNode* l){
    if(l == NULL){
        return cons_list(e, l);
    }
    else if(e < l->val){
        return cons_list(e, l);
    }
    else{
        l->next=ordered_insertion_list(e, l->next);
        return l;
    }
}

ListNode* ordered_copy_list(ListNode* l){
  ListNode* lout = NULL;
  while (l != NULL){
    lout = ordered_insertion_list(l->val,lout);
    l = l->next;
  }
  return lout;
}

int main(){
  ListNode* l = NULL; 
  ListNode* lit = NULL;

  //initial list
  for (int i=9; i>0;i--){
    if (i % 2 == 0){
      l = cons_list(i+2*(i+1),l);
    }
    else{
      l = cons_list(i,l);
    }
  }

  print_list(l);

  //insert in order
  std::cout << "copied in order\n";
  lit = ordered_copy_list(l);

  print_list(lit);
}