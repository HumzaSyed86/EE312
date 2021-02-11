/*
 * Project1.cpp
 *
 * Name: Humza Syed
 * EE312 spring 2021
 * SuperStrings
 */

#include <stdio.h> // provides declarations for printf and putchar
#include <stdint.h> // provides declarations for int32_t uint32_t and the other (new) standard C types


int stringCompare(char targets[], char candidates[]);
int parseFile(char targets [],char copyArray [5000][20]);

void printSuperStrings(char targets [], char candidates []) {
    char segTargets[5000][20]; //stores the normal text
    char segCandidates[5000][20]; // stores the strange text, single word in an array.

    int wordAmt  = parseFile(targets,segTargets) ; //adds 1 to get 0=19 to equal 20
    int wordAmt2 = parseFile(candidates,segCandidates) ;

    for(int i = 0; i<wordAmt; i++){
        for(int j = 0; j<wordAmt2;j++){
            if(stringCompare(segTargets[i],segCandidates[j]) == 0){
                printf("%s\n",segCandidates[j]);
            }
        }

    }

}

int parseFile(char targets [], char  copyArray [5000][20]) {

    int w = 0; // global index necessary
    int word = 0; // horizontal
    int occurrences = 0; // vertical

        for (; targets[w] != '\0';) {

            for (; (targets[w] == 32 || targets[w] == '\t' || targets[w] == '\n') && targets[w] != '\0'; w++) {} //iterates through the whitespace until the first letter.

            for (; targets[w] != 32 && targets[w] != '\t' && targets[w] != '\n' && targets[w] != '\0'; w++) {
                //goes through a word until it sees white space
                copyArray[occurrences][word] = targets[w]; // copies the char into the 2d array.
                word++; //moves word to the next line segment for the next letter

            }
            if(targets[w]=='\0'){break;}

            copyArray[occurrences][word] = '\0'; //puts null term after word
            word = 0;//resets like a type writer for the next word
            occurrences++;//moves the row down.
        }

        return occurrences; //occurrences is the number of words.
    }

int stringCompare(char targets[], char candidates[]) { //index for 1 word

    int a = 0;
    int b = 0;
    while (targets[a] != '\0') {

        if (targets[a] == candidates[b]) {
            a++;
            b++;
        } else if (targets[a] == '\0' && candidates[b] == '\0') { //end reached
            return 0;
        } else if (candidates[b] == '\0' && targets[a] != '\0') {
            return 1; //fails
        }
        else {
            b++;
        }

    }

}