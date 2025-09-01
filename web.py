#!/usr/bin/python3

import sys 
import os
import socket

DEFAULT_PORT = 8000


def getIp():
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.settimeout(0)
    try:
        s.connect(('192.168.1.1', 1))
        IP = s.getsockname()[0]
    except Exception:
        IP = '127.0.0.1'
    finally:
        s.close()
    return IP

if len(sys.argv) < 2:
    print("[-] Error Port number not specified")
    print("[*] Default port 8000")
    port = DEFAULT_PORT
else:
    port  = sys.argv[1]


ip = getIp()

    
print(f"[+] Starting Webserver on port: {port}")
print(f"\n\t http://127.0.0.1:{port}")
print(f"\n\t http://{ip}:{port}\n")
os.system(f"python3 -m http.server {port}")
