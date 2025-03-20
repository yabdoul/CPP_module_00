/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabdoul <yabdoul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:28:21 by yabdoul           #+#    #+#             */
/*   Updated: 2025/03/18 02:32:44 by yabdoul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        std::string  get_first_name() const ;     
        std::string  get_last_name()  const ;   
        std::string  get_nickname()   const ;    
        std::string  get_darkest_secret() const ;      
   } ;     
#endif   