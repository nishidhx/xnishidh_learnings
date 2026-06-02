import matplotlib.pyplot as plt
import numpy as np

# defining the data
x = np.array([1, 2, 3, 4, 5])
y = np.array([2, 4, 6, 8, 10])

# create the graph
plt.plot(x, y, label="Trend line")
plt.title("My First Graph")
plt.xlabel("X Axis Label")
plt.ylabel("Y Axis Label")

# save the graph
plt.savefig("sales.png", dpi=300, bbox_inches="tight")

plt.show()