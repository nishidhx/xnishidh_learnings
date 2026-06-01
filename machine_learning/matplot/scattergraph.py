import matplotlib.pyplot as plt
import numpy as np

# scatter graph => this graph shows the relationship between two variables helps to identify a correlation (+. -, None)
# example: Study hours vs Test Scores

x1 = np.array([0, 1, 1, 2, 3, 4, 5, 6, 7, 7, 8]) # hours studied
y1 = np.array([55, 60, 65, 62, 68, 70, 75, 78, 82, 85, 87]) # grades

x2 = np.array([0, 1, 2, 2, 3, 4, 5, 6, 7, 8, 8])
y2 = np.array([50, 58, 65, 70, 72, 78, 83, 88, 92, 95, 97]) # grades


plt.scatter(x1, y1, color="red", alpha=0.5, s=200, label="Class A")
plt.scatter(x2, y2, color="cyan", alpha=0.5, s=200, label="Class B")
plt.title("test_scores")
plt.xlabel("Hours Studied")
plt.ylabel("Grade")
plt.legend()
plt.show()