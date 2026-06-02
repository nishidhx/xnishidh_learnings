import matplotlib.pyplot as plt
import numpy as np

x = np.array([1, 2, 3, 4])
y = np.array([5, 15, 10, 20])

plt.grid(axis="y", linewidth=3, linestyle="dashed")
plt.plot(x,y)

plt.show()