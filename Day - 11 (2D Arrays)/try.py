def main():
    arr = [[0] * 6 for _ in range(6)]

    # Input
    for i in range(6):
        arr[i] = list(map(int, input().split()))

    max_sum = 0

    # Calculate hourglass sum
    for i in range(4):
        for j in range(4):
            temp_sum = 0

            # top row
            temp_sum += arr[i][j]
            temp_sum += arr[i][j + 1]
            temp_sum += arr[i][j + 2]

            # middle
            temp_sum += arr[i + 1][j + 1]

            # bottom row
            temp_sum += arr[i + 2][j]
            temp_sum += arr[i + 2][j + 1]
            temp_sum += arr[i + 2][j + 2]

            # if first hourglass, set as max
            if temp_sum > max_sum or (i == 0 and j == 0):
                max_sum = temp_sum

    # Output
    print(max_sum)

if __name__ == "__main__":
    main()
