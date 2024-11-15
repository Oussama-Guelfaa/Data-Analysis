import pandas as pd
import matplotlib.pyplot as plt

# Load the CSV file
data = pd.read_csv("ema_results.csv")

# Plot prices and EMA
for symbol in data['Symbol'].unique():
    subset = data[data['Symbol'] == symbol]
    plt.plot(subset['Timestamp'], subset['Price'], label=f"{symbol} Price")
    plt.plot(subset['Timestamp'], subset['EMA'], label=f"{symbol} EMA", linestyle="--")

plt.xlabel("Timestamp")
plt.ylabel("Value")
plt.title("Price and EMA Over Time")
plt.legend()
plt.xticks(rotation=45)
plt.tight_layout()
plt.show()
