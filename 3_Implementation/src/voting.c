int main()
    {
char voteuser[8];
char votepwd[6];
    
    printf("\nEnter voting username: ");
    scanf("%s",voteuser);
        {
        printf("Enter voting Password: ");
        int i=0;
        for(i=0;i<8;i++)
        {
            votepwd[i]=getch();
            printf("%c",'*');
        }
    }
         char name[10];
     printf("\n Enter you name:");
     scanf("%s", name);
     printf("\n Hello %s",name);
     int x;
     int y=2022;
     printf("\n enter the birth year of the person\n");
     scanf("%d",&x);
     int age=y-x;
     printf("\n The age of the person is: %d",age);
    if(age>=18)
    {
        printf("\n Eligible to vote");
    }
    else{
        printf("\n Not Eligible to vote");
        return(0);
    }
    long int num;
    int count = 0;
    int rem;

    printf("\n Enter your aadhaar number: \n");
    scanf("%ld", &num);

    while (num != 0) 
    {
        rem = num % 10;  
        num = num / 10;  
        count++;         
    }

    printf("%d number of digits in aadhaar", count);
    int hr=count;
        printf("\n %d number of digits in aadhaar",hr);
                if(hr==12)
        printf("\n Success, Valid aadhaar number");
        else{
        printf("\n No success, invalid aadhaar number");
        return 0;
        }

char strg1[6];  
  char strg2[6]="AW1234"; 
  printf("\n Enter ward number : ");  
  scanf("%s",strg1);  
  int compare=stringcompare(strg1,strg2);  
  if(compare==0)  
  printf("\n Thanks for confirming your waard");
   else{  
        printf("\n Not a valid ward number.Kindly enter the ward number starting with 'AW' series");  
        return 0;
   }
    int choice;
    do{
        printf("\n \n  WELCOME TO PANCHAYAT ELECTION VOTING 2022 ");
        printf("\n \n 1. Cast the Vote");
        printf("\n \n 2. Find the Vote Count");
        printf("\n \n 3. Find the Candidate with Maximum votes");
        printf("\n \n 4. Find the Candidate with Minimum votes");
        printf("\n \n 5. Exit");

        printf("\n \n Please Enter Your Voting Choice : ");
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
        case 4:
        getMinimumVoteofCandiate();
        break;
        default:
        printf("\n Error: Invalid Choice ");
return 0;
        }

    } while (choice!=0);

getchar();
}
