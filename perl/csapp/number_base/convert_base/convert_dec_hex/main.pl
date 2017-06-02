#!/usr/local/bin/perl
#Convert list of decimal numbers into hex


for (my $i = 0; $i < @ARGV; $i++) {
    #printf("%d\t = 0x%x\n", $ARGV[$i], $ARGV[$i]);
    printf("%d\t = %b\n", $ARGV[$i], $ARGV[$i]);
}

my $j = 345;
my $k = 123;
printf("%d\n", $j+$k);
