# 26. Student Performance Dashboard

# Create 4 plots:

# Marks
# Attendance
# Study Hours
# Sports Scores

# using subplots.

import matplotlib.pyplot as plt
import numpy as np

students: np.array = np.array(["A", "B", "C", "D", "E"])
marks: np.array = np.array([23, 33, 22, 21, 44])
attendence: np.array = np.array([6, 5, 12, 9, 7])
study_hrs: np.array = np.array([10, 12, 7, 8, 5])
sports_scores: np.array = np.array([80, 70, 85, 60, 75])

plt.figure(figsize=(10, 8))

plt.subplot(2, 2, 1)
plt.bar(students, marks)
plt.title("marks")

plt.subplot(2, 2, 2)
plt.plot(students, attendence, marker="*")
plt.title("attendence")

plt.subplot(2, 2, 3)
plt.scatter(students, study_hrs)
plt.title("study hours")

plt.subplot(2, 2, 4)
plt.bar(students, sports_scores)
plt.title("Sports scores")
plt.tight_layout()
plt.show()