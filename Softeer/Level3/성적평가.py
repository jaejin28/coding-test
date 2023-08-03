n = int(input())
total_score = [0 for _ in range(n)]

for i in range(3):
    arr = list(map(int,input().split()))
    rank = {}
    for j in range(n):
        total_score[j] += arr[j]
        rank[j] = arr[j]
    # print(rank)
    sorted_rank = sorted(rank.items(), key=lambda x:x[1], reverse = True)
    # print("sorted_rank : ", sorted_rank)

    prev_rank = -1
    prev_score = -1
    for k in range(n):
        # print(sorted_rank[k][1])
        if sorted_rank[k][1] == prev_score:
            rank[sorted_rank[k][0]] = prev_rank
        else:
            rank[sorted_rank[k][0]] = k+1
            prev_rank = k+1
            prev_score = sorted_rank[k][1]
    # print("rank : ", rank)
    for p in rank.values():
        print(p, end=' ')
    print()

# print(total_score)
total_rank = {}
total = [0 for _ in range(n)]
for i in range(n):
    total_rank[i] = total_score[i]

# print(total_rank)
sorted_total_rank = sorted(total_rank.items(), key=lambda x:x[1], reverse = True)
prev_rank = -1
prev_score = -1
for j in range(n):
    if sorted_total_rank[j][1] == prev_score:
        total[sorted_total_rank[j][0]] = prev_rank
    else:
        total[sorted_total_rank[j][0]] = j + 1
        prev_rank = j + 1
        prev_score = sorted_total_rank[j][1]
for k in total:
    print(k, end=' ')