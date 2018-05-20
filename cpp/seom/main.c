#include<stdio.h>
#define N 4
#define M 4

void printarr(int arr[N][M]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j<N; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void bfs(int arr[N][M], int visited[N][M], int i, int j){

    // array bound check
    if(i < 0 || i >= N)
        return;
    if(j < 0 || j >= N)
        return;

    if (arr[i][j] == 0){ // if water, not interested
        return;
    }else if(visited[i][j] == 1){ // if already visited, not interested
        return;
    }else{
        visited[i][j] = 1; // mark as visited
        bfs(arr, visited, i+1, j); // up
        bfs(arr, visited, i-1, j); // down
        bfs(arr, visited, i, j+1); // right
        bfs(arr, visited, i, j-1); // left
    }
}

int find_seom_soo(int arr[N][M]){
    int seom_soo = 0;
    int visited[N][M] = {0,};

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){

            if (arr[i][j] == 0){
                continue; // if water, proceed to the next element
            }else if (visited[i][j] == 1){
                continue; // if visited, proceed to the next
            }else{
                seom_soo++; // new island found
                bfs(arr, visited, i, j); // explore
            }
        }
    }

    printf("seom soo : %d\n", seom_soo);
    return seom_soo;
}

int main(){
    int arr[N][M] = {{0, 1, 1, 1}, // 1 means land, 0 means water
        {0, 0, 0, 0},
        {1, 0, 0, 0},
        {1, 1, 0, 0}};
    find_seom_soo(arr);

    int arr2[N][M] = {{1, 1, 0, 0},
        {0, 0, 1, 0},
        {1, 0, 1, 0},
        {0, 1, 0, 1}};
    find_seom_soo(arr2);

    return 0;
}
