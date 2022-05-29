#include <iostream>
#include <fstream>
#include <string>
 
typedef std::string list_t;
 
// using typedef we can change the type only in one line
// if we want a linked list implementation 
// that works for a different type
 
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
}

int length_list(ListNode* l){
  int len = 0;
  while(l != NULL){
    len += 1;
    l = l->next;
  }
  return len;
}
 
int main(){
    ListNode* l = NULL;
    std::string cin;
    std::string tmp;
    
    cin = "sinput.txt";
    std::ifstream infile;
    infile.open(cin);
    
    while (infile >> tmp){
      l = cons_list(tmp,l);
    }
 
    print_list(l);

    std::cout << length_list(l);
 
    deallocate_list(l);
}