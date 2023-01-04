#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *Left;
    struct Node *Right;
};
struct Node* createNode(int data){
    struct Node *root;
    root = (struct Node*)malloc(sizeof(struct Node));
    root->data = data;
    root->Left = NULL;
    root->Right = NULL;
    return root;
}
void Postorder(struct Node* root)
{
    if(root!=NULL){
        Postorder(root->Left);
        Postorder(root->Right);
        printf("%d\t",root->data);
    }
}
void Preorder(struct Node* root)
{
    if(root!=NULL){
        printf("%d\t",root->data);
        Preorder(root->Left);
        Preorder(root->Right);
    
    }
}
void Inorder(struct Node* root)
{
    if(root!=NULL){
        Inorder(root->Left);
        printf("%d\t",root->data);
        Inorder(root->Right);
    }
}
int main() 
{
    struct Node *p1 = createNode(4);
    struct Node *p2 = createNode(1);
    struct Node *p3 = createNode(6);
    struct Node *p4 = createNode(5);
    struct Node *p5 = createNode(2); 

    /*
        4
       / \  
      1   6   BINARY TREE.
      /\  
      5 2
    */

    p1->Left = p2;
    p1->Right = p3;
    p2->Left = p4;
    p2->Right = p5; 

    Preorder(p1);
    printf("\n");
    Postorder(p1);
    printf("\n");
    Inorder(p1); 

    return 0;

}


