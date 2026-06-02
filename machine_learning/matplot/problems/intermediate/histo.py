import matplotlib.pyplot as plt
import numpy as np

ages = np.random.randint(1, 100, 100)

plt.hist(ages)

plt.title("Age Distribution")
plt.xlabel("Age")
plt.ylabel("Frequency")

plt.show()