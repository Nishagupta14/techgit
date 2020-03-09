#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;
void insert();
int deletion();
void display();
int main()
{
int ch,val;
do
    {

        printf("\n1.INSERT\n");
        printf("2.DELETE\n");
        printf("3.DISPLAY\n");
        printf("4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            insert();
                break;
        case 2:
            val=deletion();
            if(val!=-1)
            {

                printf("deleted element is %d",val);
            }
                break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        }

    }while (ch!=4);
}
void insert()
{

    int num;
    printf("enter no to be inserted\n");
    scanf("%d",&num);
    if(front==0&& rear==MAX-1)
    {

        printf("\noverflow\n");
    }
    else if(front==-1 &&rear==-1)
    {

        front=rear=0;
        queue[rear]=num;

    }
    else
    {

        rear++;
        queue[rear]=num;
    }
}
void display()
{

    int i;
    if(front==-1 && rear==-1)
    {

        printf("\n queue is empty\n");
    }
  else
  {if(front<rear)
{

      for(i=front;i<=rear;i++)
      {

          printf("\t%d",queue[i]);
      }
}

     else{
    for(i=front;i<MAX;i++){
      printf("\t%d",queue[i]);
    }
    for(i=0;i<=rear;i++)
    {
        printf("\t%d",queue[i]);
    }

}
}
}
int deletion()
{
    int val;

    if(front==-1&&rear==-1)
    {


        printf("underflow\n");
    }
    val=queue[front];
    if(front==rear)
    {

        front=rear=-1;

    }
    else
    {
        if(front==MAX-1)
        {
          front=0;

        }
        else{
            front++;
        }
    }
    return val;
    }




