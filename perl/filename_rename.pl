# use strict;
# use warnings;
use File::Copy qw(mv);

$old_name = "cat_cat.txt";
$new_name = "dog_dog.txt";
mv $old_name, $new_name;

$HOME = "/Users/dqmacair";
my $directory = ".";
opendir (DIR, $directory) or die $!;

@file = readdir(DIR);
print @file;
print "\nsize?\n";
$size = @file;
print $size;
print "\n";
$i = 0;
while($size > 0){
    print $file[$i];
print "\n";

    $i--;
    $size--;
}


while (my $file = readdir(DIR)) {
    print "$file\n";
}
