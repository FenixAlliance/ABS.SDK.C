#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "x509_certificate2.h"



x509_certificate2_t *x509_certificate2_create(
    object_t *handle,
    char *issuer,
    char *subject,
    byte_read_only_memory_t *serial_number_bytes,
    int archived,
    list_t *extensions,
    char *friendly_name,
    int has_private_key,
    asymmetric_algorithm_t *private_key,
    x500_distinguished_name_t *issuer_name,
    char *not_after,
    char *not_before,
    public_key_t *public_key,
    char *raw_data,
    byte_read_only_memory_t *raw_data_memory,
    char *serial_number,
    oid_t *signature_algorithm,
    x500_distinguished_name_t *subject_name,
    char *thumbprint,
    int version
    ) {
    x509_certificate2_t *x509_certificate2_local_var = malloc(sizeof(x509_certificate2_t));
    if (!x509_certificate2_local_var) {
        return NULL;
    }
    x509_certificate2_local_var->handle = handle;
    x509_certificate2_local_var->issuer = issuer;
    x509_certificate2_local_var->subject = subject;
    x509_certificate2_local_var->serial_number_bytes = serial_number_bytes;
    x509_certificate2_local_var->archived = archived;
    x509_certificate2_local_var->extensions = extensions;
    x509_certificate2_local_var->friendly_name = friendly_name;
    x509_certificate2_local_var->has_private_key = has_private_key;
    x509_certificate2_local_var->private_key = private_key;
    x509_certificate2_local_var->issuer_name = issuer_name;
    x509_certificate2_local_var->not_after = not_after;
    x509_certificate2_local_var->not_before = not_before;
    x509_certificate2_local_var->public_key = public_key;
    x509_certificate2_local_var->raw_data = raw_data;
    x509_certificate2_local_var->raw_data_memory = raw_data_memory;
    x509_certificate2_local_var->serial_number = serial_number;
    x509_certificate2_local_var->signature_algorithm = signature_algorithm;
    x509_certificate2_local_var->subject_name = subject_name;
    x509_certificate2_local_var->thumbprint = thumbprint;
    x509_certificate2_local_var->version = version;

    return x509_certificate2_local_var;
}


void x509_certificate2_free(x509_certificate2_t *x509_certificate2) {
    if(NULL == x509_certificate2){
        return ;
    }
    listEntry_t *listEntry;
    if (x509_certificate2->handle) {
        object_free(x509_certificate2->handle);
        x509_certificate2->handle = NULL;
    }
    if (x509_certificate2->issuer) {
        free(x509_certificate2->issuer);
        x509_certificate2->issuer = NULL;
    }
    if (x509_certificate2->subject) {
        free(x509_certificate2->subject);
        x509_certificate2->subject = NULL;
    }
    if (x509_certificate2->serial_number_bytes) {
        byte_read_only_memory_free(x509_certificate2->serial_number_bytes);
        x509_certificate2->serial_number_bytes = NULL;
    }
    if (x509_certificate2->extensions) {
        list_ForEach(listEntry, x509_certificate2->extensions) {
            x509_extension_free(listEntry->data);
        }
        list_freeList(x509_certificate2->extensions);
        x509_certificate2->extensions = NULL;
    }
    if (x509_certificate2->friendly_name) {
        free(x509_certificate2->friendly_name);
        x509_certificate2->friendly_name = NULL;
    }
    if (x509_certificate2->private_key) {
        asymmetric_algorithm_free(x509_certificate2->private_key);
        x509_certificate2->private_key = NULL;
    }
    if (x509_certificate2->issuer_name) {
        x500_distinguished_name_free(x509_certificate2->issuer_name);
        x509_certificate2->issuer_name = NULL;
    }
    if (x509_certificate2->not_after) {
        free(x509_certificate2->not_after);
        x509_certificate2->not_after = NULL;
    }
    if (x509_certificate2->not_before) {
        free(x509_certificate2->not_before);
        x509_certificate2->not_before = NULL;
    }
    if (x509_certificate2->public_key) {
        public_key_free(x509_certificate2->public_key);
        x509_certificate2->public_key = NULL;
    }
    if (x509_certificate2->raw_data) {
        free(x509_certificate2->raw_data);
        x509_certificate2->raw_data = NULL;
    }
    if (x509_certificate2->raw_data_memory) {
        byte_read_only_memory_free(x509_certificate2->raw_data_memory);
        x509_certificate2->raw_data_memory = NULL;
    }
    if (x509_certificate2->serial_number) {
        free(x509_certificate2->serial_number);
        x509_certificate2->serial_number = NULL;
    }
    if (x509_certificate2->signature_algorithm) {
        oid_free(x509_certificate2->signature_algorithm);
        x509_certificate2->signature_algorithm = NULL;
    }
    if (x509_certificate2->subject_name) {
        x500_distinguished_name_free(x509_certificate2->subject_name);
        x509_certificate2->subject_name = NULL;
    }
    if (x509_certificate2->thumbprint) {
        free(x509_certificate2->thumbprint);
        x509_certificate2->thumbprint = NULL;
    }
    free(x509_certificate2);
}

