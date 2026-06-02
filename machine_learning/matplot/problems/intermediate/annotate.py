import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [10, 25, 15, 30, 20]

plt.plot(x, y, marker="o")

# Highest point
highest_y = max(y)
index = y.index(highest_y)
highest_x = x[index]

plt.annotate(
    "Highest Point",
    xy=(highest_x, highest_y),
    xytext=(highest_x + 0.5, highest_y + 5),
    arrowprops=dict(arrowstyle="->")
)
plt.bar(x, y)
plt.plot(x, y)

plt.title("Marking the Highest Point")
plt.xlabel("X Axis")
plt.ylabel("Y Axis")

plt.show()