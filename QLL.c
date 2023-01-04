// print n number of nodes.
# include<stdio.h>
# include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head;
struct node *ptr; 
int main()
{
    int n,i;
    head = (struct node*)malloc(sizeof(struct node));
    ptr = head;
    ptr->data = 1;
    ptr->next = NULL;
    printf("How many  nodes you want to make\n");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
       ptr->next = (struct node*)malloc(sizeof(struct node));
       ptr = ptr->next;
       printf("Enter the nodes value:\n");
       scanf("%d",&ptr->data);
        
    }
    ptr->next = NULL; 

     ptr= head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
         ptr = ptr->next;
    }
    return 0;
}