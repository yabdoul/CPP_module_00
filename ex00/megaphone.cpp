#include <iostream> 
#include <cstring>  

 void  str_to_upper(char *str) {
    size_t i = 0 ;
    while (str[i] ) {
             std::cout<<(char)std::toupper(str[i++])     ;   
    }
}
int  main(int  ac  , char ** av ) 
    {    
          if(!av[1]) 
                {   
                 std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" ;   
                 return 0 ;   
                }  
            else 
             {  
                   for(size_t i  = 1  ;  i <  ac  ;   i++  )  
                      {    
                             str_to_upper(av[i]);    
                      }
                             std::cout<<std::endl ;    
                
             }
    } 
