import matplotlib.pyplot as plt
import numpy as np

months: np.array = np.array([
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May"
])

temp: np.array = [12, 15, 20, 28, 35]

plt.title("Monthly temperatures")

plt.xlabel("Months")
plt.ylabel("Temperature")

plt.plot(months, temp, marker="o", linestyle="None")

plt.show()