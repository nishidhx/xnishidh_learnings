import matplotlib.pyplot as plt
import numpy as np

#  create a line chart

x = [1, 2, 3, 4, 5]
y = [10, 20, 15, 25, 30]

plt.title("Daily Sales")
plt.xlabel("Days")
plt.ylabel("Sales")

plt.plot(x, y, marker="o")

plt.show()