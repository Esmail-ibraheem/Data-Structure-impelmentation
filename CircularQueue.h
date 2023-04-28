#define Circular_Queue 
#include<iostream>

const int Size4 = 5 ;
class Queue2{
    public:
        struct queue{
        int Items[Size4] ; 
        int Rear , Front , Counter ; 
    };
        void ResetTheQueue(queue *queuepointer){
            queuepointer->Rear = 0 ;
            queuepointer->Front = 0 ;
            queuepointer->Counter = 0 ;
        }
        void EnqueueIntoQueue(queue *queuepointer , int element){
            if(queuepointer->Counter < Size4){
                if(queuepointer->Rear>= Size4){
                    queuepointer->Rear = 0 ;
                }
                else{
                    queuepointer->Items[queuepointer->Rear++]  = element; 
                    queuepointer->Counter++ ; 
                }
            }
            else{
                std::cout<< "The Queue is OverFllow\n" ; 
            }
        }
        int DequeueFromQueue(queue *queuepointer){
            if(queuepointer->Counter > 0 ){
                if(queuepointer->Front >= Size4){
                    queuepointer->Front = 0 ;
                }
                else{
                    queuepointer->Counter-- ;
                       return queuepointer->Items[queuepointer->Front++] ; 
                }
            }
            else{
                std::cout<< "The Queue is UnderFllow ):\n" ; 
                return -1 ; 
            }
        }
        void DisplayTheQueue(){
            queue q ;
            queue *queuepointer = &q ; 
            int Request;
            int element ;
            ResetTheQueue(queuepointer) ;
            do{ 
                std::cout<< "Enter 1 for Enqueue into the queue / 2 for dequeue from the queue / 3 for reset the queue / 0 for exit : " ;
                std::cin>> Request ; 
                switch(Request){
                    case 1:
                        std::cout<< "Enter the element to enqueue : " ;
                        std::cin>> element ;
                        EnqueueIntoQueue(queuepointer , element) ; 
                        std::cout<<"The number of elements in the queue are "<< queuepointer->Counter<< std::endl; 
                        break ;
                    case 2:
                        std::cout<< "Dequeued element is : " << DequeueFromQueue(queuepointer) << std::endl; 
                        std::cout<<"The number of elements in the queue are "<< queuepointer->Counter<< std::endl; 
                        break ;
                    case 3:
                        ResetTheQueue(queuepointer) ; 
                        break ;
                    case 0:
                        std::cout<< "You Welcome (:\n" ; 
                }
            }while(Request != 0) ; 
        }
};
