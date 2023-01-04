
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

void Traversal(struct Node* Node){
  if(Node != NULL) {
    printf("%d\t",Node->data);
    Traversal(Node->next);
  }
}
int main() 
{

    struct Node* N1 ;
    struct Node* N2 ;
    struct Node* N3 ;
    struct Node* N4 ;
    struct Node* N5 ;
    struct Node* N6 ; 

    N1 = (struct Node*) malloc(sizeof(struct Node));
    N2 = (struct Node*) malloc(sizeof(struct Node));
    N3 = (struct Node*) malloc(sizeof(struct Node));
    N4 = (struct Node*) malloc(sizeof(struct Node));
    N5 = (struct Node*) malloc(sizeof(struct Node));
    N6 = (struct Node*) malloc(sizeof(struct Node));
    /*
            2
           /|\ 
          1 4 5 
             /
             6
           
    
    */  
   N2->data = 2;
   N2->next = N1;
   N1->data = 1;
   N1->next = N4;
   N4->data = 4;
   N4->next= N5;
   N5->data = 5;
   N5->next = N6;
   N6->data = 6; 
   N6->next = NULL;

   Traversal(N2); 

   return 0;


   
}