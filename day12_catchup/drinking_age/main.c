#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN_NAME (20)
#define NUM_PEOPLE (100)
typedef struct _person {
    char name[LEN_NAME];
    int age;
} Person;

int legalInUSA(Person* person) {
    return (person->age >= 21) ? 1 : 0;
}

int legalInEurope(Person* person) {
    return ((person->age >= 18 ) ? 1 : 0) &&
            (person->name[0] == 'a');
}

void printPeople(Person* const people, int len,
                 int(*check)(Person*)) {
    int i;
    for (i = 0; i < len; i++) {
        if (check(&people[i]) == 1) {
            printf("%s %d\n", people[i].name, people[i].age);
        }
    }
}

int main() {
    Person people [NUM_PEOPLE];
    int i;
    // srand(3);
    srand(time(NULL));
    for (i = 0; i < NUM_PEOPLE; i++) {
        people[i].name[0] = 'a' + rand()%26;
        people[i].name[1] = '\0';
        people[i].age = rand() % 30;
    }

    puts("USA");
    printPeople(people, NUM_PEOPLE, &legalInUSA);

    puts("Europe");
    printPeople(people, NUM_PEOPLE, &legalInEurope);

    return 0;
}