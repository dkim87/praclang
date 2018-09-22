import socket

def main():
    """this is main function."""
    host = '127.0.0.1'
    port = 5000
    s = socket.socket()
    s.connect((host,port))

    message = input("-> ")
    while message != 'q':
        s.send(bytes(message, 'utf-8'))
        data = s.recv(1024) # bytes
        print('Received from server: ', data)
        message = input("-> ")
    s.close()


if __name__ == '__main__':
    main()
