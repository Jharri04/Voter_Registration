import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# Read voter data from CSV
voter_data = pd.read_csv('voter_data.csv', header=None,
                         names=['Name', 'Party', 'City', 'State', 'Question1', 'Question2', 'Question3'])

# Analyze party affiliation
party_counts = voter_data['Party'].value_counts()
print("Voter Party Affiliation Counts:")
print(party_counts)

# Create a count of voters by party and state
party_state_counts = voter_data.groupby(['State', 'Party']).size().unstack(fill_value=0)


plt.figure(figsize=(20, 10))
sns.heatmap(party_state_counts, annot=True, fmt='d', cmap=plt.cm.plasma)
plt.title('Voter Count by Party and State (Heatmap)', fontweight = 'bold')
plt.xlabel('Party', fontweight = 'bold')
plt.ylabel('State', fontweight = 'bold')
plt.tight_layout()
plt.savefig('voter_party_state_heatmap.png')
plt.show()


