#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define total_no_of_parties
#define party1 "Feather"
#define party2 "Tree"
#define party3 "Torchlight"
#define party4 "Sun"
#define party5 "Clock"
#define party6 "Nota"

int Countofvote1 = 0,
    Countofvote2 = 0,
    Countofvote3 = 0,
    Countofvote4 = 0,
    Countofvote5 = 0,
    Notaofvotes  = 0,
    Invalidvotes = 0;

void TocastVote(){
    int option;
    printf("\n \n Please chooose the Candidate for voting \n \n");
    printf("\n 1. %s", party1);
    printf("\n 2. %s", party2);
    printf("\n 3. %s", party3);
    printf("\n 4. %s", party4);
    printf("\n 5. %s", party5);
    printf("\n 6. %s", party6);

    printf("\n \n Enter your choice from the above ( 1 - 6 ) : ");
    scanf("%d", &option);

    switch (option){
        case 1:
        Countofvote1++;
        break;
        case 2:
        Countofvote2++;
        break;
        case 3:
        Countofvote3++;
        break;
        case 4:
        Countofvote4++;
        break;
        case 5:
        Countofvote5++;
        break;
        case 6:
        Notaofvotes++;
        break;
        case 7:
        Invalidvotes++;
        break;
        default:
        printf(" \n Error: Wrong Chocie !! Please retry");
            getchar();
    }
    printf(" \n Thank You! the vote has been saved");

}

void Countofvotes(){
    printf("\n \n  Voting data ");
    printf("\n %s - %d", party1, Countofvote1);
    printf("\n %s - %d", party2, Countofvote2);
    printf("\n %s - %d", party3, Countofvote3);
    printf("\n %s - %d", party4, Countofvote4);
    printf("\n %s - %d", party5, Countofvote5);
    printf("\n %s - %d", party6, Notaofvotes);
    printf("\n %s - %d", "damaged Votes", Invalidvotes);

}

void getMaximumVoteofCandiate(){
    if(Countofvote1 > Countofvote2 && Countofvote1 > Countofvote3 && Countofvote1 > Countofvote4 && Countofvote1> Countofvote5 && Countofvote1 > Notaofvotes){
        printf("The Candiate with maximum number of votes is %s", party1);
    }else if(Countofvote2 > Countofvote1 && Countofvote2 > Countofvote3 && Countofvote2 > Countofvote4 && Countofvote2 > Countofvote5 && Countofvote2 > Notaofvotes){
        printf("The Candiate with maximum number of votes is %s", party2);
    }else if(Countofvote3 > Countofvote1 &&  Countofvote3> Countofvote2 && Countofvote3 > Countofvote4 && Countofvote3 < Countofvote5 && Countofvote3 < Notaofvotes){
        printf("The Candiate with maximum number of votes is %s", party3);
    }else if(Countofvote4 > Countofvote1 && Countofvote4 > Countofvote2 && Countofvote4 > Countofvote3 && Countofvote4 > Countofvote5 && Countofvote4 > Notaofvotes){
        printf("The Candiate with maximum number of votes is %s", party4);
    }else if(Countofvote5 > Countofvote1 && Countofvote5 > Countofvote2 && Countofvote5 > Countofvote3 && Countofvote5 > Countofvote4 && Countofvote5 > Notaofvotes) {
        printf("The Candiate with maximum number of votes is %s", party5);
    }else if(Notaofvotes > Countofvote1 && Notaofvotes > Countofvote2 && Notaofvotes > Countofvote3 && Notaofvotes > Countofvote4 && Notaofvotes > Countofvote5){
        printf("The Candiate with maximum number of votes is %s", party6);
    }
    else{
        printf(" No Win-Win Situation ");
    }
}

void getMinimumVoteofCandiate(){
    if(Countofvote1 < Countofvote2 && Countofvote1 < Countofvote3 && Countofvote1 < Countofvote4 && Countofvote1< Countofvote5 && Countofvote1 < Notaofvotes){
        printf("The Candiate with minimum number of votes is %s", party1);
    }else if(Countofvote2 < Countofvote1 && Countofvote2 < Countofvote3 && Countofvote2 < Countofvote4 && Countofvote2 < Countofvote5 && Countofvote2 < Notaofvotes){
        printf("The Candiate with minimum number of votes is %s", party2);
    }else if(Countofvote3 < Countofvote1 &&  Countofvote3 < Countofvote2 && Countofvote3 < Countofvote4 && Countofvote3 < Countofvote5 && Countofvote3 < Notaofvotes){
        printf("The Candiate with minimum number of votes is %s", party3);
    }else if(Countofvote4 > Countofvote1 && Countofvote4 > Countofvote2 && Countofvote4 > Countofvote3 && Countofvote4 <Countofvote5 && Countofvote4 < Notaofvotes){
        printf("The Candiate with minimum number of votes is %s", party4);
    }else if(Countofvote5 > Countofvote1 && Countofvote5 > Countofvote2 && Countofvote5 > Countofvote3 && Countofvote5 > Countofvote4 && Countofvote5 < Notaofvotes) {
        printf("The Candiate with minimum number of votes is %s", party5);
    }else if(Notaofvotes > Countofvote1 && Notaofvotes > Countofvote2 && Notaofvotes > Countofvote3 && Notaofvotes > Countofvote4 && Notaofvotes > Countofvote5){
        printf("The Candiate with minimum number of votes is %s", party6);
    }else{
        printf("None");
    }
    
}

int stringcompare(char *a,char *b)  
{  
   int flag=0;  
    while(*a!='\0' && *b!='\0')   
    {  
        if(*a!=*b)  
        {  
            flag=1;  
        }  
        a++;  
        b++;  
    }  
      
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  
