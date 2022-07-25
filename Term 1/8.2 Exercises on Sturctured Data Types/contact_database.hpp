#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Contact{
  std::string first_name;
  std::string surname;
  std::string email;
  std::string phone;
};

void LoadFile(std::string address, std::vector<Contact>& vout){
  vout.clear(); // clears vout
  std::string tmps; // temporary string
  Contact tmpc; // temporary Contact
  std::ifstream infile;
  infile.open(address);
  if(!infile.is_open()){ 
      std::cout << "error opening file" << std::endl;
      return;
  }
  // add each reading to the corresponding field of the structure and then pushback to the vector
  while (infile >> tmps){
    tmpc.first_name = tmps;
    infile >> tmps;
    tmpc.surname = tmps;
    infile >> tmps;
    tmpc.email = tmps;
    infile >> tmps;
    tmpc.phone = tmps;

    vout.push_back(tmpc); 
  }
  infile.close();
  // now prints each field of each Contact in the vector
  for (int i = 0; i < size(vout); i++){
    std::cout << "==== Contact " << i+1 << " ====" << std::endl;
    std::cout << "first name: " <<vout[i].first_name << std::endl;
    std::cout << "surname: " <<vout[i].surname << std::endl;
    std::cout << "email: " << vout[i].email << std::endl;
    std::cout << "phone: " << vout[i].phone << std::endl;
  }
}

int search_contact(const std::vector<Contact>& contacts, std::string first_name, std::string surname){
  for (int i = 0; i < size(contacts); i++){
    if (first_name == contacts[i].first_name){
      if (surname == contacts[i].surname){
        return i;
      }
    }
  }
  return -1;
}

int main(){
  std::string address = "contacts.txt";
  std::vector<Contact> v;
  std::string first_name, surname;
  LoadFile(address, v);
  std::cout << "Please enter first name, then surname: \n";
  std::cin >> first_name >> surname;
  int i = search_contact(v,first_name,surname);
  if (i != -1){
    std::cout << "email: " << v[i].email << std::endl;
    std::cout << "phone: " << v[i].phone << std::endl;
  }
  else{
    std::cout << "contact not found\n";
  }
}
/**Contact details
## Read and print
Consider a database of contact details (first name, surname, email address, phone number) on a text file. For example the content could be:

Alexander Fleming a.fleming@imperial.ac.uk 02075942243
Herbert Wells h.wells@imperial.ac.uk 02075945768
Alfred Whitehead a.whitehead@imperial.ac.uk 02075945861

Define a structured data type Contact with fields for first name, surname, email address, phone number (all of type std::string). Write a program which reads the contact details from the text file, stores them in a vector of Contact and then prints them.

## Search a contact
Write a function which returns the index of the contact with the given first_name and surname, if contained in contacts and -1 otherwise.

Write a main to test the function which reads the contacts from a text file, stores them in a vector, then asks the user to enter a first name and a surname and finally prints the full contact details, if found, and “contact not found” otherwise.**/