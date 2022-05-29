//mid-term revision: pointers and list
#include <iostream>

typedef int list;

struct ListNode{
  int val;
  ListNode* next;
};

ListNode* cons_list(list e,ListNode* l){
  ListNode* tmp;
  tmp = new ListNode;
  tmp->val = e;
  tmp->next = l;
  return tmp;
}

void print_list(ListNode* l){
  while(l != NULL){
    std::cout << l->val << std::endl;
    l = l->next;
  }
}

void deallocate_list(ListNode* l){
  ListNode* tmp;  
  while(l != NULL){
    tmp = l->next;
    delete l;
    l = tmp;
  }
  delete tmp;
  delete l;
}

int length_rec(ListNode* l){
  if (l != NULL){
    return 1 + length_rec(l->next);
  }
  return 0;
}

bool search_list_rec(list e, ListNode* l){
  if (l == NULL){
    return false;
  }
  if (l->val == e){
    return true;
  }
  return search_list_rec(e,l->next);
}



int main(){
  ListNode* l = NULL;
  l = cons_list(3,l);
  l = cons_list(5,l);
  l = cons_list(7,l);
  l = cons_list(9,l);

  print_list(l);
  
  std::cout << "length is " << length_rec(l) << std::endl;
  
  std::cout << "number 5 is " << search_list_rec(5,l) << std::endl;
  std::cout << "number 6 is " << search_list_rec(6,l) << std::endl;

  
  deallocate_list(l);
}