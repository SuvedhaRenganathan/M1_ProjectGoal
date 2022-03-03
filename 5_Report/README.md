# INTRODUCTION
      An electoral system or voting system is a set of rules that determine how elections and referendums are conducted and how their results are determined.The project is mainly aimed at providing a secured and user friendly Online Voting System. The problem of voting is still critical in terms of safety and security.So this project also helps in finding various results and the person who is elgibile to vote. 
# SWOT ANALYSIS:
    1)STRENGTH - * Easy Accessible and time saving
                 * Cost Efficiency
                 * Can prevent election fraudulence and also violence
                 * Can find minimum,maximum votes of candidate and also include secure process
                 
    2)Weakness - * High Maintenance
                 * Needs skilled people
                 
    3)Opportunities - * Risks and duplication of votes can be avoided
                      * Highly beneficial
                      * Useful for secure voting and to find eligible person to vote
                      
    4)Threats - * The election committee may have less control action 
                * Sometimes the system may not function
                
# 4W's and 1'H
     When  - It can be used when there is a manual procedure for voting like stamping on the paper to vote
     where - It is implemented in election period of time
     who   -  voters,canditates
     what  - Used to display the votings
     How   - It can perform the operations like displaying the number of canditates,number of votes,to find leading votes,minimum votes

# Process of the Project
* **STEP 1** 
 The user shall create a username and password
* **STEP 2**
 The user shall enter the DOB to identify the age of the voting person
* **STEP 3** 
 The user shall also the aadhar and ward number for further verification
* **STEP 4**
 After the verification process,the user shall enter the choice to start to vote for the candidates
* **STEP 5** 
 Then the user shall able to find the number of vote,minimum votes and maximum votes of the candidates
* **STEP 6**
 Then user shall exit 

# Diagrams
# Use case diagram
![image](https://user-images.githubusercontent.com/98879965/155890151-b1cb1941-bab5-4e41-a051-05891d1f13fe.png)

# Flowchart
## High Level 
![image](https://user-images.githubusercontent.com/98879965/155890192-df6ed9c5-12f0-4598-8dc3-710bb6fe47c8.png)

## Low Level
![image](https://user-images.githubusercontent.com/98879965/155891013-39fe82c1-0de4-4167-acc6-6f96e07ee64c.png)

# Requirements and Plan
## High Level Test Plan

| Test ID     | Description | Input Values   | Expected Output  | Actual Output | Status |
| ----------  | ----------- | ------------   | ---------------- | ------------- | ------- |
| 01  |   user cast to vote       | choice = 1  | party = Clock |  party = Clock | Implemented |
| 02  | user find number of votes | choice = 2  | Clock = 1     |   Clock = 1  | Implemented |
| 03  | user find minimum votes   | choice = 3  | minimum votes = 1 | minimum votes = 1 | Implemented |
| 04  | user find maximum votes   | choice = 4  | maximum votes = 1 | maximum votes = 1 | Implemented |


## Low Level Test Plan

| Test ID     | Description | Input Values | Expected Output     | Actual Output    | Status |
| ----------  | ----------- | ------------ | ----------------    | -------------    | ------- |
| 01  |   user name         |   name       |     name            |    name          | Implemented |
| 02  | user password       |   1234       |     1234            |   1234           | Implemented |
| 03  | user DOB            |   1992       | Eligible to vote    | Eligible to vote  | Implemented |
| 04  | user aadhar number  | 789078908900 | Valid aadhar number | Valid aadhar number | Implemented |
| 05  | user ward number    | AW1234       | Correct ward number | Correct ward number | Implemented |


# Uses and Benefits







