#include<stdio.h>
#include<tm_sll.h>

int main()
{
int i1,i2,i3,i4,i5,i6,y;
int *x;
bool succ;
SinglyLinkedList *list1;
SinglyLinkedListIterator iter;
list1=createSinglyLinkedList(&succ);

/*
SinglyLinkedList *list1,*list2;
list1=createSinglyLinkedList(&succ);
list2=createSinglyLinkedList(&succ);
*/
i1=100;
i2=200;
i3=300;
i4=400;
i5=500;
i6=600;

addToSinglyLinkedList(list1,(void *)&i1,&succ);
if(succ) printf("%d added to list 1\n",i1);
else printf("%d not added to list 1\n",i1);

addToSinglyLinkedList(list1,(void *)&i2,&succ);
if(succ) printf("%d added to list 1\n",i2);
else printf("%d not added to list 1\n",i2);

addToSinglyLinkedList(list1,(void *)&i3,&succ);
if(succ) printf("%d added to list 1\n",i3);
else printf("%d not added to list 1\n",i3);

addToSinglyLinkedList(list1,(void *)&i4,&succ);
if(succ) printf("%d added to list 1\n",i4);
else printf("%d not added to list 1\n",i4);

addToSinglyLinkedList(list1,(void *)&i5,&succ);
if(succ) printf("%d added to list 1\n",i5);
else printf("%d not added to list 1\n",i5);

addToSinglyLinkedList(list1,(void *)&i6,&succ);
if(succ) printf("%d added to list 1\n",i6);
else printf("%d not added to list 1\n",i6);

/*
appendToSinglyLinkedList(list1,list2,&succ);
if(succ) printf("Appended\n");
else printf("Unable to append \n");

printf("Size of List1 : %d\n",getSizeOfSinglyLinkedList(list1));

for(y=0;y<getSizeOfSinglyLinkedList(list1);y++)
{
x=(int *)getFromSinglyLinkedList(list1,y,&succ);
printf("%d\n",*x);
}
*/
iter=getSinglyLinkedListIterator(list1,&succ);
if(succ)
{
while(hasNextInSinglyLinkedList(&iter))
{
x=(int *)getNextElementFromSinglyLinkedList(&iter,&succ);
printf("%d\n",*x);
}
}
printf("Destroying List\n");
destroySinglyLinkedList(list1);
return 0;
}