import matplotlib.pyplot as plt
import numpy as np

x = np.array([1, 2, 3, 4, 5, 6])
y = np.array([2, 4, 5, 4, 5, 7])

# Scatter plot
plt.scatter(x, y)

# Fit a trend line
m, b = np.polyfit(x, y, 1)  # y = mx + b

# Plot trend line
plt.plot(x, m * x + b)

plt.title("Scatter Plot with Trend Line")
plt.xlabel("X")
plt.ylabel("Y")

plt.show()
