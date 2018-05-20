#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

struct matrix{
    int *arr;
    const size_t h;
    const size_t w;
};

struct vec{
    int *arr;
    const size_t l;
};

#define MATRIX_INDEX(i, j, width) ((i)*(width) + (j))

void matrix_print(struct matrix mat){
    size_t h = mat.h;
    size_t w = mat.w;

    printf("%lu x %lu matrix -- \n", h, w);
    for(size_t i = 0; i < h; i++){
        for(size_t j = 0; j < w; j++){
            printf("%d\t", mat.arr[MATRIX_INDEX(i, j, mat.w)]);
        }
        printf("\n");
    }
}

struct matrix matrix_add(struct matrix mat1, struct matrix mat2){

    assert(mat1.h == mat2.h);
    assert(mat1.w == mat2.w);

    size_t h = mat1.h;
    size_t w = mat1.w;

    struct matrix sum = {calloc(w * h, sizeof *sum.arr), h, w};

    const size_t num = h * w;
    for(size_t i = 0; i < num; i++ ){
        sum.arr[i] = mat1.arr[i] + mat2.arr[i];
    }
    return sum;
}

void matrix_initialize(struct matrix mat){
    const int h = mat.h;
    const int w = mat.w;
    const int size = h * w;

    for(int i = 0; i < size; i ++ ){
        mat.arr[i] = i;
    }

}

void matrixp_delete(struct matrix *mat){
    free(mat->arr);
    free(mat);
}

void matrix_delete(struct matrix mat){
    free(mat.arr);
}

struct vec matrix_row2vec(struct matrix mat, size_t row_n){
    size_t w = mat.w;
    struct vec v = {calloc(w, sizeof * v.arr), w};

    for(size_t i = 0; i < v.l; ++i){
        v.arr[i] = mat.arr[ MATRIX_INDEX(row_n, i, w) ];
    }

    return v;
}

void vecp_delete(struct vec *v){
    free(v->arr);
    free(v);
}

void vec_delete(struct vec v){
    free(v.arr);
}

void matrix_row_add(struct matrix mat, size_t i){

}


int main(){

    int n = 5;
    int m = 6;
    struct matrix x1 = {calloc(n*m, sizeof *x1.arr), 5, 6};
    struct matrix x2 = {calloc(n*m, sizeof(int)), 5, 6};

    matrix_initialize(x1);
    matrix_initialize(x2);

    matrix_print(x1);

    struct matrix x3 = matrix_add(x1, x2);

    matrix_print(x3);

    matrix_delete(x1);
    matrix_delete(x2);
    matrix_delete(x3);
    //free(x3.arr);

    return 0;
}
