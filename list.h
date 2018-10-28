

    #include <stdlib.h>
     
    struct node {
       int data;
       struct node *next;
    };
     
    struct node *start = NULL;
    void insert_at_begin(int);
    void insert_at_end(int);
    void traverse();
    void delete_from_begin();
    void delete_from_end();
    int count = 0;

 void insert_at_begin(int x) {
       struct node *t;
       
       t = (struct node*)malloc(sizeof(struct node));
       count++;
         
       if (start == NULL) {
          start = t;
          start->data = x;
          start->next = NULL;
          return;
       }
       
       t->data = x;
       t->next = start;
       start = t;
    }
     
    void insert_at_end(int x) {
       struct node *t, *temp;
       
       t = (struct node*)malloc(sizeof(struct node));
       count++;
       
       if (start == NULL) {
          start = t;
          start->data = x;
          start->next = NULL;
          return;
       }
       
       temp = start;
       
       while (temp->next != NULL)
          temp = temp->next;  
       
       temp->next = t;
       t->data    = x;
       t->next    = NULL;
    }
     
    void traverse() {
       struct node *t;
       
       t = start;
       
       if (t == NULL) {
          printf("Linked list is empty.\n");
          return;
       }
       
       printf("There are %d elements in linked list.\n", count);
       
       while (t->next != NULL) {
          printf("%d\n", t->data);
          t = t->next;
       }
       printf("%d\n", t->data);
    }
     
    void delete_from_begin() {
       struct node *t;
       int n;
       
       if (start == NULL) {
          printf("Linked list is already empty.\n");
          return;
       }
       
       n = start->data;
       t = start->next;
       free(start);
       start = t;
       count--;
       
       printf("%d deleted from beginning successfully.\n", n);
    }
     
    void delete_from_end() {
       struct node *t, *u;
       int n;
         
       if (start == NULL) {
          printf("Linked list is already empty.\n");
          return;
       }
       
       count--;
       
       if (start->next == NULL) {
          n = start->data;
          free(start);
          start = NULL;
          printf("%d deleted from end successfully.\n", n);
          return;
       }
       
       t = start;
       
       while (t->next != NULL) {
          u = t;
          t = t->next;
       }
       
       n = t->data;
       u->next = NULL;
       free(t);
       
       printf("%d deleted from end successfully.\n", n);
    }
    
void insert_at_pos(int x,int pos)
{
int i;
struct node *t, *temp;
t = (struct node*)malloc(sizeof(struct node));
count++;
temp=start;
if((pos>(count+1))||(pos==0))
{
printf("INVALID POSITION");
return;
}
else
{
if(pos==1)
{
t->next=start;
t->data=x;
start->t;
}
else
{
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
t->next=temp->next;
t->data=x;
temp->next=t;
}
return;
}
}
