import re
def main():
    """this is main function."""
    with open("example.c") as f:
        lines = f.readlines()

    with open("example_improved.c", "w") as f:
        re_array = re.compile(r"(.+\[)(\d+)(\]\s*=\s*)(\d+)")
        idx = 0
        val = 5
        for l in lines:
            x = re_array.match(l)
            if x:
                re_index = re.compile(r"(?<=\[)\d+(?=\])")
                y = re_index.sub(str(idx), l)
                idx += 1

                re_val = re.compile(r"(.+=\s*)(\d+)(.+)")
                z = re_val.sub('\g<1>'+str(val)+'\3', y)
                val += 1
                f.write(z)


            else:
                f.write(l)

if __name__ == '__main__':
    main()
