import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5]
y = [10, 25, 15, 30, 20]

plt.plot(x, y, marker="o")

# Custom ticks
plt.xticks([1, 3, 5])
plt.yticks([10, 20, 30])

plt.title("Customized Tick Marks")
plt.xlabel("X Axis")
plt.ylabel("Y Axis")

plt.show()