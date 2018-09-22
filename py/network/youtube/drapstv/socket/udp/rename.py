import os

for filename in os.listdir("."):
    if filename.startswith("tcp"):
        new_name = filename.replace("tcp", "udp")
        os.rename(filename, new_name)
