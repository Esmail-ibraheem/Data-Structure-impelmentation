#include<iostream>
#include<fstream>
#include "Tree.h"
#include "StackNum.h"
#include "StackWord.h"
#include "LinearQueue.h" 
#include "CircularQueue.h"

int main(void){
    int Data_Structure_Type; 
    int Stack_Type ;
    int QueueType ; 

    std::cout<< "\t\t\t******************************************************\n" ;
    std::cout<< "\t\t\t| Data Structures : Stack , Queue , Linkedlist , Tree|\n" ;
    std::cout<< "\t\t\t******************************************************\n" ;
    std::cout<< std::endl; 

    do{
        std::cout<<"---------------------------------------------------------------------------------------------------------------\n" ;
        std::cout<< "Which Type of data structures you want : \n" << "1) Stack \n" << "2) Queue \n" << "3) LinkedList\n" << "4) Tree\n" << "0) exit\n" ;
        std::cin>> Data_Structure_Type ; 
        switch(Data_Structure_Type){
            case 1:
                std::cout<< "The main idea about the stack is First In Last Out (FILO)\n" ; 
                std::cout<< "some applications about the stack : \n" << "1) Noraml Stack \n" << "2) Check if the word is palindrome or not \n" << "3) Infix to postfix\n" ;
                std::cout<< "* it uses in web browsing \n" << "* BackTracking algorithm\n etc..." ; 
                std::cin>> Stack_Type ;
                switch(Stack_Type){
                    case 1 :
                        StackNum::Stack stack ;
                        stack.DisplayTheStackNumebrs() ; 
                        break ;
                    case 2 :
                        StackWord::Stack2 stack2 ;
                        stack2.DisplayTheStackWord() ; 
                        break ; 

                }
            break ; 
            case 2 :
                std::cout<< "The main idea about the queue is First In First Out (FIFO)\n" ;
                std::cout<< "Types of Queue :  \n" << "1) Linear Queue \n" << "2) Circular Queue \n" << "* it uses in Operating Systems\n" ;
                std::cin>> QueueType ; 
                switch(QueueType){
                    case 1:
                        LinearQueue::Queue queue ;
                        queue.DisplayTheQueue() ; 
                        break ;
                    case 2:
                        Circular_Queue::Queue2 queue2 ;
                        queue2.DisplayTheQueue() ; 
                        break ; 
                }
            break ;
            case 3:
                std::cout<< "the main idea about the linked list is: Solved the static size of the stack and the queue by using the linked list you can make the stack and the queue are Dynamic\n" ; 
                std::cout<< "the code in another file called linked_list\n" ; 
                break ;
            case 4:
                Tree::Binary_Tree tree ; 
                tree.Display_BinaryTree() ;   
                break ; 
        }
    }while(Data_Structure_Type != 0) ;
    
     
}