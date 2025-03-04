#include <iostream> 
#include <cstring>

int  main(int  ac  , char ** av ) 
    {    
          if(!av[1]) 
                {   
                 std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" ;   
                 return 0 ;   
                }  
            if(strcmp(av[1] ,   "shhhhh... I think the students are asleep...") ==  0  )    
                { 
                  std::cout<<"SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\n"  ;    
                  return  0 ;   
                }  
            else if (strcmp(av[1] , "!" ) == 0  &&  strcmp(av[2] ,"Sorry students, I thought this thing was off.") == 0 )  
                  { 
                     std::cout<<"DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.\n" ;  
                    return  0;   
                   }   
    } 
