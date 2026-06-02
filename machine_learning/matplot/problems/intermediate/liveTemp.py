import matplotlib.pyplot as plt
import numpy as np

temperatures = []

for i in range(1, 21):
    temperature = np.random.randint(20, 50)
    temperatures.append(temperature)
    plt.clf()
    plt.plot(range(1, len(temperatures) + 1), temperatures, marker="*")
    plt.title("real time temperature Analysis")
    plt.xlabel("Time")
    plt.ylabel("Temperatures")
    plt.grid(True)
    plt.pause(1)

plt.show()