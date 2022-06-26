#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

const int NO_OF_HITTERS = 10;
const int MAX_NAME_LENGTH = 100;
struct Hitter {
    char last [16];
    //char first [11];
    char* first;
    int home_runs;
    int year;
};

struct HallOfFame {
    struct Hitter players[NO_OF_HITTERS];
    int nPlayers;
};

void printHallOfFame (struct HallOfFame* hrp) {
    for (int k = 0; k < hrp->nPlayers; k++) {
        puts(hrp->players[k].last);
        puts(hrp->players[k].first);
        printf("%d in %d\n", hrp->players[k].home_runs, hrp->players[k].year);
        puts("");
    }
}
int main() {

    printf("Size of struct Hitter is %lu\n", sizeof(struct Hitter));
    printf("Size of struct HallOfFame is %lu\n", sizeof(struct HallOfFame));

    struct HallOfFame hr; // 364 random bytes on the stack
    hr.nPlayers = 0;
    // initialize hr.players[0]
    strcpy(hr.players[hr.nPlayers].last, "Ruth");
    hr.players[hr.nPlayers].first = (char*)malloc(MAX_NAME_LENGTH*sizeof(char));
    strcpy(hr.players[hr.nPlayers].first, "Shanmuganandappillai");
    hr.players[hr.nPlayers].home_runs = 60;
    hr.players[hr.nPlayers].year = 1927;
    hr.nPlayers++;

    strcpy(hr.players[hr.nPlayers].last, "Maris");
    // the new first name is Suvarnadevanathan
    //strcpy(hr.players[hr.nPlayers].first, "Roger");
    hr.players[hr.nPlayers].first = (char*)malloc(MAX_NAME_LENGTH*sizeof(char));
    strcpy(hr.players[hr.nPlayers].first, "Suvarnadevanathan");
    hr.players[hr.nPlayers].home_runs = 61;
    hr.players[hr.nPlayers].year = 1961;
    hr.nPlayers++;

    printHallOfFame(&hr);


    for (int i = 0; i < hr.nPlayers; i++) {
        free(hr.players[i].first);
        hr.players[i].first = 0;
        //free(&hr);
    }
    for (int i = 0; i < hr.nPlayers; i++) {
        free(hr.players[i].first);
        //free(&hr);
    }

    struct HallOfFame* hr2p;
    hr2p = (struct HallOfFame*)malloc(sizeof(struct HallOfFame));
    hr2p->nPlayers = 0;
    // use a for loop to initialize everything else
    // free hr2p
    for (int i = 0; )
    return 0;
}
