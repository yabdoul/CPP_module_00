/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <yabdoul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:28:19 by yabdoul           #+#    #+#             */
/*   Updated: 2025/03/18 00:28:20 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"  
 #include <iostream>  
Contact::Contact(std::string f_name ,  std::string l_name ,  std::string  n_name  , std::string  secret ): first_name(f_name) ,last_name(l_name),nick_name(n_name),darkest_secret(secret) { 
}   
Contact::~Contact() {}
std::string  Contact::get_first_name() 
{  
        return  first_name ;  
}  
std::string  Contact::get_last_name()
{  
        return last_name ;   
} 
std::string  Contact::get_nickname()
{  
        return nick_name ;  
} 

std::string  Contact::get_darkest_secret()
{ 
         return darkest_secret ;   
}   

 
