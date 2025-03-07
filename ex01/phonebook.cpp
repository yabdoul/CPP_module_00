#include "phonebook.hpp"  
#include "contact.hpp"
#include <iostream>   
#include <iomanip> 
PhoneBook::PhoneBook()
 {    
          contacts_num =  0 ;      
          std::cout<<"CREATED : Empty phonebook\n" ;    
 } 
 PhoneBook::~PhoneBook() 
     {  
          std::cout<<"Au Revoir !!\n" ;   
     } 

void  PhoneBook::add_contact(Contact contact )  
{  
          std::cout<<"contact added succesfully !\n" ;   
          Contacts[this->contacts_num]  =  contact ;    
          contacts_num++ ;   
} 


void PhoneBook::ShowAll()
{  
       int i = 0 ;   
     std::cout << "------------------------------------------------------------\n";
    std::cout << "| Index | First Name  | Last Name   |  Nickname   |\n";
    std::cout << "------------------------------------------------------------\n";
       for (int i = 0; i < contacts_num; i++) {
        std::cout << "| " << std::setw(5) << i + 1 << " | "
                  << std::setw(10) << Contacts[i].get_first_name() << " | "
                  << std::setw(10) << Contacts[i].get_last_name() << " | "
                  << std::setw(10) << Contacts[i].get_nickname() << " |\n";
    }
        std::cout << "------------------------------------------------------------\n";
}  

void ShowMenu()
{  
     std::cout<<"Enter ADD to add a contact\n" ;  
     std::cout<<"Enter SEARCH to show all contacts\n" ;  
     std::cout<<"Enter EXIT to exit\n" ;  
}
int main( ) 
 {     
     PhoneBook  phone_book= PhoneBook() ;   
     char * cmd  ;    
     std::cout<<"Hello in your phonebook\n" ;
     while(1) 
     {
          ShowMenu() ;    
          std::cin>>cmd  ;         
          phone_book.HandleCmd(cmd) ;     
     }   
    }    