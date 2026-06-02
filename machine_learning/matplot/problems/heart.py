import matplotlib.pyplot as plt
import numpy as np

t = np.linspace(0, 2 * np.pi, 1000)

x = 16 * np.sin(t) ** 3
y = (
    13 * np.cos(t)
    - 5 * np.cos(2 * t)
    - 2 * np.cos(3 * t)
    - np.cos(4 * t)
)

plt.plot(x, y, color="red", linewidth=3)
plt.fill(x, y, color="red")

plt.axis("equal")  # keeps the heart shape proportional
plt.axis("off")    # hides axes

plt.show()