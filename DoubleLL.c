#include<stdio.h>
#include<stdlib.h>
struct DoubleLL
{
   int info;
   struct DoubleLL * next;
   struct DoubleLL * previous;
}; 
void Travere(struct DoubleLL *ptr){
   while(ptr != NULL){
    printf("Elements is : %d\n ",ptr->info);
    ptr->previous = ptr;
    ptr = ptr->next; 
   }
} 
 struct DoubleLL * delete(struct DoubleLL * head){
    struct DoubeLL * ptr = head;
    head->previous=head;
    head = head->next;
    free(ptr);
    return head;
 }
int main()
{
   struct DoubleLL * head; 
   struct DoubleLL * second;  
   struct DoubleLL * third; 
   struct DoubleLL * fourth;  
   head = (struct DoubleLL*)malloc(sizeof(struct DoubleLL));
   second = (struct DoubleLL*)malloc(sizeof(struct DoubleLL));
   third = (struct DoubleLL*)malloc(sizeof(struct DoubleLL));
   fourth = (struct DoubleLL*)malloc(sizeof(struct DoubleLL));  
   head->info = 10;
   head->next = second;
   head->previous = NULL;
    second->info = 20;
   second->next = third;
   second->previous = head; 
   third->info = 30;
   third->next = fourth;
   third->previous = second;
   fourth->info = 40;
   fourth->next = NULL; 
   fourth->previous = third; 

    printf("Insert Between value\n");
    second->info = 50;
    second->next =  third;
    second->previous = head;  
    Travere(head); 
     Travere(head);  
    printf("Delete elements \n");
    head = delete(head); 

    Travere(head); 
    printf("Delete  2 elements  \n");
    head = delete(head); 

    Travere(head); 
     printf("Delete 3 elements \n");
    head = delete(head); 

    Travere(head);  
   
   
   
   return 0;

}
