(defparameter *objects* '(whiskey bucket frog chain))

(defparameter *object-locations* '((whiskey living-room)
                                   (bucket living-room)
                                   (chain garden)
                                   (frog garden)))

(defun objects-at (loc objs obj-locs)
  (labels ((at-loc-p (obj)
                     (eq (cadr (assoc obj obj-locs)) loc)))
    (remove-if-not #'at-loc-p objs)))

(print
 (objects-at 'living-room *objects* *object-locations*))

(defun describe-obj(obj)
  `(you see a ,obj on the floor.))

(defun describe-objects (loc objs obj-loc)
  (labels ((describe-obj (obj)
                         `(you see a ,obj on the floor.)))
    (apply #'append (mapcar #'describe-obj (objects-at loc objs obj-loc)))))

(print
 (describe-objects 'living-room *objects* *object-locations*)
 )

(print
 (objects-at 'living-room *objects* *object-locations*)
 )
;; (wiskey bucket)

(print
 (mapcar #'describe-obj (objects-at 'living-room *objects* *object-locations*)))

(print
 (mapcar #'describe-obj (objects-at 'living-room *objects* *object-locations*)))



