#define StackNum 
#include<iostream>

const int Size = 5 ; 
class Stack{
    public:    
        struct StackForNumbers{
            int Items[Size] ;
            int Top ;
        };
        void ResetTheStack(StackForNumbers *StackPointerForNumbers){
            StackPointerForNumbers->Top = 0 ;
        }
        void PushIntoStack(StackForNumbers *StackPointerForNumbers , int element){
            if(StackPointerForNumbers->Top != Size){
                StackPointerForNumbers->Items[++StackPointerForNumbers->Top] = element ;
            }
            else{
                std::cout<< "The Stack is Overfllow ): \n" ;
            }
        }
        int PopFromStack(StackForNumbers *StackPointerForNumbers){
            if(StackPointerForNumbers->Top != 0){
                return StackPointerForNumbers->Items[StackPointerForNumbers->Top--] ;
            }
            else{
                std::cout<< "The Stack is UnderFllow ):\n" ;
                return -1 ;
            }
        }
        void DisplayTheStackNumebrs(){ // main method
            StackForNumbers Stack ;
            StackForNumbers *StackPointerForNumbers = &Stack ;
            int Request ;
            int element ;
            ResetTheStack(StackPointerForNumbers) ;
            do{
                std::cout<< "Enter 1 For push a number into the stack / 2  For pop from the stack / 3  For reset the stack / 0  for exit "  ;
                std::cin>>Request ;
                switch(Request){
                    case 1:
                        std::cout<< "Push the element into the stack : " ;
                        std::cin>> element ;
                        PushIntoStack(StackPointerForNumbers , element) ; 
                        break ;
                    case 2:
                        std::cout<< "Poped element is : " << PopFromStack(StackPointerForNumbers) << std::endl; 
                        break ;
                    case 3:
                        ResetTheStack(StackPointerForNumbers) ;
                        break ;
                    case 0:
                        std::cout<< "Your Welcome (: \n" ;
                        break ;
                } 
            }while(Request != 0) ; 
        }
};
