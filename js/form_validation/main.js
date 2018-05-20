function validation(){
	if(document.forms[0].thebox.checked){
		document.write("hello world!");
		document.write("<br />");
		alert("hello!")
	}else{
		document.write("unchecked"+"<br />");
		alert("world!")
}
}
