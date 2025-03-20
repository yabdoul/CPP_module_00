/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <yabdoul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:28:33 by yabdoul           #+#    #+#             */
/*   Updated: 2025/03/18 00:28:34 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp" 
#include <iostream> 
#include <cstring>

class PhoneBook 
{  
      private:  
        Contact Contacts[8] ; 
        int contacts_num   ;  
      public: 
        PhoneBook() ;  
        ~PhoneBook() ;
        void add_contact(Contact contact) ;
        int get_contacts_num() ;
        Contact get_contact(int index ) ;
        void ShowAll() ;    
        void  HandleCmd(std::string  cmd ) ;
        void  ShowMenu() ;  
} ;     