import numpy as np
import pandas as pd

def main():
    S = [
        [1, 25, 30, 35, 40, 45],
        [2, 35, 40, 44, 50, 55, 58 ],
        [3, 49, 54, 60, 64, 68],
        [4, 50, 63, 65, 73, 78, 83, 85 ],
        [5, 72, 77, 80, 86, 88, 95]
        ]

    data = []
    for li in S:
        a = iter(li)
        next(a)
        for i in a:
            data.append([li[0], i])

    dt = np.array(data)

    def exp_cond(dt, hour):
        v = dt[dt[:, 0] == hour, 1]
        return np.mean(v)

    key = np.unique(dt[:,0])

    cond_means = []
    for i in key:
        mu = exp_cond(dt, i)
        cond_means.append(mu)
        print(mu)
    np.mean(cond_means) # wrong. should consider probability

    def extract(dt, hour):
        return dt[dt[:, 0] == hour, 1]

    l = len(dt[:, 1])
    prob = []
    for i in key:
        v = extract(dt, i)

    df = pd.DataFrame(dt)
    df.columns = ['hour', 'score']

    freq = []
    l = len(df)
    for i in key:
        v = df.score[df.hour == i]
        freq.append(len(v)/l)
    print("freq : ", freq)

    assert len(freq) == len(cond_means)
    mean_of_cond_means = np.dot(freq, cond_means)

    assert np.mean(dt[:, 1]) == mean_of_cond_means
    print(mean_of_cond_means) # must be the same as
    print(np.mean(df.score)) # this

if __name__ == '__main__':
    main()
