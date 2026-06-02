import matplotlib.pyplot as plt
import numpy as np

hours: np.array = np.array([1, 2, 3, 4, 5, 6])
scores: np.array = np.array([40, 50, 60, 65, 75, 90])

plt.scatter(hours, scores)
plt.title("Rel between study hours and scores")
plt.xlabel("hours")
plt.ylabel("scores")

plt.show()