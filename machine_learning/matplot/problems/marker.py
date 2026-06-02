import matplotlib.pyplot as plt
import numpy as np

x: np.array = np.array([1, 2, 3, 4])
y: np.array = np.array([5, 15, 10, 20])

plt.plot(x, y, marker="o")

plt.show()