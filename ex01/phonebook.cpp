/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <yabdoul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 14:57:17 by yabdoul           #+#    #+#             */
/*   Updated: 2025/03/18 02:37:37 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"  
#include "contact.hpp"
#include <iostream>   
#include <iomanip>  
using namespace std ;    
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
Contact PhoneBook::get_contact(int index) 
{ 
    return Contacts[index] ;   
}   
int PhoneBook::get_contacts_num() 
{ 
    return contacts_num  ;   
} 
void string_max_len(std::string str , int max_len) 
{ 
    if( (int) str.length() > max_len) 
    { 
        std::cout<<str.substr(0,max_len-1)  ; 
    } 
    else
    { 
        std::cout<<str    ; 
    } 
}     
void print_contact (Contact contacts[]  ,   int index   )  
{   
       cout<<"First name : "<<contacts[index].get_first_name()<<endl   ;  
       cout<<"Last name : "<<contacts[index].get_last_name()<<endl   ;
       cout<<"Nickname : "<<contacts[index].get_nickname()<<endl   ;
       cout<<"Darkest secret : "<<contacts[index].get_darkest_secret()<<endl   ;    
}
void PhoneBook::HandleCmd(std::string  cmd  )  
   {   
            if(cmd.compare("SEARCH")  ==  0  )   
                 {  
                    int id_contact ;    
                    this->ShowAll() ;   
                    std::cin>>id_contact ;        
                    print_contact(Contacts , id_contact-1)   ; 
                 }   
            else if(cmd.compare("ADD")  ==  0  )  
                {  
                    std::string f_name , l_name , n_name , secret ;  
                    std::cout<<"Enter first name:\n" ;  
                    std::cin>>f_name ;  
                    std::cout<<"Enter last name:\n" ;  
                    std::cin>>l_name ;  
                    std::cout<<"Enter nickname:\n" ;  
                    std::cin>>n_name ;  
                    std::cout<<"Enter darkest secret:\n" ;  
                    std::cin>>secret ;  
                    Contact contact = Contact(f_name,l_name,n_name,secret) ;  
                    this->add_contact(contact) ;  
                }  
            else if(cmd.compare("EXIT")  ==  0  )  
                {  
                    std::cout<<"Goodbye\n" ;  
                    return ;    
                }
            else
                {  
                    std::cout<<"Invalid command\n" ;  
                }
        
      }
void truncateAndPrint(const std::string& str, int width) {
    if ( (int)  str.length() > width) {
        std::cout << std::setw(width) << std::right << str.substr(0, width - 1) + '.';
    } else {
        std::cout << std::setw(width) << std::right << str;
    }
}

void PhoneBook::ShowAll()
{  
   if(this->contacts_num  == 0  )  
    {  
        std::cout <<"| phonebook  is empty |\n" ;       
        return ;     
    } 
    std::cout << "------------------------------------------------------------\n";
    std::cout << "| Index | First Name  | Last Name   | Nicknam |Darkest Secret|\n";
    std::cout << "------------------------------------------------------------\n";
    for (int i = 0; i < get_contacts_num(); i++)  
    {   
        std::cout << "| " << std::setw(5) << std::right << i + 1 << " | ";
        truncateAndPrint(Contacts[i].get_first_name(), 10);
        std::cout << " | ";
        truncateAndPrint(Contacts[i].get_last_name(), 10);
        std::cout << " | ";
        truncateAndPrint(Contacts[i].get_nickname(), 10) ;   
        std::cout << " | ";
        truncateAndPrint(Contacts[i].get_darkest_secret(), 10);
        std::cout << " |\n";
    }
        std::cout << "------------------------------------------------------------\n"; 
        std::cout<<"Enter the index of the contact you want to see\n"   ;  
}

void ShowMenu()
{  
     std::cout<<"Enter ADD to add a contact\n" ;  
     std::cout<<"Enter SEARCH to show all contacts\n" ;  
     std::cout<<"Enter EXIT to exit\n" ;   
     std::cout<<"\n" ;
}  


int main( ) 
 {     
    PhoneBook  phone_book= PhoneBook() ;   
    std::string cmd    ;    
    std::cout<<"Hello in your phonebook\n" ;
    ShowMenu() ;    
     while(std::cin>>cmd) 
     {
          phone_book.HandleCmd(cmd) ;  
     }   
    }    


