(append '(mary had) '(a) '(little))
result: '(mary had a little)

(apply #'append '((mary had) (a) (little)))
result: '(mary had a little)

(apply #'apply '(append ((mary had)
                         (a)
                         (little))))
result: '(mary had a little)

