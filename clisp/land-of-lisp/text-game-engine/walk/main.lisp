(load "../look/main.lisp")

(defun walk(direction)
  (let ((next (find direction
                    (cdr (assoc *location* *edges*))
                    :key #'cadr)))
    (if next
        (progn (setf *location* (car next))
               (look))
      '(you cannot go that way.))))

