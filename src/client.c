#include "client.h"

void recv_msg(int sockfd, char *msg)
{
    memset(msg, 0, 4);
    int n = read(sockfd, msg, 3);

    if (n < 0 || n !=3)
        error("ERROR reading message from server socket.");
}