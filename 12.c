#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
   int item;
       struct node *left,*right;
} ;
struct node* new(int x)
{
    struct node *p=malloc(sizeof(struct node));
    p-> item=x;
    p->left=p->right=NULL;
    return p;
}
     int main()
     {
        struct node *root=new(50);
        root->left=new(24);
         root->right=new(56);
          root->left->left=new(34);
           root->left->right=new(4);
            root->right->left=new(14);
             root->right->right=new(94);
             int key;
             printf("root=%d\n" , root->item);
             printf("left child=%d\n" , root->left->item);
             printf("right child=%d\n" , root->right->item);
             printf("=%d\n" , root->right->item);
         return 0;   
     }  
 
    
       