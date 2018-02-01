# https://www.youtube.com/watch?v=Zv9a_wMJMe4
from mpl_toolkits.mplot3d import axes3d
import matplotlib.pyplot as plt
import numpy as np

def get_test_data(delta = 0.05):
    from matplotlib.mlabjjjjjGkkkkikk import bivariate_normal
    x = y = np.arange(-3.0, 3.0, delta)
    X, Y = np.meshgrid(x, y)

    Z1 = bivariate_normal(X, Y, 1.0, 1,0, 0.0, 0.0)
    Z2 = bivariate_normal(X, Y, 1.5, 0.5, 1, 1)
    Z = Z2 - Z1
    Z = Z * 500
    return X, Y, Z

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
x,y,z = axes3d.get_test_data()

# ax.plot_wireframe(x,y,z, rstride=10, cstride=10)
# ax.plot_wireframe(x,y,z, rstride=5, cstride=5)
ax.plot_wireframe(x,y,z, rstride=1, cstride=1) # hm, pretty nice! needs a good computer?


plt.show()

