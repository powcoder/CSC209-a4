https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef _SOCKET_H_
#define _SOCKET_H_

#include <netinet/in.h>    /* Internet domain header, for struct sockaddr_in */

#define MAX_HOSTNAME 256

struct sockaddr_in *init_server_addr(int port);
int setup_server_socket(struct sockaddr_in *self, int num_queue);
int accept_connection(int listenfd);

int connect_to_server(int port, const char *hostname);

#endif
