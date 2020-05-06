# Wireshark-packet-analyzer
### How does it work ?

- You must have wireshark and pcap installed -> [[wireshark]](https://www.wireshark.org/ "[LINK]")
- In Wireshark, extract the capture in plain text (.txt).
[![export](export "export")](http://prntscr.com/sbskzv "export")
- In the Source.cpp in the var PATH_FILE, pute the pathfile of your capture
- Run and enjoy !

# Source.cpp
Here put the pathfile -> 
```c++
#define PATHFILE "YOURPATHFILE"
``` 

After you can debug or compile the c++ project !

The result look like :
```c++
192.168.0.1 -> 127.0.0.1 (16)
// <IPsource> <IPdest> (Number of packages in the batch)
``` 
