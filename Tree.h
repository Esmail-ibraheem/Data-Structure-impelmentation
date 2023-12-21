#define Tree 
#include<iostream>

class Binary_Tree{
    public:
        struct Node{
            int data ;
            Node *Left ;
            Node *Right ; 
        };
        void Create_BT(Node* &root , int data){
            Node *new_node = new Node ; 
            new_node->data = data ; 
            new_node->Left = NULL ; 
            new_node->Right = NULL ; 

            if(root == NULL){
                root = new_node ; 
            }
            else{        
                Node *Parnet = root ;
                while(true){
                    if(data < Parnet->data){
                        if(Parnet->Left == NULL){
                            Parnet->Left = new_node ;
                            return ;  
                        }
                        else{
                            Parnet = Parnet->Left ; 
                        }
                    }
                    else if(data > Parnet->data){
                        if(Parnet->Right == NULL){
                            Parnet->Right = new_node ; 
                            return ; 
                        }
                        else{
                            Parnet = Parnet->Right ; 
                        }
                    }
                    else{
                        std::cout<< "The number is already exist!in the tree\n" ; 
                    }
                } 
            }
        }
        //Diaply the tree using BST traversals and Rcusrsion algorithm  
        void PreOrder(Node *Parent){
            if(Parent != NULL){
                std::cout<< Parent->data << " " ; 
                PreOrder(Parent->Left) ; 
                PreOrder(Parent->Right) ; 
            }
        }
        void InOrder(Node *Parent){
            if(Parent != NULL){
                InOrder(Parent->Left) ; 
                std::cout<< Parent->data << " " ; 
                InOrder(Parent->Right) ; 
            }
        }
        void PostOrder(Node *Parent){
            if(Parent != NULL){
                PostOrder(Parent->Left) ; 
                PostOrder(Parent->Right) ; 
                std::cout<< Parent->data << " " ; 
            }
        }

        void Display_BinaryTree(){
            Node* root = NULL ; 
            Create_BT(root, 25);
	    Create_BT(root, 15);
            Create_BT(root ,10) ; 
	    Create_BT(root, 4);
	    Create_BT(root, 12);
	    Create_BT(root, 22);
	    Create_BT(root, 18);
	    Create_BT(root, 24);
            Create_BT(root, 50);
            Create_BT(root, 35);
            Create_BT(root, 31);
            Create_BT(root, 44);
            Create_BT(root, 70);
            Create_BT(root, 66);
            Create_BT(root, 90);

            std::cout<< "The tree displayed using BST traversals: \n" ; 
            std::cout<<std::endl; 
            
            std::cout<< "PreOrder: " ; 
            PreOrder(root) ; 
            
            std::cout<<std::endl ;
            std::cout<< "PostOrder: " ; 
            PostOrder(root) ;

            std::cout<<std::endl ;
            std::cout<< "InOrder: " ; 
            InOrder(root) ;

            std::cout<<std::endl; 
            getchar() ; 
        }
};
