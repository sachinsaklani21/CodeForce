import sys

def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    
    ptr = 0
    tc = int(data[ptr])
    ptr += 1
    
    output = []
    
    for _ in range(tc):
        n = int(data[ptr])
        m = int(data[ptr + 1])
        h = int(data[ptr + 2])
        ptr += 3
        
        org_lst = list(map(int, data[ptr : ptr + n]))
        ptr += n
        
        current_a = org_lst[:]
        changed_indices = []
        
        for _ in range(m):
            b_i = int(data[ptr]) - 1
            c_i = int(data[ptr + 1])
            ptr += 2
            
            current_a[b_i] += c_i
            changed_indices.append(b_i)
            
            if current_a[b_i] > h:
                for idx in changed_indices:
                    current_a[idx] = org_lst[idx]
                changed_indices = []
                
        output.append(" ".join(map(str, current_a)))
    
    sys.stdout.write("\n".join(output) + "\n")

if __name__ == "__main__":
    solve()
         


