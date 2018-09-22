import socket

def main():
    """this is main function."""
    host = '127.0.0.1'
    port = 5001

    server = ('127.0.0.1', 5000)
    #s = socket.socket()
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    #s.connect((host,port))
    s.bind((host, port))

    message = input("-> ")
    while message != 'q':
        s.sendto(bytes(message, 'utf-8'), server)
        #data = s.recv(1024) # bytes
        data, addr = s.recvfrom(1024)
        print('Received from server: ', data)
        message = input("-> ")
    s.close()

if __name__ == '__main__':
    main()