cJSON *x509_certificate2_convertToJSON(x509_certificate2_t *x509_certificate2) {
    cJSON *item = cJSON_CreateObject();

    // x509_certificate2->handle
    if(x509_certificate2->handle) {
    cJSON *handle_object = object_convertToJSON(x509_certificate2->handle);
    if(handle_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "handle", handle_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x509_certificate2->issuer
    if(x509_certificate2->issuer) {
    if(cJSON_AddStringToObject(item, "issuer", x509_certificate2->issuer) == NULL) {
    goto fail; //String
    }
    }


    // x509_certificate2->subject
    if(x509_certificate2->subject) {
    if(cJSON_AddStringToObject(item, "subject", x509_certificate2->subject) == NULL) {
    goto fail; //String
    }
    }


    // x509_certificate2->serial_number_bytes
    if(x509_certificate2->serial_number_bytes) {
    cJSON *serial_number_bytes_local_JSON = byte_read_only_memory_convertToJSON(x509_certificate2->serial_number_bytes);
    if(serial_number_bytes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serialNumberBytes", serial_number_bytes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x509_certificate2->archived
    if(x509_certificate2->archived) {
    if(cJSON_AddBoolToObject(item, "archived", x509_certificate2->archived) == NULL) {
    goto fail; //Bool
    }
    }


    // x509_certificate2->extensions
    if(x509_certificate2->extensions) {
    cJSON *extensions = cJSON_AddArrayToObject(item, "extensions");
    if(extensions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *extensionsListEntry;
    if (x509_certificate2->extensions) {
    list_ForEach(extensionsListEntry, x509_certificate2->extensions) {
    cJSON *itemLocal = x509_extension_convertToJSON(extensionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(extensions, itemLocal);
    }
    }
    }


    // x509_certificate2->friendly_name
    if(x509_certificate2->friendly_name) {
    if(cJSON_AddStringToObject(item, "friendlyName", x509_certificate2->friendly_name) == NULL) {
    goto fail; //String
    }
    }


    // x509_certificate2->has_private_key
    if(x509_certificate2->has_private_key) {
    if(cJSON_AddBoolToObject(item, "hasPrivateKey", x509_certificate2->has_private_key) == NULL) {
    goto fail; //Bool
    }
    }


    // x509_certificate2->private_key
    if(x509_certificate2->private_key) {
    cJSON *private_key_local_JSON = asymmetric_algorithm_convertToJSON(x509_certificate2->private_key);
    if(private_key_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "privateKey", private_key_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x509_certificate2->issuer_name
    if(x509_certificate2->issuer_name) {
    cJSON *issuer_name_local_JSON = x500_distinguished_name_convertToJSON(x509_certificate2->issuer_name);
    if(issuer_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "issuerName", issuer_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x509_certificate2->not_after
    if(x509_certificate2->not_after) {
    if(cJSON_AddStringToObject(item, "notAfter", x509_certificate2->not_after) == NULL) {
    goto fail; //Date-Time
    }
    }


    // x509_certificate2->not_before
    if(x509_certificate2->not_before) {
    if(cJSON_AddStringToObject(item, "notBefore", x509_certificate2->not_before) == NULL) {
    goto fail; //Date-Time
    }
    }


    // x509_certificate2->public_key
    if(x509_certificate2->public_key) {
    cJSON *public_key_local_JSON = public_key_convertToJSON(x509_certificate2->public_key);
    if(public_key_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "publicKey", public_key_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x509_certificate2->raw_data
    if(x509_certificate2->raw_data) {
    if(cJSON_AddStringToObject(item, "rawData", x509_certificate2->raw_data) == NULL) {
    goto fail; //ByteArray
    }
    }


    // x509_certificate2->raw_data_memory
    if(x509_certificate2->raw_data_memory) {
    cJSON *raw_data_memory_local_JSON = byte_read_only_memory_convertToJSON(x509_certificate2->raw_data_memory);
    if(raw_data_memory_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rawDataMemory", raw_data_memory_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x509_certificate2->serial_number
    if(x509_certificate2->serial_number) {
    if(cJSON_AddStringToObject(item, "serialNumber", x509_certificate2->serial_number) == NULL) {
    goto fail; //String
    }
    }


    // x509_certificate2->signature_algorithm
    if(x509_certificate2->signature_algorithm) {
    cJSON *signature_algorithm_local_JSON = oid_convertToJSON(x509_certificate2->signature_algorithm);
    if(signature_algorithm_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "signatureAlgorithm", signature_algorithm_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x509_certificate2->subject_name
    if(x509_certificate2->subject_name) {
    cJSON *subject_name_local_JSON = x500_distinguished_name_convertToJSON(x509_certificate2->subject_name);
    if(subject_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "subjectName", subject_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // x509_certificate2->thumbprint
    if(x509_certificate2->thumbprint) {
    if(cJSON_AddStringToObject(item, "thumbprint", x509_certificate2->thumbprint) == NULL) {
    goto fail; //String
    }
    }


    // x509_certificate2->version
    if(x509_certificate2->version) {
    if(cJSON_AddNumberToObject(item, "version", x509_certificate2->version) == NULL) {
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

x509_certificate2_t *x509_certificate2_parseFromJSON(cJSON *x509_certificate2JSON){

    x509_certificate2_t *x509_certificate2_local_var = NULL;

    // define the local variable for x509_certificate2->serial_number_bytes
    byte_read_only_memory_t *serial_number_bytes_local_nonprim = NULL;

    // define the local list for x509_certificate2->extensions
    list_t *extensionsList = NULL;

    // define the local variable for x509_certificate2->private_key
    asymmetric_algorithm_t *private_key_local_nonprim = NULL;

    // define the local variable for x509_certificate2->issuer_name
    x500_distinguished_name_t *issuer_name_local_nonprim = NULL;

    // define the local variable for x509_certificate2->public_key
    public_key_t *public_key_local_nonprim = NULL;

    // define the local variable for x509_certificate2->raw_data_memory
    byte_read_only_memory_t *raw_data_memory_local_nonprim = NULL;

    // define the local variable for x509_certificate2->signature_algorithm
    oid_t *signature_algorithm_local_nonprim = NULL;

    // define the local variable for x509_certificate2->subject_name
    x500_distinguished_name_t *subject_name_local_nonprim = NULL;

    // x509_certificate2->handle
    cJSON *handle = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "handle");
    object_t *handle_local_object = NULL;
    if (handle) { 
    handle_local_object = object_parseFromJSON(handle); //object
    }

    // x509_certificate2->issuer
    cJSON *issuer = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "issuer");
    if (issuer) { 
    if(!cJSON_IsString(issuer) && !cJSON_IsNull(issuer))
    {
    goto end; //String
    }
    }

    // x509_certificate2->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "subject");
    if (subject) { 
    if(!cJSON_IsString(subject) && !cJSON_IsNull(subject))
    {
    goto end; //String
    }
    }

    // x509_certificate2->serial_number_bytes
    cJSON *serial_number_bytes = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "serialNumberBytes");
    if (serial_number_bytes) { 
    serial_number_bytes_local_nonprim = byte_read_only_memory_parseFromJSON(serial_number_bytes); //nonprimitive
    }

    // x509_certificate2->archived
    cJSON *archived = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "archived");
    if (archived) { 
    if(!cJSON_IsBool(archived))
    {
    goto end; //Bool
    }
    }

    // x509_certificate2->extensions
    cJSON *extensions = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "extensions");
    if (extensions) { 
    cJSON *extensions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(extensions)){
        goto end; //nonprimitive container
    }

    extensionsList = list_createList();

    cJSON_ArrayForEach(extensions_local_nonprimitive,extensions )
    {
        if(!cJSON_IsObject(extensions_local_nonprimitive)){
            goto end;
        }
        x509_extension_t *extensionsItem = x509_extension_parseFromJSON(extensions_local_nonprimitive);

        list_addElement(extensionsList, extensionsItem);
    }
    }

    // x509_certificate2->friendly_name
    cJSON *friendly_name = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "friendlyName");
    if (friendly_name) { 
    if(!cJSON_IsString(friendly_name) && !cJSON_IsNull(friendly_name))
    {
    goto end; //String
    }
    }

    // x509_certificate2->has_private_key
    cJSON *has_private_key = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "hasPrivateKey");
    if (has_private_key) { 
    if(!cJSON_IsBool(has_private_key))
    {
    goto end; //Bool
    }
    }

    // x509_certificate2->private_key
    cJSON *private_key = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "privateKey");
    if (private_key) { 
    private_key_local_nonprim = asymmetric_algorithm_parseFromJSON(private_key); //nonprimitive
    }

    // x509_certificate2->issuer_name
    cJSON *issuer_name = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "issuerName");
    if (issuer_name) { 
    issuer_name_local_nonprim = x500_distinguished_name_parseFromJSON(issuer_name); //nonprimitive
    }

    // x509_certificate2->not_after
    cJSON *not_after = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "notAfter");
    if (not_after) { 
    if(!cJSON_IsString(not_after) && !cJSON_IsNull(not_after))
    {
    goto end; //DateTime
    }
    }

    // x509_certificate2->not_before
    cJSON *not_before = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "notBefore");
    if (not_before) { 
    if(!cJSON_IsString(not_before) && !cJSON_IsNull(not_before))
    {
    goto end; //DateTime
    }
    }

    // x509_certificate2->public_key
    cJSON *public_key = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "publicKey");
    if (public_key) { 
    public_key_local_nonprim = public_key_parseFromJSON(public_key); //nonprimitive
    }

    // x509_certificate2->raw_data
    cJSON *raw_data = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "rawData");
    if (raw_data) { 
    if(!cJSON_IsString(raw_data))
    {
    goto end; //ByteArray
    }
    }

    // x509_certificate2->raw_data_memory
    cJSON *raw_data_memory = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "rawDataMemory");
    if (raw_data_memory) { 
    raw_data_memory_local_nonprim = byte_read_only_memory_parseFromJSON(raw_data_memory); //nonprimitive
    }

    // x509_certificate2->serial_number
    cJSON *serial_number = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "serialNumber");
    if (serial_number) { 
    if(!cJSON_IsString(serial_number) && !cJSON_IsNull(serial_number))
    {
    goto end; //String
    }
    }

    // x509_certificate2->signature_algorithm
    cJSON *signature_algorithm = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "signatureAlgorithm");
    if (signature_algorithm) { 
    signature_algorithm_local_nonprim = oid_parseFromJSON(signature_algorithm); //nonprimitive
    }

    // x509_certificate2->subject_name
    cJSON *subject_name = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "subjectName");
    if (subject_name) { 
    subject_name_local_nonprim = x500_distinguished_name_parseFromJSON(subject_name); //nonprimitive
    }

    // x509_certificate2->thumbprint
    cJSON *thumbprint = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "thumbprint");
    if (thumbprint) { 
    if(!cJSON_IsString(thumbprint) && !cJSON_IsNull(thumbprint))
    {
    goto end; //String
    }
    }

    // x509_certificate2->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(x509_certificate2JSON, "version");
    if (version) { 
    if(!cJSON_IsNumber(version))
    {
    goto end; //Numeric
    }
    }


    x509_certificate2_local_var = x509_certificate2_create (
        handle ? handle_local_object : NULL,
        issuer && !cJSON_IsNull(issuer) ? strdup(issuer->valuestring) : NULL,
        subject && !cJSON_IsNull(subject) ? strdup(subject->valuestring) : NULL,
        serial_number_bytes ? serial_number_bytes_local_nonprim : NULL,
        archived ? archived->valueint : 0,
        extensions ? extensionsList : NULL,
        friendly_name && !cJSON_IsNull(friendly_name) ? strdup(friendly_name->valuestring) : NULL,
        has_private_key ? has_private_key->valueint : 0,
        private_key ? private_key_local_nonprim : NULL,
        issuer_name ? issuer_name_local_nonprim : NULL,
        not_after && !cJSON_IsNull(not_after) ? strdup(not_after->valuestring) : NULL,
        not_before && !cJSON_IsNull(not_before) ? strdup(not_before->valuestring) : NULL,
        public_key ? public_key_local_nonprim : NULL,
        raw_data ? strdup(raw_data->valuestring) : NULL,
        raw_data_memory ? raw_data_memory_local_nonprim : NULL,
        serial_number && !cJSON_IsNull(serial_number) ? strdup(serial_number->valuestring) : NULL,
        signature_algorithm ? signature_algorithm_local_nonprim : NULL,
        subject_name ? subject_name_local_nonprim : NULL,
        thumbprint && !cJSON_IsNull(thumbprint) ? strdup(thumbprint->valuestring) : NULL,
        version ? version->valuedouble : 0
        );

    return x509_certificate2_local_var;
end:
    if (serial_number_bytes_local_nonprim) {
        byte_read_only_memory_free(serial_number_bytes_local_nonprim);
        serial_number_bytes_local_nonprim = NULL;
    }
    if (extensionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, extensionsList) {
            x509_extension_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(extensionsList);
        extensionsList = NULL;
    }
    if (private_key_local_nonprim) {
        asymmetric_algorithm_free(private_key_local_nonprim);
        private_key_local_nonprim = NULL;
    }
    if (issuer_name_local_nonprim) {
        x500_distinguished_name_free(issuer_name_local_nonprim);
        issuer_name_local_nonprim = NULL;
    }
    if (public_key_local_nonprim) {
        public_key_free(public_key_local_nonprim);
        public_key_local_nonprim = NULL;
    }
    if (raw_data_memory_local_nonprim) {
        byte_read_only_memory_free(raw_data_memory_local_nonprim);
        raw_data_memory_local_nonprim = NULL;
    }
    if (signature_algorithm_local_nonprim) {
        oid_free(signature_algorithm_local_nonprim);
        signature_algorithm_local_nonprim = NULL;
    }
    if (subject_name_local_nonprim) {
        x500_distinguished_name_free(subject_name_local_nonprim);
        subject_name_local_nonprim = NULL;
    }
    return NULL;

}
