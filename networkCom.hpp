#define MAX_CLIENTS 5
#define MAX_BUFF 100
#define FORMATING_ERROR -1

#include "structServClient.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <arpa/inet.h> //inet_addr
#include <string.h>
#include <sys/types.h>
#include <ifaddrs.h>
#include <netinet/in.h> 
#include <net/if.h>
#include <linux/joystick.h>
#include <time.h>
#include <stddef.h>
#include <cstddef>



void sendString(char message[], struct client *clients);
void recvString(struct client *client);
