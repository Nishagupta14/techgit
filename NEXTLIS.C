# include<stdio.h>
#include<malloc.h>
void display();
void deletion();
void ins_at_beg();
void ins_at_any();
void ins_at_end();
struct node
{
 int data;
  struct node*next;
  };
  struct node *start=NULL;
  main()
  {
    int op,n,ch;



          do {
        printf("1.insert at beg\n2.insert at any\n3.insert at end\n4.deletion\n5.display\n6.exit");
        printf("\nenter option\n");
        scanf("%d", &op);
        switch (op)
{

                case 1:
                ins_at_beg();
                break;
                case 2:
                 ins_at_any();
                 break;
                 case 3:ins_at_end();
                 break;
                 case 5:
                     display();
                 break;

               case 4:
             deletion();
             break;
          case 6:
             exit(0);
             break;

        }  }
     while (op!=6);

    }


void ins_at_beg()
{
    struct node *ptr;
    int val;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&val);
    ptr->data=val;
    ptr->next=NULL;

        start=ptr;



}




void ins_at_end()
{
  struct node *temp,*ptr;
  int n;
   temp=(struct node *)malloc(sizeof(struct node));

  printf("enter value");
  scanf("%d",&n);
  temp->data=n;
  temp->next=NULL;
      ptr=start;
      while(ptr->next!=NULL)
      {
       ptr=ptr->next;
      }
       ptr->next=temp;
       temp=start;



    }


void ins_at_any()
{
     struct node *temp,*ptr;
     int pos,key;
     temp=(struct node*)malloc(sizeof(struct node()));
     printf("enter the value");
     scanf("%d",&key);
     printf("enter the position");
     scanf("%d",&pos);
     temp->data=key;
      temp->next=NULL;
         ptr=start;
         while(ptr->data!=pos&&ptr->next!=NULL)
         {
              temp->next=ptr->next;
             ptr->next=temp;
             ptr=ptr->next;
         }


         }



    void display() {
    struct node *temp;
    temp = start;
    if (temp == NULL) {
        printf("no elements\n");
        return;
    }
    printf("elements in linked list are\n");
    while (temp != NULL) {
        printf("%d->\n", temp->data);
        temp = temp->next;
    }
}
void deletion() {
    struct node  *temp;
    temp = start;
    start = start->next;
    temp->next = NULL;

}


