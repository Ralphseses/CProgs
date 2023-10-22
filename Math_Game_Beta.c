#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ch1, ch2, op, score, rand1, rand2, out, in, counter;
int max = 10;
int min = 0;

diff() {
    int diff;
    
    printf("Choose Difficulty\n1 Easy\n2 Intermediate\n3 Hard\n4 Expert\n");
    printf("Difficulty: ");
    scanf("%d", &diff);

    switch (diff)
    {
        case 1:
            max = 10;
            break;
        case 2:
            max = 50;
            break;
        case 3:
            max = 100;
            break;
        case 4:
            max = 500;
            break;
        default:
            break;
    }
    return main();
}

int preset() {
    
    printf("Operation:\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n");
    scanf("%d", &op);
        switch(op)
        {
            case 1:
                game('+', 1);
                return main();
                break;
            case 2:
                game('-', 2);
                return main();
                break;
            case 3:
                game('*', 3);
                return main();
                break;
            case 4:
                game('/', 4);
                return main();
                break;
            default:
                break;
            }
}

    void game(char o, int op) {
    printf("=============================================================\n");
    for(int i=1; i<11; i++) {

    srand(time(NULL));
    
    rand1 = rand(); 
    rand2 = rand();
    rand1 = rand() % (max + min - min) + min; 
    rand2 = rand() % (max + min - min) + min; 
    printf("%d.) %d %c %d = ", i, rand1, o, rand2);
    
    scanf("%d", &in);
    switch(op)
    {
        case 1:
            out = rand1 + rand2;
            break;
        case 2:
            out = rand1 - rand2;
            break;
        case 3:
            out = rand1 * rand2;
            break;
        case 4:
            out = rand1 / rand2;
            break;
        default:
            break;
    }

        if(in == out) {
            counter++;
        } else
            continue;
    }
    printf("Your Score: %d\n", counter);

}

int hScore() {
    
    int score = counter;
        if(score > counter) {
            printf("Highest Score: %d\n", score);
        } else 
            printf("Highest Score: %d\n", counter);
    return main();
}


int main() {

    printf("==================  Welcome to Easy Math!  ==================\n");
    printf("1 Start Game\n2 Difficulty\n3 Highest Score\n4 Quit Game\n");
    printf("Press Key Option: ");
    scanf("%d", &ch1);

    switch(ch1)
    {
    case 1:
        preset();
        break;
    case 2:
        diff();
        break;
    case 3:
        hScore();
        break;
    case 4:
        break;
    default:
        break;
    }
} 