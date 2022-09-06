#include<tm_stack.h>
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

Stack *stack;
stack=createStack(&succ);
if(stack==false)
{
printf("Unable to create Stack\n");
return 0;
}

pushOnStack(stack,&x1,&succ);
if(succ) printf("%d pushed on stack\n",x1);
else printf("%d unable to pushed on stack\n",x1);

pushOnStack(stack,&x2,&succ);
if(succ) printf("%d pushed on stack\n",x2);
else printf("%d unable to pushed on stack\n",x2);

pushOnStack(stack,&x3,&succ);
if(succ) printf("%d pushed on stack\n",x3);
else printf("%d unable to pushed on stack\n",x3);

pushOnStack(stack,&x4,&succ);
if(succ) printf("%d pushed on stack\n",x4);
else printf("%d unable to pushed on stack\n",x4);

printf("Size of Stack : %d\n",getSizeOfStack(stack));
if(isStackEmpty(stack)) printf("Stack is Empty\n");
else printf("Stack is not Empty\n");

x=(int *)elementAtTopOfStack(stack,&succ);
printf("Element at top of stack is %d\n",*x);
printf("Now Popping all elements from stack\n");

while(!isStackEmpty(stack))
{
x=(int *)popFromStack(stack,&succ);
printf("%d popped from stack\n",*x);
}
destroyStack(stack);
return 0;
}