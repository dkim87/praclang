#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_WORDS 20

void SWAP(char str1[], char str2[]);

typedef struct word{
    char[256];
    int freq;
}word;

typedef struct words{
    word mywords[MAX_WORDS];
}words;

void quicksort(char** list, int left, int right){
    int pivot, i, j;
    if(left<right){
        pivot=list[left].key;
        do{
            do i++;
            while(list[i].key<pivot);
            do j--;
            while(list[j].key>pivot);
            if(i<j)
                SWAP(list[i], list[j]);
        }
        while(i<j) {
            SWAP(list[left], list[i]);
            quicksort(list, left, j-1);
            quicksort(list, j+1, right);
        }
    }
}

int main(){
    //char *filename = "test.txt";
    //FILE *fp = fopen(filename, "r");
    FILE *fp = fopen("test.txt", "r");
    if(fp==NULL){
        printf("can't open file\n");
        exit(1);
    }

    //char word[256]="";
    //char words[MAX_WORDS][256];


    //initialize freq(uencies) to zero
    int freq[MAX_WORDS];
    for (int i=0;i<MAX_WORDS;i++){
        freq[i] = 0;
    }

    //Copy all word into words
    int index = 0;
    while(fscanf(fp, "%s", word)==1){
        int contd = 0;
        for(int i = 0; i < MAX_WORDS; i++){
            if(strcmp(word, words[i])==0){
                freq[i]++;
                contd = 1; // in order to continue while loop;
                break;
            }
        }
        if(contd == 1){
            continue;
        }

        printf("index: %d\n",index);
        printf("%s\n", word);
        strcpy(words[index],word);
        freq[index]++;
        index++;
    }

    printf(">>>>> print words\n");
    for(int i=0;i<MAX_WORDS;i++){
        printf("%s\n",words[i]);
    }

    printf(">>>>> print freq\n");
    for (int i=0;i<MAX_WORDS;i++){
        printf("freq[%d] = %d\n",i, freq[i]);
    }
    return 0;
}
