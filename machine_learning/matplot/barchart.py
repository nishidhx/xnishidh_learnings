import matplotlib.pyplot as plt
import numpy as np

# bar chart => it compare categories of data by representing each category with bars

categories = [ 
    "Grains",
    "Fruit",
    "Vegetables",
    "Protein",
    "Dairy",
    "Sweets"
]

values = np.array([4, 3, 2, 5, 3, 1])

# for horizontal bar chart use barh
plt.bar(categories, values)

plt.title("Daily Consumption")

plt.xlabel("Food")
plt.ylabel("Quantity")

plt.show()
