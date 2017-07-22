(load "../describe-location/main.lisp")
(load "../describe-objects/main.lisp")
(load "../describe-path/main.lisp")

(defparameter *location* 'living-room)

(defun look()
  (append (describe-location *location* *nodes*)
          (describe-paths *location* *edges*)
          (describe-objects *location* *objects* *object-locations*)))

(print
 (look)
 )

