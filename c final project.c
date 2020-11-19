/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

void mainmenu();
int counter1 = 0;
int counter2 = 0;
int i=0;
int y=0;
struct books info;
struct student data;
struct student
{
    char name [20];
    int id;
};
struct books
{
    char book_name[20];
    char book_id [20];
};
int main()
{
    int counter1 = 0;
    int counter2 = 0;
    mainmenu();
    return 0;

}

void students_registerion()
{

    struct student data;
    printf(" enter your name: ");
    scanf("%s",& data.name);
    printf(" enter your Id : ");
    scanf("%d", & data.id);
    counter1++;
     mainmenu();
}
void students_number()
{
    void student_registertion();
    printf(" the number of students who registered are %d students", counter1);
     mainmenu();

}

void add_books()
{

    printf(" enter the book name :");
    scanf("%s",& info.book_name[y]);
    printf(" enter the book id :");
    scanf("%d",& info.book_id[i]);
    counter2++;
    y++;
    i++;
     mainmenu();
}
void viewbook()
{
    void add_books()
    int x;
    for ( x =0; x< counter2; x++)
    {
         puts(info.book_name);
    }
   mainmenu();

}
void searchbook()
{
    void add_books();
    int IDbook;
    printf(" enter the book id you want to search for:");
    scanf("%d",&IDbook);
    int j;
    for ( j=0; j<counter2;j++){
        if (IDbook==info.book_id[j]){
            printf("the book is found");
            break;
        }
        else
        {
            printf(" the book is not found");
        }
    }
     mainmenu();
}
void mainmenu()
{
    int feedback;
    int number;
    printf("\n (1)Registration\n (2)Number of students\n (3)add books\n (4)View books\n (5)search for books\n (6)Exit\n");
    scanf("%d",& number);
    switch (number)
    {
    case 1:
        students_registerion();
        break;
    case 2:
        students_number();
        break;
    case 3:
        add_books();
        break;
    case 4:
        viewbook();
        break;
    case 5:
        searchbook();
        break;
    case 6:
        printf(" please tell us your feedback, Rate out of 10  ");
        scanf("%d",&feedback);
        printf(" Thank you for your feedback\n");
        break;

    default:
        printf(" Error , please try again");
        mainmenu();
    
    }
}


