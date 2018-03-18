import numpy as np
import pandas as pd

def main():
    """this is main function."""

    arr = np.array([
                [1, 2, 3],
                [2, 3, 4]
                ])
    print(arr)

    data = pd.DataFrame(arr)
    print(data)
    print(data[0])

    names = [['hello', 'how', 'why']]
    arr = np.concatenate((names, arr))
    print(arr)

    data = pd.DataFrame(arr)
    print(data)
    print(data[0])

    data.columns = names
    print(data)
    print(data.hello)
    print(data['hello'])
    print(data[['hello', 'why']])

    print(arr[[0, 1],1])

if __name__ == '__main__':
    main()
