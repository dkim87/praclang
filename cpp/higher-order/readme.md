# my conclusion at 2017-06-26 04:58
- lambda (anonymous function) is useful.
- There are two types (or three if combined) of higher-order functions:
    - function which takes function as its argument.
    - function which returns function.
- The former is very useful. It can reuse codes and save many lines.
- In C/CPP, the former concept can be supported (without <functional> header) using functional pointers.
- The latter is, I'm not sure. Why not reduce arguments one by one, step by step if required? e.g.
```CPP
greeting_with_to(string msg, string name); // arbitrary function
greeting_with_Hello_to(string name){ // Indeed, this is bulky and burdensome but intuitive and simple.
    greeting_with_to("Hello", name);
}
```
END

