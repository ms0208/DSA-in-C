// Linear Queue
#include<stdio.h>
 void Equeue(int A[],int *Rear, int size){
    if(*Rear==size-1){
        printf("Overflow\n");
    }
    else{
        (*Rear)++;
        printf("Enter the elements\n");
        scanf("%d",&A[*Rear]);

    }
 }
 void Dequeue(int A[],int *Front,int *Rear){
    if(*Rear==*Front){
        printf("Underflow");
    }
    else{
        (*Front)++;
        printf("Delete the elements\n");
        printf("%d\n",A[*Front]);

       /* printf("Delete the elements\n");
        printf("%d\n",A[*Rear]);
        *Rear--;*/
        
    }
 }
 void Taverse(int A[],int Rear,int Front){
    if(Rear==Front){
       printf("Underflow\n");
    }
    else{
       for(int i=Front+1;i<=Rear;i++){
        printf("%d\t",A[i]);
       }
    }
 }
 void main()
 {
    int A[20],Rear,Front,size,choice,ch;
    Rear=-1;
    Front=-1;
    printf("Enter your size of stack\n");
    scanf("%d",&size);
    do{
        printf(" Main Menu \n");
        printf("1 for Equeue\n");
        printf("2 for Dequeue\n");
        printf("3 for Traverse\n");
        printf("4 for exit");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            Equeue(A,&Rear,size);
            break;
            case 2:
            Dequeue(A,&Front,&Rear);
            break;
            case 3:
            Taverse(A,Rear,Front);
            break;
            case 4:
            printf("Exit");
            break;
            default:
            printf("Invalid");
        }
        printf("Do want to continue press 7");
        scanf("%d",&ch);
    }while(ch==7);
 }