#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>


void help(){
    printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
    printf("\n\n\tknowledge questions and the right answer is to be chosen among");
    printf("\n\n\tthe four options provided. Your score will be calculated at the end.");
    printf("\n\n\tYour score will be calculated and displayed");
    printf("\n\n\tat the end. If you secure highest score, your score");
    printf("\n\n\n\twill be recorded. So BEST OF LUCK.");

    printf("\n\n");
    getchar();
}

void showscore(){
    char name[20];
    float s;
    FILE *f;
    f = fopen("score.txt", "r");
    fscanf(f, "%s %f", &name, &s);
    printf("\t%.2f percent is the highest score by %s\n\n", s, name);
    fclose(f);
    getchar();
}

void writescore(char n[20], float sc){
    FILE *f;
    char name[20];
    float s;
    f = fopen("score.txt", "r");
    fscanf(f, "%s%.2f", &name, &s);
    if(sc>=s){
        fclose(f);
        f = fopen("score.txt", "w");
        fprintf(f, "%s %.2f", n,sc);
        fclose(f); 
    }
    getchar();
}

int main(){
    char choice;
    char playername[20];
    int n;

    printf("\n\n\t\t****Welcome to the Quiz game****\t\t\n\n");
    mainhome:
    printf("\t\tEnter 'S' to start the game.\t\t\n");
    printf("\t\tEnter 'V' to see highest score.\t\t\n");
    printf("\t\tEnter 'H' for help.\t\t\n");
    printf("\t\tEnter 'Q' for exit.\t\t\n");
    printf("\n\t\t");

    choice = toupper(getchar());
    


    if(choice=='H'){
        help();
        goto mainhome;
        getchar();
    }
    if(choice=='V'){
        showscore();
        goto mainhome;
        getchar();
    }
    if(choice=='Q'){
        exit(1);
    }
    if(choice == 'S'){
        printf("\n\t\tEnter your Name\n");
        printf("\t\t{One Word only}");
        printf("\n\n\t\t");
        scanf("%s", playername);
        printf("\t\tEnter How many questions You want to attempt (out of 20)");
        printf("\n\n\t\t");
        scanf("%d", &n);


        int check[20] = {0};
        int i = 0;
        int right = 0;

        srand(time(0));

        for (int j = 0; j < n; j++) {
        int r;
        int isUnique;

        do {
            r = rand() % 20 + 1;
            isUnique = 1;
            for (int w = 0; w < i; w++) {
                if (check[w] == r) {
                    isUnique = 0;
                    break;
                }
            }
        } while (!isUnique);

        check[i] = r;
        i++;

        switch (r) {
            case 1:
                printf("\n\nWhich planet in the solar system is known as the “Red Planet”?\n");
                printf("A. Venus\tB. Mars\nC. Earth\tD. Jupiter\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'B') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is B. Mars");
                }
                break;
            case 2:
                printf("\n\nWhat is the capital of Japan?\n");
                printf("A. Beijing\tB. Tokyo\nC. Seoul\tD. Bangkok\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'B') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is B. Tokyo");
                }
                break;

            case 3:
                printf("\n\n What animal is the national symbol of Australia?\n");
                printf("A. Kangaroo\tB. Koala\nC. Emu\tD. Crocodile\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'A') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is A. Kangaroo");
                }
                break;



            case 4:
                printf("\n\nWhat is the name of the process by which plants convert sunlight into energy?\n");
                printf("A. Respiration\tB. Photosynthesis\nC. Oxidation\tD. Evolution\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'B') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is B. Photosynthesis");
                }
                break;
            case 5:
                printf("\n\nIn what year was the first international modern Olympiad held?\n");
                printf("A. 1896\tB. 1900\nC. 1912\tD. 1924\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'A') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is A. 1896");
                }
                break;
            case 6:
                printf("\n\nFor which of these disciplines Nobel Prize is awarded?\n");
                printf("A. Physics, Chemistry\tB. physiology\nC. Medicine\tD. All of the above\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'D') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is D. All of the above");
                }
                break;
            case 7:
                printf("\n\nEcology deals with\n");
                printf("A. Birds\tB. Cell formation\nC. Relation between organisms and their environment\tD. Tissues\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'C') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is C. Relation between organisms and their environment");
                }
                break;
            case 8:
                printf("\n\nWhat is considered the lung of the Earth?\n");
                printf("A. Amazon rainforest\tB. The Mississippi River\nC. The Sahara\tD. Everest\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'A') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is A. Amazon rainforest");
                }
                break;
            case 9:
                printf("\n\nLook at this series: 12, 11, 13, 12, 14, 13, … What number should come next?\n");
                printf("A. 10\tB. 16\nC. 15\tD. 13\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'D') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is D. 13s");
                }
                break;
            case 10:
                printf("\n\nCUP : LIP :: BIRD : ?\n");
                printf("A. Grass\tB. Forest\nC. Beak\tD. Bush\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'C') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is C. Beak");
                }
                break;
            case 11:
                printf("\n\nWhat is the capital of Australia?\n");
                printf("A. Sydney\tB. Melbourne\nC. Canberra\tD. Perth\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'C') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is C. Canberra");
                }
                break;
            case 12:
                printf("\n\nWho painted the Mona Lisa?\n");
                printf("A. Vincent van Gogh\tB. Pablo Picasso\nC. Leonardo da Vinci\tD. Michelangelo\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'C') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is C. Leonardo da Vinci");
                }
                break;
            case 13:
                printf("\n\nWho is the author of the Harry Potter book series?\n");
                printf("A. J.R.R. Tolkien\tB. J.K. Rowling\nC. George R.R. Martin\tD. Dan Brown\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'B') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is B. J.K. Rowling");
                }
                break;
            case 14:
                printf("\n\nWhich country is known as the 'Land of the Rising Sun'?\n");
                printf("A. China\tB. South Korea\nC. Japan\tD. Thailand\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'C') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is C. Japan");
                }
                break;
            case 15:
                printf("\n\nWhat is the official language of Brazil?\n");
                printf("A. Spanish\tB. Portuguese\nC. French\tD. English\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'B') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is B. Portuguese");
                }
                break;
            case 16:
                printf("\n\nWho invented the telephone?\n");
                printf("A. Thomas Edison\tB. Alexander Graham Bell\nC. Nikola Tesla\tD. Isaac Newton\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'B') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is B. Alexander Graham Bell");
                }
                break;
            case 17:
                printf("\n\nEntomology is the science that studies\n");
                printf("A. Behavior of human beings\tB. The origin and history of technical and scientific terms\nC. Insects\tD. The formation of rocks\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'C') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is C. Insects");
                }
                break;
            case 18:
                printf("\n\nFFC stands for\n");
                printf("A. Foreign Finance Corporation\tB. Federation of Football Council\nC. Film Finance Corporation\tD. None of the Above\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'C') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is C. Film Finance Corporation");
                }
                break;
            case 19:
                printf("\n\nWhich planet in the solar system is known as the 'Planet of Love'?\n");
                printf("A. Venus\tB. Mars\nC. Earth\tD. Jupiter\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'A') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is A. Venus");
                }
                break;
            case 20:
                printf("\n\nWhat year was the Olympic Organization founded?\n");
                printf("A. 1886\tB. 1912\nC. 1900\tD. 1896\n");

                while (getchar() != '\n'); 
                if (toupper(getchar()) == 'B') {
                    printf("\n\n\tRight Ans!!! ");
                    right++;
                } else {
                    printf("\n\n\tWrong Ans! The correct Answer is B. 1912");
                }
                break;
        }
    }

    printf("\n\n\tYou got %d right answers out of %d questions.\n", right, n);
    float percent = ((float)right/n)*100;
    printf("\n\n\tYour accuracy is %.2f percent\n\n", percent);


    writescore(playername,percent);
    goto mainhome;




    }



    return 0;
}