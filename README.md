# KYGnus-HoneyPot
minimal Linux HoneyPot with c++


# INFO

!! Note : log file in /tmp directory

You can user This command : tail -f /tmp/log.txt 
to see logs instantaneously.


$ tail -f /tmp/log.txt

# Install and Compile

just copy This command to terminal

$ cd /opt && https://github.com/KooshaYeganeh/KYGnus-HoneyPot/archive/refs/heads/main.zip && unzip main.zip && cd KYGnus-HoneyPot-main && g++ HoneyPot.cpp -o Honeypot && cp HoneyPot /usr/bin && cd


# Run

Honeypot


# Remove

$ rm main.zip && rm -rf KYGnus-HoneyPot-main && sudo rm /usr/bin/Honeypot && rm /tmp/log.txt
