#pragma once

#include "types.h"

#define IP(a, b, c, d) (((a) << 0) + ((b) << 8) + ((c) << 16) + ((d) << 24))
#define htons(a) __builtin_bswap16(a)

#define AF_INET 0x0002

#define IN_ADDR_ANY 0

#define SOCK_STREAM 1
#define SOCK_DGRAM 2

#define SOL_SOCKET 0xffff
#define SO_NBIO 0x1200

#define MSG_DONTWAIT 0x80
#define MSG_WAITALL 0x40

#define IPPROTO_TCP 6
#define TCP_NODELAY 1

struct in_addr {
	unsigned int s_addr;
};

struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	struct in_addr sin_addr;
	unsigned short sin_vport;
	char sin_zero[6];
};

struct sockaddr {
	unsigned char sin_len;
	unsigned char sa_family;
	char sa_data[14];
};

typedef unsigned int socklen_t;

extern int (* const sceNetSocket)(const char *, int, int, int);
extern int (* const sceNetSocketClose)(int);
extern int (* const sceNetConnect)(int, struct sockaddr *, int);
extern int (* const sceNetSend)(int, const void *, size_t, int);
extern int (* const sceNetBind)(int, struct sockaddr *, int);
extern int (* const sceNetListen)(int, int);
extern int (* const sceNetAccept)(int, struct sockaddr *, unsigned int *);
extern int (* const sceNetRecv)(int, void *, size_t, int);
extern int (* const sceNetSocketAbort)(int , int );

extern int (* const sceNetGetsockname)(int, struct sockaddr *, unsigned int *);
extern int (* const sceNetGetsockopt)(int s, int level, int optname, void *restrict optval, socklen_t *restrict optlen);
extern int (* const sceNetSetsockopt)(int s, int level, int optname, const void *optval, socklen_t optlen);

extern const char (* const sceNetInetNtop)(int af, const void *src, char *dst, int size);
extern int (* const sceNetInetPton)(int af, const char *src, void *dst);

extern uint64_t (* const sceNetHtonll)(uint64_t host64);
extern uint32_t (* const sceNetHtonl)(uint32_t host32);
extern uint16_t (* const sceNetHtons)(uint16_t host16);
extern uint64_t (* const sceNetNtohll)(uint64_t net64);
extern uint32_t (* const sceNetNtohl)(uint32_t net32);
extern uint16_t (* const sceNetNtohs)(uint16_t net16);
