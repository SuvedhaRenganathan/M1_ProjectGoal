void getMaximumVoteofCandiate(){
    if(Countofvote1 > Countofvote2 && Countofvote1 > Countofvote3 && Countofvote1 > Countofvote4){
        printf("The Candiate with maximum votes is %s", party1);
    }else if(Countofvote2 > Countofvote1 && Countofvote2 > Countofvote3 && Countofvote2 > Countofvote4){
        printf("The Candiate with maximum votes is %s", party2);
    }else if(Countofvote3 > Countofvote1 &&  Countofvote3> Countofvote2 && Countofvote3 > Countofvote4){
        printf("The Candiate with maximum votes is %s", party3);
    }else if(Countofvote4 > Countofvote1 && Countofvote4 > Countofvote2 && Countofvote4 > Countofvote3){
        printf("The Candiate with maximum votes is %s", party4);
    }else if(Countofvote5 > Countofvote1 && Countofvote5 > Countofvote2 && Countofvote5 > Countofvote3 && Countofvote5 > Countofvote4) {
        printf("None Of The Above");
    }else{
        printf(" Warning! No Win-Win Situation ");
    }
}
