import matplotlib.pyplot as plt
import numpy as np

# Histogram - A visual representation of the distribution of quantative data.
#             They group values into bins (intervals)
#             and counts how many fall in each ranges.


scores = np.random.normal(loc=80, scale=10, size=100)
scores = np.clip(scores, 0, 100)

plt.hist(scores, bins=10,
                color="lightgreen",
                edgecolor="black"
         )

plt.title("Exam Scores")
plt.xlabel("Score")
plt.ylabel("No. of students")

plt.show()