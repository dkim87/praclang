def famous(string = "p.knowledge", num = 0):
    if string == "p. knowledge" and num > 0:
        print("\"dat famous ", end = "")
        famous(string, num-1)

    else:
        print("\"p. knowledge", end = "")

    print("\"", end = "")

famous("p. knowledge", 5)
