#include <stdio.h>
#include <stdlib.h>
#define SIZE 13
struct HashTable {
    int *arr;
    int capacity;
};
struct HashTable* initializeHashTable(int capacity) {
    struct HashTable* hashTable = (struct HashTable*)malloc(sizeof(struct HashTable));
    hashTable->arr = (int*)malloc(sizeof(int) * capacity);
    hashTable->capacity = capacity;
    for (int i = 0; i < capacity; i++) {
        hashTable->arr[i] = -1;
    }

    return hashTable;
}
int hashFunction(int key, int capacity) {
    return key % capacity;
}
void insert(struct HashTable* hashTable, int key) {
    int index = hashFunction(key, hashTable->capacity);
    while (hashTable->arr[index] != -1) {
        index = (index + 1) % hashTable->capacity;
    }
    hashTable->arr[index] = key;
}
void display(struct HashTable* hashTable) {
    printf("Hash Table:\n");
    for (int i = 0; i < hashTable->capacity; i++) {
        printf("Index %d: ", i);
        if (hashTable->arr[i] != -1) {
            printf("%d", hashTable->arr[i]);
        } else {
            printf("Empty");
        }
        printf("\n");
    }
}
int main() {
    struct HashTable* hashTable = initializeHashTable(SIZE);
    insert(hashTable, 11);
    insert(hashTable, 22);
    insert(hashTable, 33);
    insert(hashTable, 43);
    insert(hashTable, 63);
    insert(hashTable, 76);
    insert(hashTable, 24);
    display(hashTable);
    free(hashTable->arr);
    free(hashTable);
    return 0;
}

