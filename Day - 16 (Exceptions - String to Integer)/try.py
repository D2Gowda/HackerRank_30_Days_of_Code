def main():
    string = input().strip()
    
    try:
        integer = int(string)
        print(integer)
    except ValueError:
        print("Bad String")

if __name__ == "__main__":
    main()
