/*Replace elements in a list
Write a function bool replace_list(list_t e, list_t n, ListNode* l, bool all) which replaces occurrences of e in l with n and returns true if any replacements have taken place and false otherwise. Note that this is not influenced by the type of values contained in the list nodes as long as it's something on which the == operator and the = operator can be used.
*/
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

bool search_list(list_t e, ListNode* l){
  while(l != NULL){
    if (l->val == e){
      return true;
    }
    l = l->next;
  }
  return false;
}

bool replace_list(list_t e, list_t n, ListNode* l, bool all){
  bool tmp;
  while(l->next != NULL){
    if (l->val == e){
      tmp = true;
      l->val = n;
      if (!all){
         return true;
      }
    }
    l = l->next;
  }
  if (tmp){
    return true;
  }
  else{
    return false;
  }
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

  a = "hello";
  b = "goodbye";

  if (replace_list(a,b, l, true)){
    std::cout << "Replaced " << a << "with " << b << std::endl;
  }
  else{
    std::cout << "Not found.\n";
  }

  print_list(l);

  a = "goodbye";
  b = "morning";

  if (replace_list(a,b, l, false)){
    std::cout << "Replaced " << a << "with " << b << std::endl;
  }
  else{
    std::cout << "Not found.\n";
  }

  print_list(l);
}