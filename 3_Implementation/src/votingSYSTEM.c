int main()
    {
char voteusername[20];
char votepassword[8];
    
    printf("\nEnter voting username: ");
    scanf("%s",voteusername);
        {
        printf("Enter voting Password: ");
        int i=0;
        for(i=0;i<8;i++)
        {
            votepassword[i]=getch();
            printf("%c",'*');
        }
    }
         char name[20];
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
        rem = num % 10;  // get the last digit of num
        num = num / 10;  // remove the last digit from num
        count++;         // increment count by 1
    }

    printf("%d number of digits in aadhaar", count);
    int hr=count;
        printf("\n %d number of digits in aadhaar",hr);
                if(hr==12)
        printf("\n Success, Valid aadhaar number");
        else
        printf("\n No success, invalid aadhaar number");

char str1[20]; // declaration of char array  
  char str2[20]="AW1234"; // declaration of char array  
  printf("\n Enter the your ward number : ");  
  scanf("%s",str1);  
  int compare=stringcompare(str1,str2); // calling stringcompare() function.  
  if(compare==0)  
  printf("\n Thanks for confirming your waard");
   else  
        printf("\n Not a valid ward number.Kindly enter the ward number starting with 'AW' series");  

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
        }

    } while (choice!=0);

getchar();
}
