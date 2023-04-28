#define StackWord 
#include<iostream>

const int Size2 = 5 ;
class Stack2{
    public:
        struct StackForWord{
        char Items[Size2] ;
        int Top ;
};
        void ResetTheStack(StackForWord *StackPointerForWord){
            StackPointerForWord->Top = -1 ;
        }
        void PushIntoStack(StackForWord *StackPointerForWord , int element){
            if(StackPointerForWord->Top != Size2-1){
                StackPointerForWord->Items[++StackPointerForWord->Top] = element ;
            }
            else{
                std::cout<< "The Stack is Overfllow ): \n" ;
            }
        }
        char PopFromStack(StackForWord *StackPointerForWord){
            if(StackPointerForWord->Top != -1){
                return StackPointerForWord->Items[StackPointerForWord->Top--] ;
            }
            else{
                std::cout<< "The Stack is UnderFllow ):\n" ;
                return ' ';
            }
        }
        void DisplayTheStackWord(){
            StackForWord Stack ;
            StackForWord *StackPointerForWord = &Stack; 
            std::string input ; 
            std::string res ; 
            ResetTheStack(StackPointerForWord) ;
            std::cout<< "Enter the word to check if the word is palindrome or not : " ;
            std::cin>> input ; 

            for(int i = 0 ; i < input.length() ; i++){
                PushIntoStack(StackPointerForWord , input[i]) ; 
            }
            for(int i = 0 ; i < input.length() ; i++){
                res = res+PopFromStack(StackPointerForWord) ; 
            }
            std::cout<< "Forword : " << input << std::endl; 
            std::cout<< "BackWord : " << res << std::endl; 
            if(input == res){
                std::cout<< "The input is pailndrome\n" ;
            }
            else{
                std::cout<< "The input is not palindrome\n" ; 
            }
        }
};
