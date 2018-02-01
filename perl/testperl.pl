$a = 60;
$b = 13;

print("\$a is $a\n");
print("\$b is $b\n");

$a = $a ^ $b;
$b = $a ^ $b;
$a = $a ^ $b;

print("\$a is $a\n");
print("\$b is $b\n");

swap($a,$b);
print("\$a is $a\n");
print("\$b is $b\n");
swap($a,$b);
print("\$a is $a\n");
print("\$b is $b\n");

sub swap{
    $_[0] = $_[0] ^ $_[1];
    $_[1] = $_[0] ^ $_[1];
    $_[0] = $_[0] ^ $_[1];
}

$s = "why so serious, 1";
$offset = 36;
$s =~ s/(\d+)\s*$/$1+$offset/ge;
print($s);

