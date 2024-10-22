#include<stdio.h>
#include<stdlib.h>
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
struct node {
    int data ;
    struct node *next;
};
struct node * createnode(int n){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;

    return newnode;
}

struct node* insertnode(struct node* head,int pos){
    int n;
    printf("Enter a Number\t");
    scanf("%d",&n);
    struct node* newnode=createnode(n);
    if (pos == 1)
    {
        if(head==NULL){
            head = newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
        
    }
    else if(pos ==-1){
        if(head==NULL){
            head=newnode;
        }else{
            struct node* p =head;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=newnode;
        }
    }else{
            int count =0;
            struct node* p =head;
            struct node* q =head;
            while(p!=NULL){
                p=p->next;
                count++;
            }
            if(pos>count || pos<=0){
                printf("Not an Appropiate Position\n");
            }else{
                for(int i =0;i<pos-2;i++){
                    q=q->next;
                }
                newnode->next=q->next;
                q->next=newnode;
            }
    }
    
    return head;
}
struct node* deletenode(struct node* head,int pos){
    if (pos == 1)
    {
        if(head==NULL){
            printf("No node to Delete\n");
        }else{
            struct node* p=head;
            head=p->next;
        }
        
    }
    else if(pos ==-1){
        if(head==NULL){
            printf("No node to Delete\n");
        }else{
            struct node* p =head;
            while((p->next)->next!=NULL){
                p=p->next;
            }
            p->next=NULL;
            
        }
    }else{
            int count =0;
            struct node* p =head;
            struct node* q =head;
            while(p!=NULL){
                p=p->next;
                count++;
            }
            if(pos>count || pos<=0){
                printf("Not an Appropiate Position\n");
            }else{
                for(int i =0;i<pos-2;i++){
                    q=q->next;
                }
                q->next=(q->next)->next;
            }
    }
    
    return head;
}
void display(struct node* head){
    struct node* p = head;
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;
    }
    printf("Null\n");
}

void linkedlist(){
    int c,pos=0;
    struct node* head = NULL;
    do{
        printf("Enter Your Choice \n1 for Insertion at begining \n2 for insertion at end \n3 for insertion at any position \n4 for deletion from begin \n5 for deletion from end \n5 for deletion from any position\n7 for display\n8 for exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:head=insertnode(head,1);
            break;
            case 2: head=insertnode(head,-1);
            break;
            case 3: 
                printf("Enter a Position\t");
                scanf("%d",&pos);
                head=insertnode(head,pos);
            break;
            case 4:head=deletenode(head,1);
            break;
            case 5: head=deletenode(head,-1);
            break;
            case 6: 
                printf("Enter a Position\t");
                scanf("%d",&pos);
                head=deletenode(head,pos);
            break;
            case 7:
                display(head);
                break;
            case 8: break;
            default: printf("No other choice\n");
            break;
    }
    }while(c != 8);
    
}

void circularQ(){
    int size,n,c,f=-1,r=-1;
    printf("Enter the size of The Queue\n");
    scanf("%d",&size);
    int ar[size];
    do{
        printf("Enter Your Choice\n1 for Enqueue\n2 for Dequeue\n3 for Display\n4 for Exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:
            if((r==(f-1)%(size-1)) || (f==0 && r ==size-1)){
                printf("Queue is Full\n");
            }else{
                printf("Enter a Number\t");
                scanf("%d",&n);
                    if (f == -1) { // First element to insert
                        f = r = 0;
                        ar[r] = n;
                    } else if (r == size - 1 && f != 0) {
                        r = 0;
                        ar[r] = n;
                    } else {
                        r++;
                        ar[r] = n;
                    }
            }
            break;
            case 2:
            if(f==-1 && r==-1){
                printf("Queue is Empty\n");
            }else{
                
                printf("Dequeued Element is %d\n",ar[f]);
                if (f == r) { // Queue has only one element
                    f = r = -1;
                } else if (f == size - 1) {
                    f = 0;
                } else {
                    f++;
                }
            }
            break;
            case 3:
                if(f==-1 && r==-1){
                    printf("Queue is Empty\n");
                }else{
                    if (r >= f) {
                        for (int i = f; i <= r; i++) {
                        printf("%d ", ar[i]);
                    }
                    } else {
                        for (int i = f; i < size; i++) {
                        printf("%d ", ar[i]);
                    }
                        for (int i = 0; i <= r; i++) {
                        printf("%d ", ar[i]);
                    }
                }
                    printf("\n");
                }
                break;
                case 4:break;
                default:printf("No other Choice\n");break;
        }
    }while(c!=4);
}

int main(){
    char ch;
    printf("Enter Your Choice : \n's' for Stack\n'q' for Queue \n'l' for Linked List\n'c' for Circular Queue\n");
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
    case 'l':
        printf("You have Chosen LinkedList\n");
        linkedlist();
        break;
    case 'c':
        printf("You have Chosen Circular Queue\n");
        circularQ();
        break;
    default:printf("No Other Choice");
        break;
    }
    return 0;
}
