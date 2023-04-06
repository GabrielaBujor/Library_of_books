#include <stdio.h>
#include <stdlib.h>

typedef struct novels{
    char author[20];
    char title[30];
    char genre[10];
    int year;
    float rating;
}novel;

int main()
{

    novel n5;
    int n, del, line_number=0;
    FILE *ptr, *ptr1;
    char ch, file1[] ="novels.txt", file2[] ="novels2.txt", curr;

    printf("Select an option:\n");

    printf("If you want to see the novels in the library, press 1:\n");
    printf("If you want to add a novel, press 2:\n");
    printf("If you want to see the novels in alphabetical order, press 3:\n");
    printf("If you want to see the novels in order of their rating, press 4:\n");
    printf("If you want to remove a novel, press 5:\n\n");
    scanf("%d", &n);
    printf("\n");

    switch(n)
    {
    case 1:
        printf("You chose number 1\n");
        ptr = fopen("novels.txt", "r");
        do {
            ch = fgetc(ptr);
            printf("%c", ch);
            } while (ch != EOF);
        fclose(ptr);
        printf("\n");

        break;
    case 2:
        printf("You chose number 2\n");
        printf("Insert the name of the author:\n");
        scanf("%s", &n5.author);
        printf("Insert the title:\n");
        scanf("%s", &n5.title);
        printf("What is the genre of the book?\n");
        scanf("%s", &n5.genre);
        printf("In what year was it published?\n");
        scanf("%d", &n5.year);
        printf("What is its rating?\n");
        scanf("%f", &n5.rating);
        printf("\n\n");

        printf("Author: %s\n", n5.author);
        printf("Title: %s\n", n5.title);
        printf("Genre: %s\n", n5.genre);
        printf("Year: %d\n", n5.year);
        printf("Rating: %.2f\n\n", n5.rating);

        break;
    case 3:
        printf("You chose number 3\n\n");

        ptr = fopen("novels.txt", "r");
        do {
            ch = fgetc(ptr);
            printf("%c", ch);
            } while (ch != EOF);
        fclose(ptr);
        printf("\nAlphabetical order:\n\n");

        ptr = fopen("novelsalph.txt", "r");
        do {
            ch = fgetc(ptr);
            printf("%c", ch);
            } while (ch != EOF);
        fclose(ptr);
        printf("\n\n");

        break;
    case 4:
        printf("You chose number 4\n\n");

        ptr = fopen("novels.txt", "r");
        do {
            ch = fgetc(ptr);
            printf("%c", ch);
            } while (ch != EOF);
        fclose(ptr);
        printf("\nRating order:\n\n");

        ptr = fopen("novelsrat.txt", "r");
        do {
            ch = fgetc(ptr);
            printf("%c", ch);
            } while (ch != EOF);
        fclose(ptr);
        printf("\n\n");

        break;
    case 5:
        printf("You chose number 5\n\n");

        ptr = fopen("novels.txt", "r");
        do {
            ch = fgetc(ptr);
            printf("%c", ch);
            } while (ch != EOF);
        fclose(ptr);

        printf("\nPlease enter the entry number of the book you want to delete : ");
        scanf("%d", &del);
        printf("\n");

        ptr = fopen(file1,"r");
        ptr1 = fopen(file2, "w");
        curr = getc(ptr);
        if(curr!=EOF) {line_number =1;}
        while(1){
            if(del != line_number)
                putc(curr, ptr1);
                curr = getc(ptr);
                if(curr =='\n') line_number++;
                if(curr == EOF) break;
            }
        fclose(ptr);
        fclose(ptr1);

        ptr = fopen("novels2.txt", "r");
        do {
            ch = fgetc(ptr);
            printf("%c", ch);
            } while (ch != EOF);
        fclose(ptr);

        printf("\n\n");

        break;
    default:
        printf("You picked the wrong value for n\n");
        break;

    }
    printf("END\n\n");
    return 0;
}
