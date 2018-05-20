x = 2^30-1
y = 0

z = 0
while ( y < x ){
    y <- x;
    x <- x + 0.0000001;

    z <- z + 1;
    if (z == 1000000){
        print(x, digits = 20);
        z = 0;
    }
}

print(x, digits = 10);
