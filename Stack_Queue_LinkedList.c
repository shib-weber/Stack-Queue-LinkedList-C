#include<stdio.h>
void stack(){
    int c,size,top=-1,n;
    printf("Enter the Size of the Stack\t");
    scanf("%d",&size);
    int ar[size];
    do{
        printf("Enter Your Choice \n1 for push \n2 for pop \n3 for display \n4 for exit\n");
        scanf("%d",&c);
        switch(c){
            case 1 :
                printf("Enter a Number\t");
                scanf("%d",&n);
                if(top == size-1){
                    printf("Stack Overflow\n");
                }else{
                    ar[++top] = n;
                }
            break;
            case 2: 
                if(top == -1){
                    printf("Stack Underflow\n");
                }else{
                    printf("The Popped Element is %d\n",ar[top--]);
                }
            break;
            case 3: 
                if(top == -1){
                    printf("Stack Underflow\n");
                }else{
                    for(int i =size-1 ;i>=0;i--){
                        if(ar[i]==0){
                            continue;
                        }else{
                            printf("%d\n",ar[i]);
                        }
                    }
                }
            break;
            case 4: break;
            default: printf("No other choice");
            break;
    }
    }while(c != 4);

}

void queue(){
    int size,c,n,f=-1,r=-1;
    printf("Enter the size of the Queue \t");
    scanf("%d",&size);
        int ar[size];
    do{
        printf("Enter Your Choice \n1 for Enqueue \n2 for Dequeue \n3 for Display \n4 for exit\n");
        scanf("%d",&c);
        switch(c){
            case 1 :
                if(r==size-1){
                    printf("Queue is Full");
                }else{
                    printf("Enter a Number\t");
                    scanf("%d",&n);
                    if(f==-1&&r==-1){
                        f=0;r=0;
                        ar[r]=n;
                    }else{
                        ar[++r]=n;
                    }
                }
            break;
            case 2: 
                if(f == -1 || f == size || f>r){
                    printf("Queue is Empty\n");
                    f=-1;r=-1;
                }else{
                    printf("The Dequeued Element is %d\n",ar[f++]);
                }
            break;
            case 3: 
                if(f == -1 || f == size){
                    printf("Queue is Empty \n");
                 }else{
                    for(int i = f ;i<= r;i++){   
                        printf("%d\t",ar[i]);
                    }
                    printf("\n");
                }
            break;
            case 4: break;
            default: printf("No other choice\n");
            break;
    }
    }while(c != 4);
}

void linkedlist(){
    
    do{
        printf("Enter Your Choice \n1 for Insertion at begining \n2 for insertion at end \n3 for insertion at any position \n4 for exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:


            break;
            case 2: 
                if(f == -1 || f == size || f>r){
                    printf("Queue is Empty\n");
                    f=-1;r=-1;
                }else{
                    printf("The Dequeued Element is %d\n",ar[f++]);
                }
            break;
            case 3: 
                if(f == -1 || f == size){
                    printf("Queue is Empty \n");
                 }else{
                    for(int i = f ;i<= r;i++){   
                        printf("%d\t",ar[i]);
                    }
                    printf("\n");
                }
            break;
            case 4: break;
            default: printf("No other choice\n");
            break;
    }
    }while(c != 4);
    
}
struct node {
    int n ;
    node *next;
};
struct node


int main(){
    char ch;
    printf("Enter Your Choice : \n's' for Stack\n'q' for Queue \n'l' for Linked List\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 's': 
        printf("You have Chosen Stack\n");
        stack();
        break;
    case 'q': 
        printf("You have Chosen Queue\n");
        queue();
        break;
    case 'l': printf("You have Chosen LinkedList");
        break;
    default:printf("o Other Choice");
        break;
    }
    return 0;
}
