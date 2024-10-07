def main():
    weights: list[str] = input().split('|')
    remaining: str = input()

    while len(remaining) != 0:
        if len(weights[0]) >= len(weights[1]):
            weights[1] += remaining[0]

        else:
            weights[0] += remaining[0]

        remaining = remaining[1:]

    if len(weights[0]) == len(weights[1]):
        print(f"{''.join(weights[0])}|{''.join(weights[1])}")

    else:
        print("Impossible")

if __name__ == '__main__':
    main()