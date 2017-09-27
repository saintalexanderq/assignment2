//
//  main.c
//  assignment2Final
//
//  Created by Alex Quigley on 2017-09-27.
//  Copyright © 2017 Alex Quigley. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    int choice; //changed char to int
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): \n");
    scanf("%c", &play); // changed %d to %c (character is entered, not an int)
    
    if (play == 'y') {  // added another = sign
        
        /* Below we had to change all print anf scan statements to printf and scanf */
        
        printf("You are a prisoner in a room with 2 doors and 2 guards.\n");
        printf("One of the doors will guide you to freedom and behind the other is a hangman -- you don't know which is which.\n");
        printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
        printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
        printf("What do you ask so you can pick the door to freedom?\n\n");
        printf("\t1.Ask the truth-guard to point to the door of doom.\n");
        printf("\t2.Ask the liar-guard to point to the door of doom.\n");
        printf("\t3.Doesn't matter which one you pick.\n");
        printf("Pick one choice between 1, 2, or 3: \n"); //added this to make it easier for user to understand what to input
        
        scanf("%d", &choice); //changed %f to %d
        
        char *answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n"; //added char *, as answer is more than one letter
        
        /* below fixed the print with printf, and changed the "c" to %s as answer is a string and not a single letter */
        
        switch (choice) {
            case 1:
                printf("%s", answer);
                break;
            case 2:
                printf("%s", answer);
                break;
            case 3:
                printf("%s", answer);
                break;
            default:
                break;
                
        }
    }
    
    /* -----------
     STRETCH GOALS
     --------------*/
    
    printf("Would you like to play again? (y/n)\n");
    scanf("%c\n", &play);
    
    if (play == 'y') { // stuck
        
        
        
    }
    
    return 0;
}
