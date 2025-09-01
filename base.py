# commandline Base64 app
import sys
import base64
from sys import exit

if len(sys.argv) < 2:
    print("[-] Error: Not Enough Arguments")
    exit(1)


def encode(str1):
    encoded_bytes = base64.b64encode(str1.encode('utf-8'))
    encoded = encoded_bytes.decode('utf-8')
    print(f"{encoded}")


def decode(str1):
    encoded = str1.encode('utf-8')
    decoded_bytes = base64.b64decode(encoded)
    decoded = decoded_bytes.decode('utf-8')
    print(f"{decoded}")

if sys.argv[1] == "-d":
    if len(sys.argv) == 3:
        decode(sys.argv[2])
    else:
        print("Error: Please supply a string")
        exit()
else:
    encode(sys.argv[1])
