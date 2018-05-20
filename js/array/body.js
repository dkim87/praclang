
document.write("body js!")

var people = new Array("Bucky", "Tommy", "Sarah", "Hanah", "Mikety");

document.write(people);
document.write("<br>");

document.write(people);
document.write("<br>");

document.write(people[3]+"<br>");

var things = new Array(3);

things[0] = "jersey shore";
things[1] = "brian regan";
things[2] = "thenewboston";

document.write(things);
document.write("<br>");

var stuff = new Array();

var x = 9;

var tuna = 65 - 54;

stuff[0] = "baconator";
stuff[1] = "old pumpkins";

document.write(stuff);
document.write("<br>");

var dudes = new Array("bucky", "dan", "randy");

document.write(dudes.length);
document.write("<br>");

var chicks = new Array("Lisa", "Erin", "Hannah");

var people = dudes.concat(chicks);
// var people = dudes + chicks // does not work
document.write(people);
document.write("<br>");

var movies = new Array("Avaatar", "Good will hunting", "vanilla sky", "fight club");

var string1 = movies.join(" - ");
document.write(string1);
document.write("<br>");

document.write(movies[3]);
document.write("<br>");

var z = movies.pop();
document.write(z);
document.write("<br>");


document.write(movies[3]);
document.write("<br>");

// reverse, push, sort methods
var bp = new Array("head", "shoulders", "knees", "toes");

bp.reverse();
bp.push("tongue", "liver");
bp.sort();

var string1 = bp.join();
document.write(string1);
document.write("<br>");

//var pie = prompt("Enter your name:", "arst");
//document.write("hello "+ pie);
//document.write("<br>");

var crap = new Array(3);

/*
for(i=0; i <3; i++){
	crap[i] = prompt("Add something to the array:", "");
}

document.write(crap);
document.write("<br>");
*/

// cool techniques to print array elements

var stuff = new Array("apples", "pears", "bacon", "tuna", "ham");
stuff.sort();

for(i = 0; i<stuff.length; i++){
	document.write(stuff[i] + "<br/>");
}


