No way to redirect the outer-function's argument into inner-function (clozure capturing). Trying curry.

In fact, it turns out, from c++14 no <functional> header is required for lambda expression and the keyword 'auto' works fine instead of function<string(string)> kind of bulky header. Therefore no problem without it.