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

typedef enum  { contentservice_ip_address_ADDRESSFAMILY_NULL = 0, contentservice_ip_address_ADDRESSFAMILY_Unspecified, contentservice_ip_address_ADDRESSFAMILY_Unix, contentservice_ip_address_ADDRESSFAMILY_InterNetwork, contentservice_ip_address_ADDRESSFAMILY_ImpLink, contentservice_ip_address_ADDRESSFAMILY_Pup, contentservice_ip_address_ADDRESSFAMILY_Chaos, contentservice_ip_address_ADDRESSFAMILY_NS, contentservice_ip_address_ADDRESSFAMILY_Iso, contentservice_ip_address_ADDRESSFAMILY_Ecma, contentservice_ip_address_ADDRESSFAMILY_DataKit, contentservice_ip_address_ADDRESSFAMILY_Ccitt, contentservice_ip_address_ADDRESSFAMILY_Sna, contentservice_ip_address_ADDRESSFAMILY_DecNet, contentservice_ip_address_ADDRESSFAMILY_DataLink, contentservice_ip_address_ADDRESSFAMILY_Lat, contentservice_ip_address_ADDRESSFAMILY_HyperChannel, contentservice_ip_address_ADDRESSFAMILY_AppleTalk, contentservice_ip_address_ADDRESSFAMILY_NetBios, contentservice_ip_address_ADDRESSFAMILY_VoiceView, contentservice_ip_address_ADDRESSFAMILY_FireFox, contentservice_ip_address_ADDRESSFAMILY_Banyan, contentservice_ip_address_ADDRESSFAMILY_Atm, contentservice_ip_address_ADDRESSFAMILY_InterNetworkV6, contentservice_ip_address_ADDRESSFAMILY_Cluster, contentservice_ip_address_ADDRESSFAMILY_Ieee12844, contentservice_ip_address_ADDRESSFAMILY_Irda, contentservice_ip_address_ADDRESSFAMILY_NetworkDesigners, contentservice_ip_address_ADDRESSFAMILY_Max, contentservice_ip_address_ADDRESSFAMILY_Packet, contentservice_ip_address_ADDRESSFAMILY_ControllerAreaNetwork, contentservice_ip_address_ADDRESSFAMILY_Unknown } contentservice_ip_address_ADDRESSFAMILY_e;

char* ip_address_address_family_ToString(contentservice_ip_address_ADDRESSFAMILY_e address_family);

contentservice_ip_address_ADDRESSFAMILY_e ip_address_address_family_FromString(char* address_family);



typedef struct ip_address_t {
    contentservice_ip_address_ADDRESSFAMILY_e address_family; //enum
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
    contentservice_ip_address_ADDRESSFAMILY_e address_family,
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

