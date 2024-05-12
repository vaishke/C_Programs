#include<stdio.h>
#include<stdlib.h>
int a[100], n, elem, i, pos;

void create() 
{
printf("\nEnter the size of the array elements: ");
scanf("%d", &n);
printf("\nEnter the elements for the array:\n");
for(i=0; i<n; i++)
    scanf("%d", &a[i]);
} 

void display() 
{
int i;
printf("\nThe array elements are:\n");
for(i=0; i<n; i++)
    printf("%d\t", a[i]);
} 

void insert() 
{
printf("\nEnter the position for the new element: ");
scanf("%d", &pos);
printf("\nEnter the element to be inserted: ");
scanf("%d", &elem);
for(i=n-1; i>= (pos - 1); i--)
    a[i+1] = a[i];
a[pos - 1] = elem;
n = n+1;
}

void update() 
{
printf("\nEnter the position for updating element: ");
scanf("%d", &pos);
printf("\nEnter new element: ");
scanf("%d", &elem);
a[pos - 1] = elem;
}

void del()
{
printf("\nEnter the position of the element to be deleted: ");
scanf("%d", &pos);
elem = a[pos];
for(i=pos - 1; i<n-1; i++)
    a[i] = a[i+1];
n = n-1;
printf("\nThe deleted element is = %d", elem);
}

int main()
{
    int ch;
    do
    {
        printf("\n\n--------Menu-----------\n");
        printf(" 1. Create\n 2. Display\n 3. Insert\n 4. Update\n 5. Delete\n 6. Exit\n");
        printf("-------------------------------");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: insert();
                    break;
            case 4: update();
                    break;
            case 5: del();
                    break;
            case 6: exit(0);
                    break;
            default: printf("\nInvalid choice:\n");
                     break;
        }
 }

while(ch!=6);

}
