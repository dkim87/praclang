(defun pudding-eater (person)
  (case person
    ((henry) (setf *arch-enemy* 'stupid-lisp-alien)
             '(curse you lisp alien - you ate my pudding))
    (otherwise '(why you eat my pudding stranger?)
               )))


;;(print *arch-enemy*)
(pudding-eater 'henry)
(pudding-eater 'hey)

