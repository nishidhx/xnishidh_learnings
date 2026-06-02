import matplotlib.pyplot as plt
import numpy as np

students: np.array = np.array(["A", "B", "C", "D", "E"])
marks: np.array = np.array([70, 90, 65, 88, 72])

plt.plot(students, marks)
plt.title("Student Marks Analysis")
plt.xlabel("students")
plt.ylabel("marks")
plt.show()


plt.bar(students, marks)
plt.title("Student Marks Analysis")
plt.xlabel("students")
plt.ylabel("marks")
plt.show()
