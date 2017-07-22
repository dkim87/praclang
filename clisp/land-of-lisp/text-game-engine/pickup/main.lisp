(load "../walk/main.lisp")

(defun pickup (object)
  (cond ((member object
                 (objects-at *location* *objects* *object-locations*))
         (push (list object 'body) *object-locations*)
         `(you are now carrying the ,object))
        (t '(you cannot get that.))))

(member 'whiskey (objects-at *location* *objects* *object-locations*))


