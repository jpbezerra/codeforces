def main():
    word1 = input()
    word2 = input()

    if word1 == word2:
        print(-1)

    else:
        len1 = len(word1)
        len2 = len(word2)

        if len1 > len2:
            print(len1)
        
        else:
            print(len2)

if __name__ == "__main__":
    main()