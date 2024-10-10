#!/usr/bin/python3
"""Takes a url and displays the body of the response"""


if __name__ == "__main__":
    from urllib import request, error
    from sys import argv

    try:
        req = request.Request(argv[1])
        with request.urlopen(req) as response:
            print(response.read().decode('utf-8'))
    except error.HTTPError as e:
        print("Error code: {}".format(e.code))
