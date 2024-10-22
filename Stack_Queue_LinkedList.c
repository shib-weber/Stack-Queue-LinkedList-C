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
    int size;n,f=-1,r=-1;
    printf("Enter the size of the Queue \n");
    scanf("%d",&size);
        int ar[size];
    do{
        printf("Enter Your Choice \n1 for Enqueue \n2 for Dequeue \n3 for Display \n4 for exit\n");
        scanf("%d",&c);
        switch(c){
            case 1 :
                if(f==-1&&r==-1){
                    
                }
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
    case 'q': printf("You have Chosen Queue");
        break;
    case 'l': printf("You have Chosen LinkedList");
        break;
    default:printf("o Other Choice");
        break;
    }
    return 0;
}
