#define LinearQueue
#include<iostream>

const int Size3 = 5 ;
class Queue{
    public:
        struct queue{
            int Items[Size3] ; 
            int Rear , Front; 
        };
        void ResetTheQueue(queue *queuepointer){
            queuepointer->Rear = 0 ;
            queuepointer->Front = 0 ;
        }
        void EnqueueIntoQueue(queue *queuepointer , int element){
            if(queuepointer->Rear>= Size3){
                std::cout<< "The Queue is OverFllow\n" ; 
            }
            else{
                queuepointer->Items[queuepointer->Rear++]  = element; 
            }
        }
        int DequeueFromQueue(queue *queuepointer){
            if(queuepointer->Front >= Size3){
                std::cout<< "The Queue is UnderFllow ):\n" ; 
                return -1 ;
            }
            else{
                return queuepointer->Items[queuepointer->Front++] ; 
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
                        break ;
                    case 2:
                        std::cout<< "Dequeued element is : " << DequeueFromQueue(queuepointer) << std::endl; 
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
