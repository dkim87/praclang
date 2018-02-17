def famous(string = "p. knowledge", num = 0):
    if string == "p. knowledge" and num > 0:
        print("\"그 유명한 ", end = "")
        famous(string, num-1)

    else:
        print("\"피 노우렛지", end = "")

    print("\"", end = "")

for i in range(10):
    famous("p. knowledge", i)
    print("님")
