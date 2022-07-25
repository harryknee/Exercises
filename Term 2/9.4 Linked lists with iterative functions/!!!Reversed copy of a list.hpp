#include <iostream>
#include <string>
#include <fstream>

typedef std::string list_t;

// create a structure ListNode
// have attributes: int and ListNode pointer
struct ListNode{
  std::string val;
  ListNode* next;
};

//constructs a list, requires presetting the input ListNode = NULL
ListNode* cons_list(list_t e, ListNode* l){
    ListNode* tmp;
 
    tmp = new ListNode;
 
    tmp->val = e;
    tmp->next = l;
 
    return tmp;
}

void print_list(ListNode* l){
  while(l->next != NULL){
    std::cout << l->val << std::endl;
    l = l->next;
  }
}

void deallocate_list(ListNode* l){
    ListNode* tmp;

    while(l !=NULL){
        tmp = l->next;
        delete l;
        l = tmp;
    }
}

ListNode* reversed_copy_list(ListNode* l){
  ListNode* lout = NULL; // don't forget to set it's initial value as NULL!
  while (l->next != NULL){
    lout = cons_list(l->val,lout);
    l = l->next;
  }
  return lout;
}

int main(){
  ListNode* l = NULL;
  std::string tmp,a,b;
  
  std::ifstream file;
  file.open("sinput.txt");
  while (file >> tmp){
    l = cons_list(tmp,l);
  }

  print_list(l);

  print_list(reversed_copy_list(l));
}