#!/usr/bin/python3
""" POST an email"""


if __name__ == "__main__":
    import requests
    from sys import argv

    url = argv[1]
    email = argv[2]
    data = {'email': email}
    response = requests.post(url, data)
    print(response.text)
