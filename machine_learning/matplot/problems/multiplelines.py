import matplotlib.pyplot as plt
import numpy as np

x = np.array([1, 2, 3, 4])


y1 = np.array([10, 20, 30, 40])
y2 = np.array([40, 30, 20, 10])

plt.plot(x, y1, label="Class A")
plt.plot(x, y2, label="Class B")

plt.legend()

plt.show()