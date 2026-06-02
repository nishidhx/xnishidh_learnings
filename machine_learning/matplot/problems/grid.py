import matplotlib.pyplot as plt
import numpy as np

x = np.array([1, 2, 3, 4])
y = np.array([5, 15, 10, 20])

plt.grid(axis="y")
plt.plot(x,y)

plt.show()