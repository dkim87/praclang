// https://www.xmos.com/download/private/AN10009%3A-How-
// to-debug-a-program-at-the-machine-instruction-level%281.0.0rc4%29.pdf

int main(){
    int i, j = 0;
    for(i = 0; i < 5; ++i){
        j += i;
    }
    return 0;
}
