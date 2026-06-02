import requests
import matplotlib.pyplot as plt
import numpy as np

USERNAME = "nishidhx"
# TOKEN = "YOUR_GITHUB_TOKEN"
TOKEN = "TOKEN"

query = """
{
  user(login: "%s") {
    contributionsCollection {
      contributionCalendar {
        weeks {
          contributionDays {
            contributionCount
            date
          }
        }
      }
    }
  }
}
""" % USERNAME

response = requests.post(
    "https://api.github.com/graphql",
    json={"query": query},
    headers={
        "Authorization": f"Bearer {TOKEN}"
    }
)

data = response.json()

# Extract contribution counts
contributions = []

weeks = data["data"]["user"]["contributionsCollection"]["contributionCalendar"]["weeks"]

for week in weeks:
    for day in week["contributionDays"]:
        contributions.append(day["contributionCount"])

# Convert
contributions = contributions[:364]  # 52 weeks × 7 days

heatmap = np.array(contributions).reshape(-1, 7)
# Plot
plt.figure(figsize=(15, 4))

plt.imshow(heatmap, aspect="auto", cmap="Greens")

plt.yticks(
    range(7),
    ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]
)

plt.figure(figsize=(15, 4))

plt.imshow(
    heatmap,
    aspect="equal",
    cmap="Greens",
    interpolation="nearest"
)

plt.axis("off")
plt.title("GitHub Contributions")

# plt.show()

plt.xlabel("Weeks")
plt.ylabel("Days")
plt.title("GitHub Contribution Tracker")

plt.colorbar(label="Contributions")

plt.show()