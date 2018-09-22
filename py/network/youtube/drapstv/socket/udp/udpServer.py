import socket

def main():
    """this is main function."""
    host = '127.0.0.1'
    port = 5000

    print("create socket")
    #s = socket.socket()
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    print("bind socket")
    s.bind((host, port))

    '''
    print("listen...")
    s.listen(1)

    print("accept...")
    c, addr = s.accept()
    print("Connection from: ", addr)
    '''
    print("server started.")
    while True:
        #data = c.recv(1024) # bytes
        data, addr = s.recvfrom(1024)
        if not data:
            print("data is None. Terminating...")
            break

        print("message from", addr)
        print("from connected user: ", data)
        data = data.decode("utf-8").upper().encode("utf-8")
        print("sending: ", data)
        s.sendto(data, addr)
    s.close()

if __name__ == '__main__':
    main()
