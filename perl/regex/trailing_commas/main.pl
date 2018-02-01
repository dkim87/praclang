use strict;

my $str = "hello world,,,,,";

$str =~ s/,+$//;

print $str;


