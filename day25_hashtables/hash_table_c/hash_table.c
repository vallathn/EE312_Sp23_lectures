#include <stdio.h>
#include <stdlib.h>


typedef struct entry {
    int value;
    struct entry* next;
} Entry;

typedef struct hashtable {
    int size;
    Entry** buckets;
} HashTable;

void init (HashTable* ht, int n) {
    ht->size = n;
    ht->buckets = (Entry**)calloc(n, sizeof(Entry*));
}
/*
int hash(Customer* cust) {
    long hash = 31*cust->diapers + cust->rattles + ... +
            cust->name.hashCode();
    return hash%size;
}
 */
int hash(int n, int size) {
    return n % size;
}

int find (HashTable* ht, int value) {
    int index = hash(value, ht->size);
    Entry* head = ht->buckets[index];
    while (head != NULL) {
        if (head->value == value)
            return 1;
        head = head->next;
    }
    return 0;
}

void insert(HashTable* ht, int value) {
    if (find(ht, value))
        return;
    Entry* nelement = (Entry*)malloc(sizeof(Entry));
    nelement->value = value;
    nelement->next = NULL;
    int ix = hash(value, ht->size);
    if (ht->buckets[ix] == NULL) {
        ht->buckets[ix] = nelement;
    } else {
        Entry* head = ht->buckets[ix];
        while (head->next != NULL)
            head = head->next;
        head->next = nelement;
    }
}

void print(HashTable* ht) {
    int i;
    for (i = 0; i < ht->size; i++) {
        printf("%d = [", i);
        // print all elements
        Entry* head = ht->buckets[i];
        while (head != NULL) {
            printf("%d ", head->value);
            head = head->next;
        }
        printf("]\n");
    }
}

int main() {
    HashTable ht;
    init(&ht, 10);
    insert(&ht, 1);
    insert(&ht, 99);
    insert(&ht, 88);
    insert(&ht, 88);
    insert(&ht, 78);
    insert(&ht, 56);
    print(&ht);
    printf("find 88: %d\n", find(&ht, 88));
    printf("find 85: %d\n", find(&ht, 85));
    printf("find 78: %d\n", find(&ht, 78));

    return 0;
}