/*
 * ip_address.h
 *
 * 
 */

#ifndef _ip_address_H_
#define _ip_address_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ip_address_t ip_address_t;


// Enum ADDRESSFAMILY for ip_address

typedef enum  { blockchainsservice_ip_address_ADDRESSFAMILY_NULL = 0, blockchainsservice_ip_address_ADDRESSFAMILY_Unspecified, blockchainsservice_ip_address_ADDRESSFAMILY_Unix, blockchainsservice_ip_address_ADDRESSFAMILY_InterNetwork, blockchainsservice_ip_address_ADDRESSFAMILY_ImpLink, blockchainsservice_ip_address_ADDRESSFAMILY_Pup, blockchainsservice_ip_address_ADDRESSFAMILY_Chaos, blockchainsservice_ip_address_ADDRESSFAMILY_NS, blockchainsservice_ip_address_ADDRESSFAMILY_Iso, blockchainsservice_ip_address_ADDRESSFAMILY_Ecma, blockchainsservice_ip_address_ADDRESSFAMILY_DataKit, blockchainsservice_ip_address_ADDRESSFAMILY_Ccitt, blockchainsservice_ip_address_ADDRESSFAMILY_Sna, blockchainsservice_ip_address_ADDRESSFAMILY_DecNet, blockchainsservice_ip_address_ADDRESSFAMILY_DataLink, blockchainsservice_ip_address_ADDRESSFAMILY_Lat, blockchainsservice_ip_address_ADDRESSFAMILY_HyperChannel, blockchainsservice_ip_address_ADDRESSFAMILY_AppleTalk, blockchainsservice_ip_address_ADDRESSFAMILY_NetBios, blockchainsservice_ip_address_ADDRESSFAMILY_VoiceView, blockchainsservice_ip_address_ADDRESSFAMILY_FireFox, blockchainsservice_ip_address_ADDRESSFAMILY_Banyan, blockchainsservice_ip_address_ADDRESSFAMILY_Atm, blockchainsservice_ip_address_ADDRESSFAMILY_InterNetworkV6, blockchainsservice_ip_address_ADDRESSFAMILY_Cluster, blockchainsservice_ip_address_ADDRESSFAMILY_Ieee12844, blockchainsservice_ip_address_ADDRESSFAMILY_Irda, blockchainsservice_ip_address_ADDRESSFAMILY_NetworkDesigners, blockchainsservice_ip_address_ADDRESSFAMILY_Max, blockchainsservice_ip_address_ADDRESSFAMILY_Packet, blockchainsservice_ip_address_ADDRESSFAMILY_ControllerAreaNetwork, blockchainsservice_ip_address_ADDRESSFAMILY_Unknown } blockchainsservice_ip_address_ADDRESSFAMILY_e;

char* ip_address_address_family_ToString(blockchainsservice_ip_address_ADDRESSFAMILY_e address_family);

blockchainsservice_ip_address_ADDRESSFAMILY_e ip_address_address_family_FromString(char* address_family);



typedef struct ip_address_t {
    blockchainsservice_ip_address_ADDRESSFAMILY_e address_family; //enum
    long scope_id; //numeric
    int is_ipv6_multicast; //boolean
    int is_ipv6_link_local; //boolean
    int is_ipv6_site_local; //boolean
    int is_ipv6_teredo; //boolean
    int is_ipv6_unique_local; //boolean
    int is_ipv4_mapped_to_ipv6; //boolean
    long address; //numeric

} ip_address_t;

ip_address_t *ip_address_create(
    blockchainsservice_ip_address_ADDRESSFAMILY_e address_family,
    long scope_id,
    int is_ipv6_multicast,
    int is_ipv6_link_local,
    int is_ipv6_site_local,
    int is_ipv6_teredo,
    int is_ipv6_unique_local,
    int is_ipv4_mapped_to_ipv6,
    long address
);

void ip_address_free(ip_address_t *ip_address);

ip_address_t *ip_address_parseFromJSON(cJSON *ip_addressJSON);

cJSON *ip_address_convertToJSON(ip_address_t *ip_address);

#endif /* _ip_address_H_ */

