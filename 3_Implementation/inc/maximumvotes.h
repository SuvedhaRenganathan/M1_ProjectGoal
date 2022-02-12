void getMaximumVoteofCandiate(){
    if(Countofvote1 > Countofvote2 && Countofvote1 > Countofvote3 && Countofvote1 > Countofvote4 && Countofvote1> Countofvote5 && Countofvote1 > Notaofvotes){
        printf("The Candiate with maximum votes is %s", party1);
    }else if(Countofvote2 > Countofvote1 && Countofvote2 > Countofvote3 && Countofvote2 > Countofvote4 && Countofvote2 > Countofvote5 && Countofvote2 > Notaofvotes){
        printf("The Candiate with maximum votes is %s", party2);
    }else if(Countofvote3 > Countofvote1 &&  Countofvote3> Countofvote2 && Countofvote3 > Countofvote4 && Countofvote3 < Countofvote5 && Countofvote3 < Notaofvotes){
        printf("The Candiate with maximum votes is %s", party3);
    }else if(Countofvote4 > Countofvote1 && Countofvote4 > Countofvote2 && Countofvote4 > Countofvote3 && Countofvote4 > Countofvote5 && Countofvote4 > Notaofvotes){
        printf("The Candiate with maximum votes is %s", party4);
    }else if(Countofvote5 > Countofvote1 && Countofvote5 > Countofvote2 && Countofvote5 > Countofvote3 && Countofvote5 > Countofvote4 && Countofvote5 > Notaofvotes) {
        printf("The Candiate with maximum votes is %s", party5);
    }else if(Notaofvotes > Countofvote1 && Notaofvotes > Countofvote2 && Notaofvotes > Countofvote3 && Notaofvotes > Countofvote4 && Notaofvotes > Countofvote5){
        printf("The Candiate with maximum votes is %s", party6);
    }
    else{
        printf(" No Win-Win Situation ");
    }
}