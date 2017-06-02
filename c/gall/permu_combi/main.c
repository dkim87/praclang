#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void swap(char *x, char *y) {char temp = *x; *x = *y; *y = temp;}

void combi(FILE *fp, int arr[],int data[],int start,int end,int index,int r) {
    if (index == r) {
        for (int j=0; j<r; j++) fprintf(fp, "%d", data[j]);
        fprintf(fp, "\n");
        return;
    }

    for (int i=start; i<=end && end-i+1 >= r-index; i++) {
        data[index] = arr[i];
        combi(fp, arr, data, i+1, end, index+1, r);
    }
}

void permute(FILE *fw, char *a, int l, int r) {
    int i;
    if (l == r)
    fprintf(fw, "%s\n", a);
    else
    {
        for (i = l; i <= r; i++) {
          swap((a+l), (a+i));
          permute(fw, a, l+1, r);
          swap((a+l), (a+i));
        }
    }
}

int main(void) {

    FILE * fp=fopen("com.txt", "w+");
    FILE * fw=fopen("per.txt", "w+");
    int arr[10], i;
    int *dd=(int*)malloc(sizeof(int)*6);
    char str[10];

    if(fp==NULL) {
        printf("can not open file base.txt \n");
        exit(-1);
    }

    for(i=0;i<10;i++) arr[i]=i;
    combi(fp, arr, dd, 0, 10-1, 0, 4);

    rewind(fp);
    for(i=0; i<210; i++) {
        fscanf(fp, "%s", str);
        permute(fw, str, 0, 4-1);
    }

free(dd); fclose(fp); fclose(fw); return 0; }
