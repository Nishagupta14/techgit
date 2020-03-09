#include<stdio.h>
#include<malloc.h>
void dins_at_beg();
void dins_at_end();
void ddisplay();
void ddelete_beg();
void ddelete_end();
void deletion();
void create();
struct node{
 int data;
 struct node *next;
 struct node *prev;
 };
 struct node *start=NULL;
int main()
{
  int ch;
  do{

  printf("\n1.insert at beg\n2.insert at end\n3.display\n4.delete beg\n5.delete end\n6.exit\n7.create\n8.deletion\n");
  printf("\nenter your choice\n");
  scanf("%d",&ch);
        switch(ch)
        {

      case 1:
            dins_at_beg();
            break;
      case 2:
            dins_at_end();
            break;
      case 3:
            ddisplay();
            break;
      case 4:
            ddelete_beg();
            break;
      case 5:
            ddelete_end();
            break;
      case 6:
        exit(0);
        break;
      case 7:
        create();

        break;
      case 8:
          deletion();

          break;

        }
     } while(ch!=8);
}
void dins_at_beg()
{
     int num;
 struct node *newnode,*ptr;
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter the data");
 scanf("%d",&num);
 newnode->data=num;
 if(start==NULL)
 {

  newnode->next=NULL;
  newnode->prev=NULL;
  start=newnode;

 }
  else{
  ptr=start;
  while(ptr->next!=NULL)
  {

      ptr=ptr->next;
  }
  start->prev=newnode;
  newnode->next=start;
  newnode->prev=NULL;
  }
 }



void ddisplay()
{

    struct node*ptr;
    ptr=start;
    printf("\nlist is\n");
    while(ptr!=NULL)
    {

        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}
void dins_at_end()
{

    struct node *ptr,*newnode;
    int num;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the data value\n");
    scanf("%d",&num);
    newnode->data=num;
    if(start==NULL)
    {

      newnode->next=NULL;
      newnode->prev=NULL;
      start=newnode;
      }
      else{
        ptr=start;
        while(ptr->next!=NULL)
        {

            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->prev=ptr;
        newnode->next=NULL;
      }
}
void ddelete_beg()
{

    struct node *ptr;
    ptr=start;
    start=start->next;
    start->prev=NULL;
    free(ptr);

}
void ddelete_end()
{

    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;

    }
    ptr->prev->next=NULL;
    free(ptr);
}
 void create()
{

    struct node *newnode,*ptr;
    int num;
    printf("\nenter -1 to end");
    printf("\nenter data\n");
    scanf("%d",&num);
    while(num!=-1){


    if(start==NULL)
    {

        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->prev=NULL;
        newnode->data=num;
        newnode->next=NULL;
        start=newnode;
    }
    else{
        ptr=start;
        newnode=(struct node*)malloc(sizeof(struct node));
         newnode->data=num;
         while(ptr->next!=NULL)
         {

              ptr=ptr->next;

         }
         ptr->next=newnode;
         newnode->prev=ptr;
         newnode->next=NULL;
    }
    printf("\n enter data\n");
    scanf("%d",&num);



    }


}
void deletion()
{

if(start==NULL)
{

    printf("empty list");
}
else{
    while(start!=NULL)
    {

    struct node *ptr;
    ptr=start;
    start=start->next;
    start->prev=NULL;
    free(ptr);

}

    }
}





