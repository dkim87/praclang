#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_WORDS 20
#define MAX_CHAR 255

void SWAP(char str1[], char str2[]);

typedef struct word{
    char str[MAX_CHAR];
    int freq;
}word;

/*
void quicksort(char** list, int left, int right){ // sort from the prof
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
        while(i<j){
            SWAP(list[left], list[i]);
            quicksort(list, left, j-1);
            quicksort(list, j+1, right);
        }
    }
}
*/

// This Quick Sort algorithm refers to CLRS book: intro to algorithm.
void swap(word *a, word *b){
    word t = *a;
    *a = *b;
    *b = t;
}

int partition(word words[], int low, int high){
    int pivot = words[high].freq;
    int i = low;

    for(int j = low; j <= high - 1; j++){
        if (words[j].freq >= pivot){
            swap(&words[i], &words[j]);
            i++;
        }
    }
    swap(&words[i], &words[high]);
    return i;
}

void quickSort(word words[], low, high){
    if (low < high){
        int pivot_index = partition(words, low, high);
        quickSort(words, low, pivot_index - 1);
        quickSort(words, pivot_index + 1, high);
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

    //char word[MAX_CHAR]="";
    //char words[MAX_WORDS][MAX_CHAR];
    word mywords[MAX_WORDS];
    for(int i = 0; i < MAX_WORDS; i++){
        for(int j = 0; j < MAX_CHAR; j++){
        mywords[i].str[j] = '\0';
        }
        mywords[i].freq = 0;
    }

    //initialize freq(uencies) to zero
    //int freq[MAX_WORDS];
    //for (int i=0;i<MAX_WORDS;i++){
    //    mywords[i].freq = 0;
    //}

    //test copy
    char str_from_file[MAX_CHAR];

    //Copy all str_from_file into words
    int index = 0;
    while(fscanf(fp, "%s", str_from_file)==1){
        int contd = 0;
        for(int i = 0; i < MAX_WORDS; i++){
            if(strcmp(str_from_file, mywords[i].str)==0){
                mywords[i].freq++;
                contd = 1; // in order to continue while loop;
                break;
            }
        }
        if(contd == 1){
            continue;
        }

        printf("index: %d\n",index);
        printf("%s\n", str_from_file);
        strcpy(mywords[index].str,str_from_file);
        mywords[index].freq++;
        index++;
    }

    quickSort(mywords,0,MAX_WORDS-1);

    // print words
    printf(">>>>> print words\n");
    for(int i=0;i<MAX_WORDS;i++){
        printf("%s\n",mywords[i].str);
    }

    // print frequencies
    printf(">>>>> print freq\n");
    for (int i=0;i<MAX_WORDS;i++){
        printf("mywords[%d].freq = %d\n",i, mywords[i].freq);
    }

    // print 5 most frequent words
    printf(">>>> print answers.\n");
    for (int i =0; i<5; i++){
        printf("word: %s // frequency: %d\n", mywords[i].str, mywords[i].freq);
    }
    return 0;
}
