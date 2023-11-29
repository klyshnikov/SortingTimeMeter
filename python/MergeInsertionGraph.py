import matplotlib.pyplot as plt
import numpy as np



x = np.arange(500, 4001, 100)
y5 = np.array([])
y10 = np.array([])
y20 = np.array([])
y50 = np.array([])
labels = ["5", "10", "20", "50"]

for i in range(36):
    a, b = input().split()
    y5 = np.append(y5, [int(b)], axis = 0)
for i in range(36):
    a, b = input().split()
    y10 = np.append(y10, [int(b)], axis = 0)
for i in range(36):
    a, b = input().split()
    y20 = np.append(y20, [int(b)], axis = 0)
for i in range(36):
    a, b = input().split()
    y50 = np.append(y50, [int(b)], axis = 0)



fig, ax = plt.subplots()

plt.plot(x, y5, label = "y5")
plt.plot(x, y10, label = "y10")
plt.plot(x, y20, label = "y20")
plt.plot(x, y50, label = "y50")
ax.legend(loc='upper left')
plt.show()
