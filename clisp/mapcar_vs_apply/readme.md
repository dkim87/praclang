(mapcar #'func '(hello world))
equals
`(,(func 'hello) ,(func 'hello))

(mapcar #'func '((hello world) (wow)))
equals
`(,(func '(hello world)) ,(func 'wow))


while
(apply #'func '((hello world) (wow)))
equals
(func (hello world) (wow))

apply just supply the arguments to a specific function (only once).



