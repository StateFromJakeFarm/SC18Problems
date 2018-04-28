#!/usr/bin/env python3.6

import random

def fmt(time):
    return f"{time//60:02}:{time%60:02}"

n_events = random.randint(1, 1000)
n_queries = random.randint(1, 1000)
print(n_events, n_queries)

for i in range(n_events):
    start = 1
    end = 0
    while start > end:
        start = random.randint(0, 24*60-1)
        end = random.randint(0, 24*60-1)
    name = ''.join(random.choice('abcdefghijklmnopqrstuvwxyz ') for _ in range(random.randint(3, 20))).title().strip()
    print(fmt(start), fmt(end), name)

for i in range(n_queries):
    print(fmt(random.randint(0, 24*60-1)))

