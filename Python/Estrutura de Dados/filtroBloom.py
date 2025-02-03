import hashlib
import random
import string

class BloomFilter:
    def __init__(self, size, hash_count):
        self.size = size
        self.hash_count = hash_count
        self.bit_array = [0] * size
    
    def _hashes(self, item):
        return [int(hashlib.md5((item + str(i)).encode()).hexdigest(), 16) % self.size for i in range(self.hash_count)]
    
    def add(self, item):
        for index in self._hashes(item):
            self.bit_array[index] = 1
    
    def check(self, item):
        return all(self.bit_array[index] for index in self._hashes(item))

def generate_random_email():
    domains = ["gmail.com", "yahoo.com", "outlook.com"]
    user = ''.join(random.choices(string.ascii_lowercase, k=7))
    domain = random.choice(domains)
    return f"{user}@{domain}"

def test_bloom_filter(m_values, k_values, s_values, e_values):
    results = []
    
    for m in m_values:
        for k in k_values:
            for s in s_values:
                for e in e_values:
                    bloom = BloomFilter(m, k)
                    
                    spam_emails = {generate_random_email() for _ in range(s)}
                    for email in spam_emails:
                        bloom.add(email)
                    
                    false_positives = 0
                    test_emails = {generate_random_email() for _ in range(e)}
                    for email in test_emails:
                        if email not in spam_emails and bloom.check(email):
                            false_positives += 1
                    
                    false_positive_rate = false_positives / e
                    results.append((m, k, s, e, false_positive_rate))
    
    return results

m_values = [50, 250, 500]
k_values = [3, 6, 9]
s_values = [50, 180, 350]
e_values = [200, 500, 1000]

results = test_bloom_filter(m_values, k_values, s_values, e_values)

for result in results:
    print(f"Bit array: {result[0]}, Hash functions: {result[1]}, Spams: {result[2]}, Emails tested: {result[3]}, False positive rate: {result[4]:.4f}")
