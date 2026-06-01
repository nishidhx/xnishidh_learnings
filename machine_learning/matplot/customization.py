import matplotlib.pyplot as plt
import numpy as np

x = np.array([2023, 2024, 2025, 2026])
y = np.array([15, 25, 30 ,20])

# can also use as 
# mfc -> markerfacecolor 
# mec -> markeredgecolor 
# ms -> markersize 
# ls -> linestyle 
# lw -> linewidth
# by passing keyword arguments


line_style = dict(
    marker = ".",
    markersize = 30,
    markerfacecolor="#1cd3fc",
    markeredgecolor= "#1cd3fc",
    linestyle = "solid",
    linewidth = 4,
)

x = np.array([2023, 2024, 2025, 2026])
y1 = np.array([15, 25, 30, 20])
y2 = np.array([17, 23, 38, 5])
y3 = np.array([19, 20, 49, 3])

# plt.plot(x, y, marker=".", markersize=10, markerfacecolor="red", markeredgecolor="red", linestyle= "solid", linewidth = 3, color="black")

plt.plot(x, y1, **line_style)
plt.plot(x, y2, **line_style, color="red")
plt.plot(x, y3, **line_style, color="red")

plt.show()