#include <iostream>
 
class SomeClass{
 
public:
 
    SomeClass(int idinput) : id(idinput) { 
      std::cout << "object with id " << id << " instantiated" << std::endl;
    }
 
    // assignment operator, notice the return type
    // (explanation below)
    SomeClass& operator=(const SomeClass& s){
 
        std::cout << "assignment operator" << std::endl;
 
        id = s.id;
 
        return *this;
        // (explanation below)
    }
 
    int get_id() const {
        return id;
    }
 
private:
 
    int id;
 
};
 
int main(){
    SomeClass s1(1);
    SomeClass s2(2);
    SomeClass s3(3);
 
    std::cout << "s1: " << s1.get_id() << std::endl;
    std::cout << "s2: " << s2.get_id() << std::endl;
    std::cout << "s3: " << s3.get_id() << std::endl;
 
    s3 = s2 = s1; 
    // chained assignments
    // that can be used instead of writing:
    // s2 = s1;
    // s3 = s2;
 
    std::cout << "s1: " << s1.get_id() << std::endl;
    std::cout << "s2: " << s2.get_id() << std::endl;
    std::cout << "s3: " << s3.get_id() << std::endl;
}

/*
In the main above we didn't use the return value of the assignment operator, so why do we have SomeClass& as return type of the assignment operator and what's the meaning of return *this?

These elements are needed because the C++ standard requires that assignment operators can be chained.

Using the member function notation this can be written as:

s3.operator=( s2.operator=( s1 ) );
Therefore s2.operator=( s1 ) must return s2 itself which will be used as argument for s3.operator=().

We can return s2 itself by means of return *this; because in each object this is a special name representing a pointer to the object itself.

The return type we used is SomeClass& rather than SomeClass and we haven't seen other examples of returning a reference, but in this case it just makes things more efficient.
*/