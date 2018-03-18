(defparameter *nodes* '((living-room (you are in the living-room. a wizard is snoring loudly on the couch.))
                        (garden (you are in a beautiful garden.
                                     there is a well in front of you.))
                        (attic (you are in the attic.
                                    there is a giant welding torch in the corner))))

(defparameter *edges* '((living-room (garden west door)
                                     (attic upstairs ladder))
                        (garden (living-room east door))
                        (attic (living-room downstairs ladder))))

(defun describe-path (edge)
  `(there is a ,(caddr edge) going ,(cadr edge) from here.))

(defun describe-location (location nodes)
  (cadr (assoc location nodes)))

(defun describe-path (edge) `(there is a ,(caddr edge) going ,(cadr edge) from here.))

(defun describe-paths (location edges)
  (apply #'append (mapcar #'describe-path (cdr (assoc location edges)))))

(defparameter *objects* '(whiskey bucket frog chain))

(defparameter *object-locations* '((whiskey living-room)
                                   (bucket living-room)
                                   (chain garden)
                                   (frog garden)))

(defun objects-at (loc objs obj-locs)
  (labels ((at-loc-p (obj)
             (eq (cadr (assoc obj obj-locs)) loc)))
    (remove-if-not #'at-loc-p objs)))

(defun describe-objects (loc objs obj-loc)
  (labels ((describe-obj (obj)
             `(you see a ,obj on the floor.)))
    (apply #'append (mapcar #'describe-obj (objects-at loc objs obj-loc)))))

(defparameter *location* 'living-room)

(defun look()
  (append (describe-location *location* *nodes*)
          (describe-paths *location* *edges*)
          (describe-objects *location* *objects* *object-locations*)))

(defun walk(direction)
  (let ((next (find direction
                    (cdr (assoc *location* *edges*))
                    :key #'cadr)))
    (if next
        (progn (setf *location* (car next))
               (look))
        '(you cannot go that way.))))

(defun pickup (object)
  (cond ((member object
                 (objects-at *location* *objects* *object-locations*))
         (push (list object 'body) *object-locations*)
         `(you are now carrying the ,object))
        (t '(you cannot get that.))))

(defun test-describe()
  (princ (assoc 'garden *nodes*))
  (Print (describe-path '(garden west door)))
  (print (assoc 'living-room *edges*))
  (print (assoc 'garden *edges*))

  (format t "~%") ;; new line
  (print "cdr-assoc")
  (print (cdr(assoc 'living-room *edges*)))
  (print (cdr(assoc 'garden *edges*)))

  (format t "~%") ;; new line
  (print "mapcar describe-path")
  (print (mapcar #'describe-path (cdr (assoc 'living-room *edges*))))
  (print (describe-paths 'living-room *edges*))

  (print (append '(hello) '(world)))
  (print (append '((hello) (wold)) 'lol))
  (print (append '(hello) 'world))
  (print (append '(hello) '((wow))))

  (print (apply #'append '((hello) (world))))

  (format t "~%")
  (print "arguments limit")
  (print call-arguments-limit)

  )

(defun test-objects ()
  (print (assoc 'whiskey *object-locations*))
  (print (describe-objects 'living-room *objects* *object-locations*))
  )


(defun main ()
;;  (test-describe)
  (test-objects)
  

  )

(main)


