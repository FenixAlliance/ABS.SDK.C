#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "truck_driver_dto.h"



truck_driver_dto_t *truck_driver_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *phone,
    char *email,
    char *national_id_number,
    char *license_number,
    char *license_class,
    char *license_expiry_date,
    int adr_certified,
    char *adr_certificate_expiry_date,
    char *medical_exam_expiry_date,
    int is_active,
    char *notes,
    char *contact_id,
    char *shipping_courier_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    truck_driver_dto_t *truck_driver_dto_local_var = malloc(sizeof(truck_driver_dto_t));
    if (!truck_driver_dto_local_var) {
        return NULL;
    }
    truck_driver_dto_local_var->id = id;
    truck_driver_dto_local_var->timestamp = timestamp;
    truck_driver_dto_local_var->name = name;
    truck_driver_dto_local_var->phone = phone;
    truck_driver_dto_local_var->email = email;
    truck_driver_dto_local_var->national_id_number = national_id_number;
    truck_driver_dto_local_var->license_number = license_number;
    truck_driver_dto_local_var->license_class = license_class;
    truck_driver_dto_local_var->license_expiry_date = license_expiry_date;
    truck_driver_dto_local_var->adr_certified = adr_certified;
    truck_driver_dto_local_var->adr_certificate_expiry_date = adr_certificate_expiry_date;
    truck_driver_dto_local_var->medical_exam_expiry_date = medical_exam_expiry_date;
    truck_driver_dto_local_var->is_active = is_active;
    truck_driver_dto_local_var->notes = notes;
    truck_driver_dto_local_var->contact_id = contact_id;
    truck_driver_dto_local_var->shipping_courier_id = shipping_courier_id;
    truck_driver_dto_local_var->tenant_id = tenant_id;
    truck_driver_dto_local_var->enrollment_id = enrollment_id;

    return truck_driver_dto_local_var;
}


