#include<stdio.h>
#include<stdlib.h>

void push(int A[],int *Top , int size){
    if(*Top==size-1){
        printf("Overflow");
        
    }
    else{
        (*Top)++;
        printf("Enter the element\n");
        scanf("%d",&A[*Top]);

    }

}
void pop (int A[],int *Top){
    if(*Top == -1){
        printf("Underflow");
    }
    else {
       
        printf("The delete element is %d\n",A[*Top]);
        (*Top--);
    }

    
}
void Travel(int A[],int Top){
   int i;
   if( Top ==-1 ){
    printf("Underflow");
   }
   else{
    for(i=Top;i>=1;i--){
        printf("%d\n",A[i]);
    }
   }
}

int main(){
    int n,choice,A[20],Top = -1,x;
    printf("Enter the size of a stack\n");
    scanf("%d",&n);
    do{
    printf("1 for push\n");
    printf("2 for pop\n");
    printf("3 for traval\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push(A,&Top,n);
        break;
    case 2: pop(A,&Top);
         break;
    case 3:
         Travel(A,Top);
    
    default:
        printf("Invalid");
        break;
    }
    printf("Do you want to continue press 7");
    scanf("%d",&x);
    
    }while (x==7);
    return 0;
}