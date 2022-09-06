 #include<tm_queue.h>
#include<stdio.h>

int main()
{
int succ;
int x1,x2,x3,x4;
int *x;
x1=100;
x2=200;
x3=300;
x4=400;

Queue *queue;
queue=createQueue(&succ);
if(queue==false)
{
printf("Unable to create Queue\n");
return 0;
}

addToQueue(queue,&x1,&succ);
if(succ) printf("%d added to queue\n",x1);
else printf("%d unable to add to queue\n",x1);

addToQueue(queue,&x2,&succ);
if(succ) printf("%d added to  queue\n",x2);
else printf("%d unable to add to queue\n",x2);

addToQueue(queue,&x3,&succ);
if(succ) printf("%d added to  queue\n",x3);
else printf("%d unable to add to queue\n",x3);

addToQueue(queue,&x4,&succ);
if(succ) printf("%d add to queue\n",x4);
else printf("%d unable to add to queue\n",x4);

printf("Size of Queue : %d\n",getSizeOfQueue(queue));
if(isQueueEmpty(queue)) printf("Queue is Empty\n");
else printf("Queue is not Empty\n");

x=(int *)elementAtFrontOfQueue(queue,&succ);
printf("Element at front of queue is %d\n",*x);
printf("Now Removing all elements from queue\n");

while(!isQueueEmpty(queue))
{
x=(int *)removeFromQueue(queue,&succ);
printf("%d remove from queue\n",*x);
}
destroyQueue(queue);
return 0;
}