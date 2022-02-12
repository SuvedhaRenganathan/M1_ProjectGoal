void TocastVote(){
    int option;
    printf("\n \n Please chooose the Candidate for voting \n \n");
    printf("\n 1. %s", party1);
    printf("\n 2. %s", party2);
    printf("\n 3. %s", party3);
    printf("\n 4. %s", party4);
    printf("\n 5. %s", party5);
    printf("\n 6. %s", party6);

    printf("\n \n Input your choice ( 1 - 6 ) : ");
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
