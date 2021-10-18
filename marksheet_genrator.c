#include<stdio.h>
#include<string.h>

struct students
{
    char name[100];
    int id;
    int english, mathematics, science, history;
    char hobby[100];
}Aniket, Shubham, Rocky, Anuj, Yash;

int main()
{
    int english, mathematics, science, history;
    int percantage;
    int c;
    float p;
    int choose;
    int choose_student;
    char name[100];
    int id;
    char hobby[100];

    strcpy(Aniket.name, "Aniket parhate");
    Aniket.id = 1;
    Aniket.english = 95;
    Aniket.mathematics = 89;
    Aniket.science = 85;
    Aniket.history = 84;
    strcpy(Aniket.hobby, "Coding");
    strcpy(Shubham.name, "Shubham kumar");
    Shubham.id = 2;
    Shubham.english = 86;
    Shubham.mathematics = 83;
    Shubham.science = 80;
    Shubham.history = 77;
    strcpy(Shubham.hobby, "singging");
    strcpy(Rocky.name, "Rocky singh");
    Rocky.id = 3;
    Rocky.english = 85;
    Shubham.mathematics = 81;
    Rocky.science = 77;
    Rocky.history = 76;
    strcpy(Rocky.hobby, "Acting");
    strcpy(Anuj.name, "Anuj");
    Anuj.id = 4;
    Anuj.english = 75;
    Anuj.mathematics = 74;
    Anuj.science = 75;
    Anuj.history = 70;
    strcpy(Anuj.hobby, "Drawing");
    strcpy(Yash.name, "Yash");
    Yash.id = 5;
    Yash.english = 77;
    Yash.mathematics = 79;
    Yash.science = 72;
    Yash.history = 71;
    strcpy(Yash.hobby, "Travlling");







    printf("*whose Marksheet do you want?*\n\n");

    printf("\tEnter 1. for Aniket\n\tEnter 2. for Shubham\n\tEnter 3. for Rocky\n\tEnter 4. for Anuj\n\tEnter 5 for Yash\n\tWant to create new marksheet?. for creating new mark sheet enter 6.\n");
    scanf("%d", &choose);



    switch (choose)
    {
    case 1:
        
    c = Aniket.english + Aniket.mathematics + Aniket.science + Aniket.history;
    p = c * 100 / 400;
    system("COLOR f0");
    printf("\t\t\t****************************************Aniket's MarkSheet****************************************\n");
    printf("\t\t\tName                                 =                               Aniket Parhate\n");
    printf("\t\t\tid                                   =                               '1'\n");
    printf("\t\t\tEnglish                              =                                95\n");
    printf("\t\t\tMathematics                          =                                88\n");
    printf("\t\t\tScience                              =                                85\n");
    printf("\t\t\tHistory                              =                                84\n");
    printf("\t\t\tHobby                                =                                Coding\n\n\n");
    printf("\t\t\t**************************************************************************************************\n");
    printf("\t\t                                  percantage : %f\n*", p);
    printf("\t\t\t**************************************************************************************************\n\n");
    break;

    case 2:
        
    c = Shubham.english + Shubham.mathematics + Shubham.science + Shubham.history;
    p = c * 100 / 400;
    system("COLOR 70");
    printf("\t\t\t****************************************Shubham's MarkSheet****************************************\n");
    printf("\t\t\tName                                 =                               Shubham kumar\n");
    printf("\t\t\tid                                   =                               '2'\n");
    printf("\t\t\tEnglish                              =                                86\n");
    printf("\t\t\tMathematics                          =                                83\n");
    printf("\t\t\tScience                              =                                80\n");
    printf("\t\t\tHistory                              =                                77\n");
    printf("\t\t\tHobby                                =                                Singing\n\n\n");
    printf("\t\t\t**************************************************************************************************\n");
    printf("\t\t                                  percantage : %f\n*", p);
    printf("\t\t\t**************************************************************************************************\n\n");
    break;

    case 3:

    c = Rocky.english + Rocky.mathematics + Rocky.science + Rocky.history;
    p = c * 100 / 400;
    system("COLOR ce");
    printf("\t\t\t****************************************Rocky's MarkSheet****************************************\n");
    printf("\t\t\tName                                 =                               Rocky singh\n");
    printf("\t\t\tid                                   =                               '3'\n");
    printf("\t\t\tEnglish                              =                                85\n");
    printf("\t\t\tMathematics                          =                                81\n");
    printf("\t\t\tScience                              =                                77\n");
    printf("\t\t\tHistory                              =                                76\n");
    printf("\t\t\tHobby                                =                                Acting\n\n\n");
    printf("\t\t\t**************************************************************************************************\n");
    printf("\t\t                                  percantage : %f\n*", p);
    printf("\t\t\t**************************************************************************************************\n\n");
    break;

    case 4:

    c = Anuj.english + Anuj.mathematics + Anuj.science + Anuj.history;
    p = c * 100 / 400;
    system("COLOR e5");
    printf("\t\t\t****************************************Anuj's MarkSheet****************************************\n");
    printf("\t\t\tName                                 =                               Anuj\n");
    printf("\t\t\tid                                   =                               '4'\n");
    printf("\t\t\tEnglish                              =                                75\n");
    printf("\t\t\tMathematics                          =                                74\n");
    printf("\t\t\tScience                              =                                75\n");
    printf("\t\t\tHistory                              =                                70\n");
    printf("\t\t\tHobby                                =                                Drawing\n\n\n");
    printf("\t\t\t**************************************************************************************************\n");
    printf("\t\t                                  percantage : %f\n*", p);
    printf("\t\t\t**************************************************************************************************\n\n");
    break;

    case 5:

    c = Yash.english + Yash.mathematics + Yash.science + Yash.history;
    p = c * 100 / 400;
    system("COLOR ce");
    printf("\t\t\t****************************************Yash's MarkSheet****************************************\n");
    printf("\t\t\tName                                 =                               Yash\n");
    printf("\t\t\tid                                   =                               '5'\n");
    printf("\t\t\tEnglish                              =                                77\n");
    printf("\t\t\tMathematics                          =                                79\n");
    printf("\t\t\tScience                              =                                72\n");
    printf("\t\t\tHistory                              =                                71\n");
    printf("\t\t\tHobby                                =                                Travlling\n\n\n");
    printf("\t\t\t**************************************************************************************************\n");
    printf("\t\t                                  percantage : %f\n*", p);
    printf("\t\t\t**************************************************************************************************\n\n");
    break;

    case 6:
    
    printf("Enter name of the student: ");
    scanf("%s", &name);
    printf("Enter the id if student: ");
    scanf("%d", &id);
    printf("Enter the marks of english: ");
    scanf("%d", &english);
    printf("Enter the marks of mathematics: ");
    scanf("%d", &mathematics);
    printf("Enter the marks of science: ");
    scanf("%d", &science);
    printf("Enter the marks of history: ");
    scanf("%d", &history);
    printf("Enter the hobby of the student: ");
    scanf("%s", &hobby);
    
    c = english + mathematics + science + history;
    p = c * 100 / 400;
    system("COLOR f0");
    printf("\t\t\t****************************************%s MarkSheet****************************************\n", name);
    printf("\t\t\tName                                 =                               %s\n", name);
    printf("\t\t\tid                                   =                                %d\n", id);
    printf("\t\t\tEnglish                              =                                %d\n", english);
    printf("\t\t\tMathematics                          =                                %d\n", mathematics);
    printf("\t\t\tScience                              =                                %d\n", science);
    printf("\t\t\tHistory                              =                                %d\n", history);
    printf("\t\t\tHobby                                =                                %s\n\n\n", hobby);
    printf("\t\t\t**************************************************************************************************\n");
    printf("\t\t                                  percantage : %f\n*", p);
    printf("\t\t\t**************************************************************************************************\n\n");

    }

    return 0;
}
