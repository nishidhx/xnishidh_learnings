import matplotlib.pyplot as plt
import numpy as np

years = [2021,2022,2023,2024]
companyA = [100,120,150,170]
companyB = [90,140,130,180]

plt.plot(years, companyA, color="red", label="Company A")
plt.plot(years, companyB, color="cyan", label="Company B")

plt.title("Company A vs Company B")
plt.xlabel("years")
plt.ylabel("comapny")

plt.legend()
plt.show()
