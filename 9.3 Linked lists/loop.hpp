/* Loop
Write a program which reads a number n from the user and then, using a loop, reads n integers from the user and builds a list containing them. Then print the list. 
*/
#include <iostream>
 
struct IntListNode{
    int val;
    IntListNode* next;
};
 
int main(){
    int n, cin;
    std::cout << "Enter number of items in list:\n";
    std::cin >> n;

    IntListNode* tmp;
    IntListNode* l = NULL;
    for(int i = 0; i < n; i++){
        std::cin >> cin;
        tmp = new IntListNode;
        tmp->val = cin;
        tmp->next = l;
        l = tmp;
    }

    IntListNode* lit = l;

    while(lit != NULL){
        std::cout << lit->val << std::endl;
        lit = lit->next;
    }
 
    lit = l;
 
    while(lit != NULL){
        tmp = lit->next;
        delete lit;
        lit = tmp;
    }
}