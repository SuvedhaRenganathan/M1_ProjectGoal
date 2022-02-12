#include <stdio.h>
#include <stdlib.h>
int main(){
    int choice;
    do{
        printf("\n \n  WELCOME TO ELECTION / VOTING 2022 ");
        printf("\n \n 1. Cast the Vote");
        printf("\n \n 2. Find the Vote Count");
        printf("\n \n 3. Find the Candidate with leading votes");
        printf("\n \n 4. Exit");

        printf("\n \n Please Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
        TocastVote();
        break;
        case 2:
        Countofvotes();
        break;
        case 3:
        getMaximumVoteofCandiate();
        break;
        default:
        printf("\n Error: Invalid Choice ");
        }

    } while (choice!=0);

getchar();
}