#include"stdio.h"// Inclusion of Header File.

struct st //Definition of Structure.
{
    int info;
    struct st* next;
}a,b,c,*p;

int main()
{
    int x,y,z;
    printf("Enter Elements To be Inserted in Linked List:");
    scanf("%d %d %d",&x,&y,&z);
    a.info=x;
    b.info=y;
    c.info=z;
    p=&a;
    a.next=&b.info;
    b.next=&c.info;
    c.next=NULL;
    printf("Elements of Linked List:")
    while(p!=NULL)
    {
        printf("%d",p->info);
        p=p->next;
    }

    return 0;
}
