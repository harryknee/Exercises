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
 
 
 
void print_list_rec(ListNode* l){
    if(l != NULL){
        std::cout << l->val << std::endl;
        // we print the first element
        print_list_rec(l->next);
        // then the rest of the list
    }
}
 
void deallocate_list_rec(ListNode* l){
    ListNode* tmp;
 
    if(l != NULL){
        tmp = l->next;
        delete l;
        deallocate_list_rec(tmp);
    }
}

int length_list_rec(ListNode* l){
  if (l->next != NULL){
    return 1 + length_list_rec(l->next);
  }
  else{
    return 0;
  }
}

bool search_list_rec(list_t e, ListNode* l){
  if (l->next != NULL){
    if (l->val == e){
      return true;
    }
    else{
      return search_list_rec(e,l->next);
    }
  }
  else{
    return false;
  }
}

bool search_ordered_list_rec(list_t e, ListNode* l){
  if (l != NULL && l->val <= e){
    if (l->val == e){
      return true;
    }
    else{
      std::cout << "checking if =" << l->val << "\n";
      return search_ordered_list_rec(e,l->next);
    }
  }
  else{
    return false;
  }
}

int main(){
    ListNode* l = NULL;
 
    l = cons_list(56, l);
    l = cons_list(42, l);
    l = cons_list(31, l);
    l = cons_list(22, l);
    
    print_list_rec(l);

    std::cout << search_ordered_list_rec(43,l) << std::endl;
    std::cout << search_ordered_list_rec(56,l) << std::endl;
 
    deallocate_list_rec(l);
}