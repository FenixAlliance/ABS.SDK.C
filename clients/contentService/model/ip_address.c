#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ip_address.h"


char* ip_address_address_family_ToString(contentservice_ip_address_ADDRESSFAMILY_e address_family) {
    char* address_familyArray[] =  { "NULL", "Unspecified", "Unix", "InterNetwork", "ImpLink", "Pup", "Chaos", "NS", "Iso", "Ecma", "DataKit", "Ccitt", "Sna", "DecNet", "DataLink", "Lat", "HyperChannel", "AppleTalk", "NetBios", "VoiceView", "FireFox", "Banyan", "Atm", "InterNetworkV6", "Cluster", "Ieee12844", "Irda", "NetworkDesigners", "Max", "Packet", "ControllerAreaNetwork", "Unknown" };
    return address_familyArray[address_family];
}

contentservice_ip_address_ADDRESSFAMILY_e ip_address_address_family_FromString(char* address_family){
    int stringToReturn = 0;
    char *address_familyArray[] =  { "NULL", "Unspecified", "Unix", "InterNetwork", "ImpLink", "Pup", "Chaos", "NS", "Iso", "Ecma", "DataKit", "Ccitt", "Sna", "DecNet", "DataLink", "Lat", "HyperChannel", "AppleTalk", "NetBios", "VoiceView", "FireFox", "Banyan", "Atm", "InterNetworkV6", "Cluster", "Ieee12844", "Irda", "NetworkDesigners", "Max", "Packet", "ControllerAreaNetwork", "Unknown" };
    size_t sizeofArray = sizeof(address_familyArray) / sizeof(address_familyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(address_family, address_familyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    ip_address_t *ip_address_local_var = malloc(sizeof(ip_address_t));
    if (!ip_address_local_var) {
        return NULL;
    }
    ip_address_local_var->address_family = address_family;
    ip_address_local_var->scope_id = scope_id;
    ip_address_local_var->is_ipv6_multicast = is_ipv6_multicast;
    ip_address_local_var->is_ipv6_link_local = is_ipv6_link_local;
    ip_address_local_var->is_ipv6_site_local = is_ipv6_site_local;
    ip_address_local_var->is_ipv6_teredo = is_ipv6_teredo;
    ip_address_local_var->is_ipv6_unique_local = is_ipv6_unique_local;
    ip_address_local_var->is_ipv4_mapped_to_ipv6 = is_ipv4_mapped_to_ipv6;
    ip_address_local_var->address = address;

    return ip_address_local_var;
}


void ip_address_free(ip_address_t *ip_address) {
    if(NULL == ip_address){
        return ;
    }
    listEntry_t *listEntry;
    free(ip_address);
}

cJSON *ip_address_convertToJSON(ip_address_t *ip_address) {
    cJSON *item = cJSON_CreateObject();

    // ip_address->address_family
    if(ip_address->address_family != contentservice_ip_address_ADDRESSFAMILY_NULL) {
    if(cJSON_AddStringToObject(item, "addressFamily", address_familyip_address_ToString(ip_address->address_family)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // ip_address->scope_id
    if(ip_address->scope_id) {
    if(cJSON_AddNumberToObject(item, "scopeId", ip_address->scope_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ip_address->is_ipv6_multicast
    if(ip_address->is_ipv6_multicast) {
    if(cJSON_AddBoolToObject(item, "isIPv6Multicast", ip_address->is_ipv6_multicast) == NULL) {
    goto fail; //Bool
    }
    }


    // ip_address->is_ipv6_link_local
    if(ip_address->is_ipv6_link_local) {
    if(cJSON_AddBoolToObject(item, "isIPv6LinkLocal", ip_address->is_ipv6_link_local) == NULL) {
    goto fail; //Bool
    }
    }


    // ip_address->is_ipv6_site_local
    if(ip_address->is_ipv6_site_local) {
    if(cJSON_AddBoolToObject(item, "isIPv6SiteLocal", ip_address->is_ipv6_site_local) == NULL) {
    goto fail; //Bool
    }
    }


    // ip_address->is_ipv6_teredo
    if(ip_address->is_ipv6_teredo) {
    if(cJSON_AddBoolToObject(item, "isIPv6Teredo", ip_address->is_ipv6_teredo) == NULL) {
    goto fail; //Bool
    }
    }


    // ip_address->is_ipv6_unique_local
    if(ip_address->is_ipv6_unique_local) {
    if(cJSON_AddBoolToObject(item, "isIPv6UniqueLocal", ip_address->is_ipv6_unique_local) == NULL) {
    goto fail; //Bool
    }
    }


    // ip_address->is_ipv4_mapped_to_ipv6
    if(ip_address->is_ipv4_mapped_to_ipv6) {
    if(cJSON_AddBoolToObject(item, "isIPv4MappedToIPv6", ip_address->is_ipv4_mapped_to_ipv6) == NULL) {
    goto fail; //Bool
    }
    }


    // ip_address->address
    if(ip_address->address) {
    if(cJSON_AddNumberToObject(item, "address", ip_address->address) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ip_address_t *ip_address_parseFromJSON(cJSON *ip_addressJSON){

    ip_address_t *ip_address_local_var = NULL;

    // ip_address->address_family
    cJSON *address_family = cJSON_GetObjectItemCaseSensitive(ip_addressJSON, "addressFamily");
    contentservice_ip_address_ADDRESSFAMILY_e address_familyVariable;
    if (address_family) { 
    if(!cJSON_IsString(address_family))
    {
    goto end; //Enum
    }
    address_familyVariable = ip_address_address_family_FromString(address_family->valuestring);
    }

    // ip_address->scope_id
    cJSON *scope_id = cJSON_GetObjectItemCaseSensitive(ip_addressJSON, "scopeId");
    if (scope_id) { 
    if(!cJSON_IsNumber(scope_id))
    {
    goto end; //Numeric
    }
    }

    // ip_address->is_ipv6_multicast
    cJSON *is_ipv6_multicast = cJSON_GetObjectItemCaseSensitive(ip_addressJSON, "isIPv6Multicast");
    if (is_ipv6_multicast) { 
    if(!cJSON_IsBool(is_ipv6_multicast))
    {
    goto end; //Bool
    }
    }

    // ip_address->is_ipv6_link_local
    cJSON *is_ipv6_link_local = cJSON_GetObjectItemCaseSensitive(ip_addressJSON, "isIPv6LinkLocal");
    if (is_ipv6_link_local) { 
    if(!cJSON_IsBool(is_ipv6_link_local))
    {
    goto end; //Bool
    }
    }

    // ip_address->is_ipv6_site_local
    cJSON *is_ipv6_site_local = cJSON_GetObjectItemCaseSensitive(ip_addressJSON, "isIPv6SiteLocal");
    if (is_ipv6_site_local) { 
    if(!cJSON_IsBool(is_ipv6_site_local))
    {
    goto end; //Bool
    }
    }

    // ip_address->is_ipv6_teredo
    cJSON *is_ipv6_teredo = cJSON_GetObjectItemCaseSensitive(ip_addressJSON, "isIPv6Teredo");
    if (is_ipv6_teredo) { 
    if(!cJSON_IsBool(is_ipv6_teredo))
    {
    goto end; //Bool
    }
    }

    // ip_address->is_ipv6_unique_local
    cJSON *is_ipv6_unique_local = cJSON_GetObjectItemCaseSensitive(ip_addressJSON, "isIPv6UniqueLocal");
    if (is_ipv6_unique_local) { 
    if(!cJSON_IsBool(is_ipv6_unique_local))
    {
    goto end; //Bool
    }
    }

    // ip_address->is_ipv4_mapped_to_ipv6
    cJSON *is_ipv4_mapped_to_ipv6 = cJSON_GetObjectItemCaseSensitive(ip_addressJSON, "isIPv4MappedToIPv6");
    if (is_ipv4_mapped_to_ipv6) { 
    if(!cJSON_IsBool(is_ipv4_mapped_to_ipv6))
    {
    goto end; //Bool
    }
    }

    // ip_address->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(ip_addressJSON, "address");
    if (address) { 
    if(!cJSON_IsNumber(address))
    {
    goto end; //Numeric
    }
    }


    ip_address_local_var = ip_address_create (
        address_family ? address_familyVariable : contentservice_ip_address_ADDRESSFAMILY_NULL,
        scope_id ? scope_id->valuedouble : 0,
        is_ipv6_multicast ? is_ipv6_multicast->valueint : 0,
        is_ipv6_link_local ? is_ipv6_link_local->valueint : 0,
        is_ipv6_site_local ? is_ipv6_site_local->valueint : 0,
        is_ipv6_teredo ? is_ipv6_teredo->valueint : 0,
        is_ipv6_unique_local ? is_ipv6_unique_local->valueint : 0,
        is_ipv4_mapped_to_ipv6 ? is_ipv4_mapped_to_ipv6->valueint : 0,
        address ? address->valuedouble : 0
        );

    return ip_address_local_var;
end:
    return NULL;

}
