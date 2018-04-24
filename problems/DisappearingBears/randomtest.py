#!/usr/bin/env python3

import random

n_nodes = random.randint(1, 64)
n_edges = random.randint(0, 64)
print(n_nodes, n_edges)

print(' '.join(str(random.randint(1, 100)) for _ in range(n_nodes)))

for i in range(n_edges):
    print(
        random.randint(1, n_nodes),
        random.randint(1, n_nodes),
        random.randint(1, 12))

