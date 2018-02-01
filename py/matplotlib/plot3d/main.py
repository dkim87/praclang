# https://www.youtube.com/watch?v=6ljHxJQ47Uk

from mpl_toolkits.mplot3d import axes3d 
import matplotlib.pyplot as plt

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

x = range(10)
y = range(10)
y = [i+5 for i in y]
z = [3,2,3,4,5,3,5,4,5,6]

ax.scatter(x,y,z, c='r', marker='o') # color = red
ax.set_xlabel('x axis')
ax.set_ylabel('y axis')
ax.set_zlabel('z axis')

plt.show()
