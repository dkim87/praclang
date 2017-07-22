#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Node {
    char data[30];
    struct Node * left;
    struct Node * right;
} node;

node *nodeNew(char * data){
    node *new = malloc(sizeof *new);
    strcpy(new->data, data);
    new -> left = new->right = NULL;
    return new;
}

int strCmp(void *vp1, void *vp2){

    // why *(char **) is wrong
    char *hello = "abcdefghijk";
    char *s = *(char **)hello;
    printf("%p\n", s); //0x6867666564636261 <- little endian

    /*
    char *s1 = &*(char *)vp1;
    char *s2 = &*(char *)vp2;
    int ret = strcmp(s1, s2);
    */

    // or
    char *s1 = (char *)vp1;
    char *s2 = (char *)vp2;
    int ret = strcmp(s1, s2);

    // or
    //int ret = strcmp((char *)vp1, (char *)vp2);

    printf("strCmp ret value is %d\n", ret);
    return ret;
}

node *insert(node *root, char *data, int (*fn)(void *, void *), int depth){
    printf("depth is %d\n", depth);
    printf("data is %s\n", data);
    if(root != NULL){
        printf("root->data is %s\n", root->data);
        int x = (*fn)((void*)root->data, (void*)data);
        printf("x is %d\n", x);
    }
    if(root == NULL)
        root = nodeNew(data);
    else if (( *fn )(data, root->data) <= 0){
        printf("else if cond");
        root->left = insert(root->left, data, fn, depth++);
    }else{
        printf("else cond");
        root->right = insert(root->right, data, fn, depth++);
    }
    return root;
}

int main(void){
    node *root = NULL;
    char input[30];
    int depth = 0;

    /*
    int (*fp)(void *, void *);
    fp = &strCmp;
    */

    printf("%p\n", strCmp);
    printf("%p\n", &strCmp);
    printf("%p\n", *strCmp);

    while(true){
        printf("what is input?\n");
        scanf("%s", input);
        printf("input is %s\n", input);
        //root = insert(root, input, fp, depth);
        root = insert(root, input, &strCmp, depth);
    }

    return 0;
}
