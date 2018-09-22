import socket

def main():
    """this is main function."""
    host = '127.0.0.1'
    port = 5000

    print("create socket")
    s = socket.socket()
    print("bind socket")
    s.bind((host, port))

    print("listen...")
    s.listen(1)

    print("accept...")
    c, addr = s.accept()
    print("Connection from: ", addr)
    print(type(c), type(addr)) # socket, tuple

    while True:
        data = c.recv(1024) # bytes
        if not data:
            print("data is None. Terminating...")
            break
        print("from connected user: ", str(data))
        data = data.decode("utf-8").upper().encode("utf-8")
        print("sending: ", data)
        c.send(data)
    c.close()

if __name__ == '__main__':
    main()
