#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
  int data;
  struct node*link;
  };
  struct node*top;

  void push();
 void pop();
  void display();
  int main()
  {

      int ch;
      do{
        printf("\n1.push\n");
        printf("\n2.pop\n");
        printf("\n3.display\n");
        printf("\n4.exit\n");


        printf("\nenter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
              push();
              break;
        case 2:
             pop();
              break;
        case 3:
               display();
               break;
        case 4:
              exit(0);
              break;

        }
      }while(ch!=4);
  }
  void push()
  {
    struct node *ptr;
    int val;
     ptr=(struct node*)malloc(sizeof(struct node));
      printf("enter new node value");
      scanf("%d",&val);

     ptr->data=val;
     if(ptr==NULL)
        {

             ptr->link=NULL;
             top=ptr;

        }
        else{

            ptr->link=top;
            top=ptr;
        }
     }
     void display()
     {

         struct node*ptr;
         printf("list stack is\n");
         ptr=top;
         if(top==NULL)
         {
             printf("stack is empty");
         }
         else{
         while(ptr!=NULL)
         {

             printf("%d\n",ptr->data);
             ptr=ptr->link;
         }
     }
     }
     void pop()
     {
          struct node*ptr;
        ptr=top;
         if(top==NULL)
         {

             printf("\nunderflow\n");

         }
         else{

         top=top->link;
         free(ptr);
     }
     }



