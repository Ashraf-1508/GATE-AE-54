import matplotlib.pyplot as plt

# Read data from the dat file
with open('function_data.dat', 'r') as file:
    lines = file.readlines()

x_values = []
y_values = []

for line in lines:
    x, y = map(float, line.split())
    x_values.append(x)
    y_values.append(y)

# Plot the graph
plt.plot(x_values, y_values, marker='o', linestyle='-', color='b')
plt.xlabel('x')
plt.ylabel('y(x)')
plt.grid(True)
plt.show()

