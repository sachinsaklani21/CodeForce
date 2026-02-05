import sys
import math

# Fast I/O
data = sys.stdin.read().split()
if data:
    it = iter(data)
    tc = int(next(it))
    for _ in range(tc):
        l = int(next(it))
        a = int(next(it)) # Start position
        b = int(next(it)) # Jump size
        
        # We treat sections as 0 to l-1. 
        # If your input 'a' starts from 1, use s_pos = a - 1.
        # Based on your test cases (2 0 6), it looks like 'a' can be 0.
        s_pos = a 
        
        # GCD handles the cyclic jumps
        g = math.gcd(l, b)
        
        # All reachable positions 'i' have: i % g == s_pos % g
        # We want the largest 'i' < l
        
        # How far is the last index (l-1) from our allowed remainder?
        last_idx = l - 1
        current_rem = s_pos % g
        last_rem = last_idx % g
        
        # Distance to 'back up' from the end
        back_up = (last_rem - current_rem + g) % g
        
        max_idx = last_idx - back_up
        
        # Output the section number (Index + 1)
        print(max_idx )