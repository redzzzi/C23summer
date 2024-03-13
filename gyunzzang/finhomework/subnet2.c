#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    unsigned int a : 8, b : 8, c : 8, d : 8;
} IP;

int count_bits(IP ip) {
    int count = 0;
    count += __builtin_popcount(ip.a);
    count += __builtin_popcount(ip.b);
    count += __builtin_popcount(ip.c);
    count += __builtin_popcount(ip.d);
    return count;
}

int main() {
    // Read IP address
    char ip_str[16];
    fgets(ip_str, sizeof(ip_str), stdin);

    // Parse IP address
    IP ip;
    sscanf(ip_str, "%u.%u.%u.%u", &ip.a, &ip.b, &ip.c, &ip.d);

    // Read subnet mask
    char subnet_str[16];
    fgets(subnet_str, sizeof(subnet_str), stdin);

    // Parse subnet mask
    IP subnet;
    sscanf(subnet_str, "%u.%u.%u.%u", &subnet.a, &subnet.b, &subnet.c, &subnet.d);

    // Calculate network address
    IP network = {ip.a & subnet.a, ip.b & subnet.b, ip.c & subnet.c, ip.d & subnet.d};

    // Count 1 bits in the network address
    int result = count_bits(network);

    // Print the result
    printf("%d\n", result);

    return 0;
}

