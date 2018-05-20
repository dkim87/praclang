// https://www.codentalks.com/t/topic/3095/6
// modified by nbdgdg

#include<stdio.h>
#include<stdlib.h>


typedef struct node_struct
{
    int number;
    struct node_struct *p_next;
} NODE;

void AddNumber(NODE **pp_head, NODE **pp_tail, int data)
{

    if (*pp_head == NULL)
    {
        (*pp_head) = (NODE*)malloc(sizeof(NODE));
        *pp_tail = *pp_head;
        printf("first node added\n");
    }

    else
    {
        (*pp_tail) -> p_next = (NODE*)malloc(sizeof(NODE));
        (*pp_tail) = (*pp_tail)->p_next;
        printf("last node added\n");
    }

    (*pp_tail)->number = data;
    (*pp_tail)->p_next = NULL;

    return ;
}

int main()
{

    printf("연결 리스트를 공부해보자!");
    NODE *p_head = NULL;
    NODE *p_tail = NULL;
    NODE **pp_head = &p_head;
    NODE **pp_tail = &p_tail;
    int sum = 0;

    while (1)
    {
        int data;
        printf("\n\n숫자를 입력하세요 (9999를 누르면 종료): ");
        scanf("%d", &data);


        if (data == 9999){
            break;
        }

        AddNumber(pp_head, pp_tail,  data);
    }

    printf("Linked List: ");
    while (p_head != NULL)
    {
        printf("%d -> ", p_head->number);
        sum = sum + p_head->number;
        p_head = p_head->p_next;
    }

    printf("NULL\nsum = %d\n", sum);

    while (pp_head != NULL)
    {
        p_head = *pp_head;
        *pp_head = p_head->p_next;
        free(p_head);
    }

    return 0;

}
