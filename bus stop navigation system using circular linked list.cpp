#include <stdio.h>
#include <stdlib.h>

struct Node {
    char stop[20];
    struct Node *next;
};

int main() {
    struct Node *head=NULL,*newNode,*temp;
    int n,i;

    printf("Enter number of stops: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        newNode = new Node;
        printf("Enter stop: ");
        scanf("%s",newNode->stop);

        if(head==NULL) {
            head=newNode;
            newNode->next=head;
        } else {
            temp=head;
            while(temp->next!=head)
                temp=temp->next;
            temp->next=newNode;
            newNode->next=head;
        }
    }

    printf("\nBus Route:\n");
    temp=head;
    do {
        printf("%s -> ",temp->stop);
        temp=temp->next;
    } while(temp!=head);

    printf("%s\n",head->stop);

    return 0;
}
