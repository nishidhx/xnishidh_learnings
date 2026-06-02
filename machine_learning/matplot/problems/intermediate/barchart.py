import matplotlib.pyplot as plt
import numpy as np

languages: np.array = np.array(["Python", "Java", "C++", "JavaScript"])
users = np.array([90, 60, 40, 80])

plt.title("Languages vs Users")
plt.xlabel("Languages")
plt.ylabel("users")

plt.bar(languages, users)

plt.show()
