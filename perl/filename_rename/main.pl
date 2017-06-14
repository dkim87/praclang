#!/usr/local/bin/perl
# use strict;
# use warnings;

use File::Copy qw(mv);

$old_name = "dog_dog.txt";
$new_name = "cat_cat.txt";
mv $old_name, $new_name;

$HOME = "/Users/dqmacair";

my $directory = ".";
opendir (DIR, $directory) or die $!;

@file = readdir(DIR); # file contains ., .., etc.
print @file; # print everything at once.
print "\nhello world\n";
print $file; # prints nothing
print "\nsize?\n";
$size = @file; # prints num of files
print $size;
print "\n";

$i = 0;
while($size > 0){
    print $file[$i]; # prints each file one by one
print "\n";
    $i++;
    $size--;
}


while (my @file = readdir(DIR)) {
    print "$file\n";
}
