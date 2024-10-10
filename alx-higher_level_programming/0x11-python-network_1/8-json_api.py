#!/usr/bin/python3
"""Takes a letter and sends a POST request with the letter as a param"""


if __name__ == "__main__":
    import requests
    from sys import argv

    if len(argv) == 2:
        q = argv[1]
    else:
        q = ""
    url = "http://0.0.0.0:5000/search_user"
    response = requests.post(url, data={"q": q})
    try:
        json = response.json()
        if json:
            print("[{}] {}".format(json["id"], json["name"]))
        else:
            print("No result")
    except Exception:
        print("Not a valid JSON")
