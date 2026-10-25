#include<stdio.h>
//#include<conio.h>
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
int bup(struct node *root,int key)
{
    if (!root)
    return 0;
    return bup(root->left,key)||bup(root->right,key)||root->item==key;
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
             printf("enter the element:");
             scanf("%d" ,&key);
             printf(bup(root,key) ? "found\n": "not found\n");
            return 0;
     }  
 
    
       