void truck_driver_dto_free(truck_driver_dto_t *truck_driver_dto) {
    if(NULL == truck_driver_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (truck_driver_dto->id) {
        free(truck_driver_dto->id);
        truck_driver_dto->id = NULL;
    }
    if (truck_driver_dto->timestamp) {
        free(truck_driver_dto->timestamp);
        truck_driver_dto->timestamp = NULL;
    }
    if (truck_driver_dto->name) {
        free(truck_driver_dto->name);
        truck_driver_dto->name = NULL;
    }
    if (truck_driver_dto->phone) {
        free(truck_driver_dto->phone);
        truck_driver_dto->phone = NULL;
    }
    if (truck_driver_dto->email) {
        free(truck_driver_dto->email);
        truck_driver_dto->email = NULL;
    }
    if (truck_driver_dto->national_id_number) {
        free(truck_driver_dto->national_id_number);
        truck_driver_dto->national_id_number = NULL;
    }
    if (truck_driver_dto->license_number) {
        free(truck_driver_dto->license_number);
        truck_driver_dto->license_number = NULL;
    }
    if (truck_driver_dto->license_class) {
        free(truck_driver_dto->license_class);
        truck_driver_dto->license_class = NULL;
    }
    if (truck_driver_dto->license_expiry_date) {
        free(truck_driver_dto->license_expiry_date);
        truck_driver_dto->license_expiry_date = NULL;
    }
    if (truck_driver_dto->adr_certificate_expiry_date) {
        free(truck_driver_dto->adr_certificate_expiry_date);
        truck_driver_dto->adr_certificate_expiry_date = NULL;
    }
    if (truck_driver_dto->medical_exam_expiry_date) {
        free(truck_driver_dto->medical_exam_expiry_date);
        truck_driver_dto->medical_exam_expiry_date = NULL;
    }
    if (truck_driver_dto->notes) {
        free(truck_driver_dto->notes);
        truck_driver_dto->notes = NULL;
    }
    if (truck_driver_dto->contact_id) {
        free(truck_driver_dto->contact_id);
        truck_driver_dto->contact_id = NULL;
    }
    if (truck_driver_dto->shipping_courier_id) {
        free(truck_driver_dto->shipping_courier_id);
        truck_driver_dto->shipping_courier_id = NULL;
    }
    if (truck_driver_dto->tenant_id) {
        free(truck_driver_dto->tenant_id);
        truck_driver_dto->tenant_id = NULL;
    }
    if (truck_driver_dto->enrollment_id) {
        free(truck_driver_dto->enrollment_id);
        truck_driver_dto->enrollment_id = NULL;
    }
    free(truck_driver_dto);
}

cJSON *truck_driver_dto_convertToJSON(truck_driver_dto_t *truck_driver_dto) {
    cJSON *item = cJSON_CreateObject();

    // truck_driver_dto->id
    if(truck_driver_dto->id) {
    if(cJSON_AddStringToObject(item, "id", truck_driver_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->timestamp
    if(truck_driver_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", truck_driver_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // truck_driver_dto->name
    if(truck_driver_dto->name) {
    if(cJSON_AddStringToObject(item, "name", truck_driver_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->phone
    if(truck_driver_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", truck_driver_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->email
    if(truck_driver_dto->email) {
    if(cJSON_AddStringToObject(item, "email", truck_driver_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->national_id_number
    if(truck_driver_dto->national_id_number) {
    if(cJSON_AddStringToObject(item, "nationalIdNumber", truck_driver_dto->national_id_number) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->license_number
    if(truck_driver_dto->license_number) {
    if(cJSON_AddStringToObject(item, "licenseNumber", truck_driver_dto->license_number) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->license_class
    if(truck_driver_dto->license_class) {
    if(cJSON_AddStringToObject(item, "licenseClass", truck_driver_dto->license_class) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->license_expiry_date
    if(truck_driver_dto->license_expiry_date) {
    if(cJSON_AddStringToObject(item, "licenseExpiryDate", truck_driver_dto->license_expiry_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // truck_driver_dto->adr_certified
    if(truck_driver_dto->adr_certified) {
    if(cJSON_AddBoolToObject(item, "adrCertified", truck_driver_dto->adr_certified) == NULL) {
    goto fail; //Bool
    }
    }


    // truck_driver_dto->adr_certificate_expiry_date
    if(truck_driver_dto->adr_certificate_expiry_date) {
    if(cJSON_AddStringToObject(item, "adrCertificateExpiryDate", truck_driver_dto->adr_certificate_expiry_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // truck_driver_dto->medical_exam_expiry_date
    if(truck_driver_dto->medical_exam_expiry_date) {
    if(cJSON_AddStringToObject(item, "medicalExamExpiryDate", truck_driver_dto->medical_exam_expiry_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // truck_driver_dto->is_active
    if(truck_driver_dto->is_active) {
    if(cJSON_AddBoolToObject(item, "isActive", truck_driver_dto->is_active) == NULL) {
    goto fail; //Bool
    }
    }


    // truck_driver_dto->notes
    if(truck_driver_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", truck_driver_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->contact_id
    if(truck_driver_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", truck_driver_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->shipping_courier_id
    if(truck_driver_dto->shipping_courier_id) {
    if(cJSON_AddStringToObject(item, "shippingCourierId", truck_driver_dto->shipping_courier_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->tenant_id
    if(truck_driver_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", truck_driver_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // truck_driver_dto->enrollment_id
    if(truck_driver_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", truck_driver_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

truck_driver_dto_t *truck_driver_dto_parseFromJSON(cJSON *truck_driver_dtoJSON){

    truck_driver_dto_t *truck_driver_dto_local_var = NULL;

    // truck_driver_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // truck_driver_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->national_id_number
    cJSON *national_id_number = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "nationalIdNumber");
    if (national_id_number) { 
    if(!cJSON_IsString(national_id_number) && !cJSON_IsNull(national_id_number))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->license_number
    cJSON *license_number = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "licenseNumber");
    if (license_number) { 
    if(!cJSON_IsString(license_number) && !cJSON_IsNull(license_number))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->license_class
    cJSON *license_class = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "licenseClass");
    if (license_class) { 
    if(!cJSON_IsString(license_class) && !cJSON_IsNull(license_class))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->license_expiry_date
    cJSON *license_expiry_date = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "licenseExpiryDate");
    if (license_expiry_date) { 
    if(!cJSON_IsString(license_expiry_date) && !cJSON_IsNull(license_expiry_date))
    {
    goto end; //DateTime
    }
    }

    // truck_driver_dto->adr_certified
    cJSON *adr_certified = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "adrCertified");
    if (adr_certified) { 
    if(!cJSON_IsBool(adr_certified))
    {
    goto end; //Bool
    }
    }

    // truck_driver_dto->adr_certificate_expiry_date
    cJSON *adr_certificate_expiry_date = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "adrCertificateExpiryDate");
    if (adr_certificate_expiry_date) { 
    if(!cJSON_IsString(adr_certificate_expiry_date) && !cJSON_IsNull(adr_certificate_expiry_date))
    {
    goto end; //DateTime
    }
    }

    // truck_driver_dto->medical_exam_expiry_date
    cJSON *medical_exam_expiry_date = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "medicalExamExpiryDate");
    if (medical_exam_expiry_date) { 
    if(!cJSON_IsString(medical_exam_expiry_date) && !cJSON_IsNull(medical_exam_expiry_date))
    {
    goto end; //DateTime
    }
    }

    // truck_driver_dto->is_active
    cJSON *is_active = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "isActive");
    if (is_active) { 
    if(!cJSON_IsBool(is_active))
    {
    goto end; //Bool
    }
    }

    // truck_driver_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->shipping_courier_id
    cJSON *shipping_courier_id = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "shippingCourierId");
    if (shipping_courier_id) { 
    if(!cJSON_IsString(shipping_courier_id) && !cJSON_IsNull(shipping_courier_id))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // truck_driver_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(truck_driver_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    truck_driver_dto_local_var = truck_driver_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        national_id_number && !cJSON_IsNull(national_id_number) ? strdup(national_id_number->valuestring) : NULL,
        license_number && !cJSON_IsNull(license_number) ? strdup(license_number->valuestring) : NULL,
        license_class && !cJSON_IsNull(license_class) ? strdup(license_class->valuestring) : NULL,
        license_expiry_date && !cJSON_IsNull(license_expiry_date) ? strdup(license_expiry_date->valuestring) : NULL,
        adr_certified ? adr_certified->valueint : 0,
        adr_certificate_expiry_date && !cJSON_IsNull(adr_certificate_expiry_date) ? strdup(adr_certificate_expiry_date->valuestring) : NULL,
        medical_exam_expiry_date && !cJSON_IsNull(medical_exam_expiry_date) ? strdup(medical_exam_expiry_date->valuestring) : NULL,
        is_active ? is_active->valueint : 0,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        shipping_courier_id && !cJSON_IsNull(shipping_courier_id) ? strdup(shipping_courier_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return truck_driver_dto_local_var;
end:
    return NULL;

}
