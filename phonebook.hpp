#include "contact.hpp" 
 
class PhoneBook {  
      private:  
        Contact Contacts[8] ; 
        int contacts_num ;  
      public: 
      PhoneBook()      ;  
      ~PhoneBook()    ;
      void add_contact(Contact contact)  ;   
      void search_contact()  ;  
} ;    