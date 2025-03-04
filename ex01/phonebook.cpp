#include "phonebook.hpp"  
#include "contact.hpp"
#include <iostream>   
PhoneBook::PhoneBook()
 {    
          this->contacts_num =  0 ;      
          std::cout<<"CREATED : Empty phonebook\n" ;    
 } 

void  PhoneBook::add_contact(Contact contact )  
{  
            Contacts[this->contacts_num]  =  contact ;    
            contacts_num++ ;   
} 
void search_contact(std::string name  ) 
{   
     int i =  0  ;    
     while(i <  this.contacts_num  )  
     {  
          if(name.compare(name , this->Contacts[contacts_num]->get_name()) )     
               { 
                     std::cout<<"i found it \n"  ;    
               }
          i++ ;  
     }
}
 int main( ) 
 {  
      
 }