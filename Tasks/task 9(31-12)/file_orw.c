#include <stdio.h>
#include <string.h>

void  main()
{
    int choice;
    char email[20], pass[20];
    char fileEmail[20], filePass[20];
    FILE *fp;

    printf("\n Press 1 For Signup \n Press 2 For Login \n ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            printf("Enter Email: ");
            scanf("%s", email);

            printf("Enter Password: ");
            scanf("%s", pass);

            fp = fopen("user.txt", "w");
            fprintf(fp, "%s %s", email, pass);
            fclose(fp);

            printf("Signup Successful!\n");
            break;

        case 2:
            printf("Enter Email: ");
            scanf("%s", email);

            printf("Enter Password: ");
            scanf("%s", pass);

            fp = fopen("user.txt", "r");

            fscanf(fp, "%s %s", fileEmail, filePass);
            fclose(fp);

            if (strcmp(email, fileEmail) == 0 && strcmp(pass, filePass) == 0)
            {
                printf("Login Successful!\n");
            }
            else
            {
                printf("Invalid Email or Password!\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    getch() ;
}
