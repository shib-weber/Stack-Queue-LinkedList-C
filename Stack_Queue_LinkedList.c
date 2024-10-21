#include<stdio.h>
int main(){
    char ch;
    printf("Enter Your Choice ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 's': printf("You have Chosen Stack");
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