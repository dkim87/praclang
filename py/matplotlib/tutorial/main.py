import matplotlib.pyplot as plt

x = [i for i in range(101)]
y = [i**2 for i in x]

plt.figure(figsize=(15,5))
plt.plot(x,y)
plt.title('I love cats!')
plt.xlabel('X Axis')
plt.ylabel('Y Axis')
plt.show()

