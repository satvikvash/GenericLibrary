#include<stdio.h>
#include<tm_dll.h>

int main()
{
int i1,i2,i3,i4,i5,i6;
int *x;
bool succ;
DoublyLinkedList *list1;
DoublyLinkedListReverseIterator iter;

list1=createDoublyLinkedList(&succ);
if(succ==false)
{
printf("Unable to create list\n");
return 0;
}
i1=100;
i2=200;
i3=300;
i4=400;
i5=500;
i6=600;

addToDoublyLinkedList(list1,(void *)&i1,&succ);
if(succ) printf("%d added to list1\n",i1);
addToDoublyLinkedList(list1,(void *)&i2,&succ);
if(succ) printf("%d added to list1\n",i2);
addToDoublyLinkedList(list1,(void *)&i3,&succ);
if(succ) printf("%d added to list1\n",i3);
addToDoublyLinkedList(list1,(void *)&i4,&succ);
if(succ) printf("%d added to list1\n",i4);
addToDoublyLinkedList(list1,(void *)&i5,&succ);
if(succ) printf("%d added to list1\n",i5);
addToDoublyLinkedList(list1,(void *)&i6,&succ);
if(succ) printf("%d added to list1\n",i6);

iter=getDoublyLinkedListReverseIterator(list1,&succ);
if(succ)
{
while(hasPreviousInDoublyLinkedList(&iter))
{
x=(int *)getPreviousElementFromDoublyLinkedList(&iter,&succ);
printf("%d\n",*x);
}
}
printf("Destroying List\n");
destroyDoublyLinkedList(list1);
return 0;
}