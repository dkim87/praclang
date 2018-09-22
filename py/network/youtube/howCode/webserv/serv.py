from http.server import HTTPServer, BaseHTTPRequestHandler

class Serv(BaseHTTPRequestHandler):

    def do_GET(self):
        if self.path == '/':
            self.path = '/index.html'

        try:
            print("trying to open...", self.path)
            file_to_open = open(self.path[1:]).read()
            self.send_response(200)
        except:
            print(self.path[1:], " - file was not found")
            file_to_open = "File not found"
            self.send_response(404)
        self.end_headers()
        print("writing the contents...")
        print(file_to_open)
        self.wfile.write(bytes(file_to_open, 'utf-8'))

def main():
    """this is main function."""
    httpd = HTTPServer(('localhost', 8080), Serv)
    httpd.serve_forever()

if __name__ == '__main__':
    main()
