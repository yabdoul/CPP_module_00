#include "contact.hpp" 
#include <iostream> 
#include <cstring>

class PhoneBook {  
      private:  
        Contact Contacts[8] ; 
        int contacts_num  =   0  ;  
      public: 
        PhoneBook()      ;  
       ~PhoneBook()    ;     
      void add_contact(Contact contact)  ;     
      int get_contacts_num() 
        { 
          return contacts_num  ;   
        }
      Contact get_contact(int index ) 
        { 
           return Contacts[index] ;   
      }  ;        
      void ShowAll() ;    
      void  HandleCmd(char * cmd  ) 
      { 
            if(strcmp(cmd  , "SEARCH") ==  0  )   
                {  
                    this->ShowAll() ;  
                } 
                else if(strcmp(cmd , "EXIT") == 0 ) 
                { 
                    std::cout<<"Bye Bye"   ; 
                    return ;   
                 }  
                else if(strcmp(cmd , "ADD") == 0) 
                { 
                    std::string f_name , l_name , n_name , secret  ;  
                    std::cout<<"Enter first name" ;  
                    std::cin>>f_name ;   
                    if(f_name.length() == 0 ) 
                    { 
                        std::cout<<"First name is required\n" ; 
                        return ; 
                    }
                    std::cout<<"Enter last name" ;   
                    std::cin>>l_name ; 
                    std::cout<<"Enter nickname" ;   
                    std::cin>>n_name ; 
                    std::cout<<"Enter darkest secret" ; 
                    std::cin>>secret ;  
                    Contact c = Contact(f_name,l_name,n_name,secret) ; 
                    this->add_contact(c) ; 
                } 
                else
               { 
                    this->ShowAll()  ;    
                } 
      }
} ;     