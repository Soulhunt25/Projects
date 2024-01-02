BANKING :-
#include <stdio.h>

int account_balance = 100000;

int deposit() {
    int deposited_amt = 0;

    printf("Enter the amount you want to deposit: ");
    scanf("%d", &deposited_amt);

    if (deposited_amt > 0) {
        account_balance += deposited_amt;
        printf("Deposited %d. Your current balance is: %d\n\n", deposited_amt, account_balance);
    } else {
        printf("Invalid deposited amount.\n\n");
    }
}

int withdrawal() {
    int withdrawal_amt = 0;

    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &withdrawal_amt);

    if (withdrawal_amt > 0 && withdrawal_amt <= account_balance) {
        account_balance -= withdrawal_amt;
        printf("Withdrawn amount %d. Your current balance is: %d\n\n", withdrawal_amt, account_balance);
    } else {
        printf("Invalid withdrawal amount or insufficient balance.\n\n");
    }
}

int transfer() {
    int transfer_amt = 0;
    int target_account;

    printf("Enter the target account number: ");
    scanf("%d", &target_account);

    printf("Enter the amount you want to transfer: ");
    scanf("%d", &transfer_amt);

    if (transfer_amt > 0 && transfer_amt <= account_balance) {
        account_balance -= transfer_amt;
        printf("Transferred amount %d to account %d. Your current balance is: %d\n\n", transfer_amt, target_account, account_balance);
    } else {
        printf("Invalid transfer amount or insufficient balance.\n\n");
    }
}

int check_balance() {
    printf("Your current bank balance is: %d\n", account_balance);
}

int main() {
    printf("Welcome to Simple ATM!\n");

    int option;
    char continue_option;

    do {
        printf("\nEnter 1. for depositing amount\nEnter 2. for withdrawing amount\nEnter 3. for transferring funds\nEnter 4. for checking balance\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                deposit();
                break;
            case 2:
                withdrawal();
                break;
            case 3:
                transfer();
                break;
            case 4:
                check_balance();
                break;
            default:
                printf("Invalid option.\n");
                break;
        }

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &continue_option);

    } while (continue_option == 'y' || continue_option == 'Y');

    printf("Thank you for using Simple ATM!\n");

    return 0;
}



//CALCULATOR USING FUNCTONS :-

void sum()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    int sum = a + b;
    printf("Sum of two numbers is : %d\n", sum);
}

void divide()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    int divide = a / b;
    printf("Division of two numbers is : %d\n", divide);
}

void multiply()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    int multiply = a * b;
    printf("Multiply of two numbers is : %d\n", multiply);
}

void subtraction()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    int subtraction = a - b;
    printf("Subtraction of two numbers is : %d\n ", subtraction);
}

int main()
{
    char cal;
    printf("Enter what operation you want to perform : ");
    scanf("%c", &cal);

    switch (cal)
    {
    case '+':
        sum();
        break;

    case '-':
        subtraction();
        break;

    case '*':
        multiply();
        break;

    case '/':
        divide();
        break;

    default:
        break;
    }
}



*****************************************************************************************

PALINDROME CHECKER


int main()
{
    int num , original_num , reverse_num , remainder , i ;


    printf("Enter the number : ");
    scanf("%d",&num);


    original_num = num ; 

    for ( i = num; num != 0; num = num / 10){
        remainder = num % 10 ;
        reverse_num=reverse_num * 10 + remainder ;
    }

    if ( original_num == reverse_num ){
        printf("The entered num is a palindrome number ");
    }
    else{
        printf("The entered num is not a palindrome number ");
    }
    
}



*****************************************************************************************

NUMBER GUSSING GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main()
{

    // initialzed random number to 0
    srand(time(0));

    // generate a random number btw 1 to 100
    int randomNumber = (rand() % 100) + 1;

    int guess;
    int attempts = 0;

    printf("Welcome to number guess game!!!!\n");

    do
    {
        printf("Enter your guess\n");
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber)
        {
            printf("Try gussing a higher number\n");
        }
        else if (guess > randomNumber)
        {
            printf("Try gussing a lower number\n");
        }
        else
        {
            printf("Conguralation!!!!!\n");
        }
    } while (guess != randomNumber);

    printf("You gussed in %d attempts.", attempts);
}

