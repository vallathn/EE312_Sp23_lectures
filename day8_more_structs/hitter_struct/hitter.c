#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Example taken from free book "Thinking in C", Mindview Inc.

const int NO_OF_HITTERS = 10;

struct Pitcher {
    char* last;
};
struct Hitter {
    char last [16];
    char first [11];
    int home_runs;
    int year;
};

struct HallOfFame {
    struct Hitter players[NO_OF_HITTERS];
    int nPlayers;
};

int main() {
    printf("size of Hitter is %lu\n", sizeof(struct Hitter));
    /*
     * A: 40
     * B: 36
     * C: 12
     * D: Other, or unknown
     *
     */
    printf("size of HallOfFame is %lu\n", sizeof(struct HallOfFame));

    struct HallOfFame hr;
    int i;
    hr.nPlayers = 0;

    /* Insert 1st player */
    strcpy(hr.players[hr.nPlayers].last, "Ruth");
    strcpy(hr.players[hr.nPlayers].first, "Babe");
    hr.players[hr.nPlayers].home_runs = 60;
    hr.players[hr.nPlayers].year = 1927;
    (hr.nPlayers)++;

    /* Insert 2nd player */
    strcpy(hr.players[hr.nPlayers].last, "Maris");
    strcpy(hr.players[hr.nPlayers].first, "Roger");
    hr.players[hr.nPlayers].home_runs = 61;
    hr.players[hr.nPlayers].year = 1961;
    (hr.nPlayers)++;

    /* Print players in hr */
    for (i = 0; i < hr.nPlayers; i++) {
        printf("%d: {%s, %s, %d}\n",
        hr.players[i].year,
               hr.players[i].last,
               hr.players[i].first,
               hr.players[i].home_runs
        );
    }

    struct Hitter* hrp = (struct Hitter*) &hr;
    printf("\nlast\t%p\nfirst\t%p\n&home_runs\t%p\n&year\t%p\nnext struct\t%p\n\n",
           hrp->last, hrp->first, &(hrp->home_runs), &(hrp->year), hrp+1);

    printf("%p %p\n", &hr, (&hr) + 1); // 364 bytes difference
    printf("%p %p\n", &hrp, (&hrp) + 1); // 36 bytes difference
    struct Pitcher p;
    p.last = (char*) malloc(20);
    strcpy(p.last, "Suvarnasinghe");

    struct Pitcher* p1 = (struct Pitcher*) malloc(sizeof(struct Pitcher));
    p1->last = "Muthukumar";
    printf("\n%s\n ", p1->last);
    p1->last = (char*) malloc(sizeof(char)*100);
    strcpy(p1->last, "MuthukumarAnbazHAGASWAMY");
    free(p.last);
    return 0;
}