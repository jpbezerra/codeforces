def main():
    keyboard = ['q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/']
    direction = input()

    if direction == 'L':
        direction = 1
    
    else:
        direction = -1

    word = input()
    result = ""
    for ascii in word:
        result = result + keyboard[keyboard.index(ascii) + direction]

    print(result)

if __name__ == "__main__":
    main()