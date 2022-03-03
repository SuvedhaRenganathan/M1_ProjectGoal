High Level Test Plan

| Test ID     | Description | Input Values   | Expected Output  | Actual Output |
| ----------  | ----------- | ------------   | ---------------- | ------------- |
| 01  |   user cast to vote       | choice = 1  | party = Clock |  party = Clock |
| 02  | user find number of votes | choice = 2  | Clock = 1     |   Clock = 1  |
| 03  | user find minimum votes   | choice = 3  | minimum votes = 1 | minimum votes = 1 |
| 04  | user find maximum votes   | choice = 4  | maximum votes = 1 | maximum votes = 1 |


Low Level Test Plan

| Test ID     | Description | Input Values | Expected Output     | Actual Output    |
| ----------  | ----------- | ------------ | ----------------    | -------------    |
| 01  |   user name         |   name       |     name            |    name          |
| 02  | user password       |   1234       |     1234            |   1234           |
| 03  | user DOB            |   1992       | Eligible to vote    | Eligible to vote  |
| 04  | user aadhar number  | 789078908900 | Valid aadhar number | Valid aadhar number |
| 05  | user ward number    | AW1234       | Correct ward number | Correct ward number |
