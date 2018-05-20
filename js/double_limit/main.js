var x = Math.pow(2, 30)-1;
var y = 0;

while(y < x){
	y = x;
	x += 0.0000001;

}
document.writeln(x);
document.writeln("<br />");

