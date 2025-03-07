#include <string>   
#ifndef CONTACT_H
#define CONTACT_H
class Contact  
{  
        private:  
          std::string first_name ;   
          std::string last_name ;   
          std::string nick_name ;  
          std::string darkest_secret;   
        public:   
        Contact() { 
        }  ;      
        ~Contact()  ;   
        Contact(std::string f_name ,  std::string l_name ,  std::string  n_name  , std::string  secret ) ;    
        std::string  get_first_name();     
        std::string  get_last_name();   
        std::string  get_nickname();    
        std::string  get_darkest_secret();      
   } ;     
#endif   