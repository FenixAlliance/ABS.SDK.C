# ContactsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContactsAPI_createContactAsync**](ContactsAPI.md#ContactsAPI_createContactAsync) | **POST** /api/v2/CrmService/Contacts | Create a new contact
[**ContactsAPI_createContactEmailAsync**](ContactsAPI.md#ContactsAPI_createContactEmailAsync) | **POST** /api/v2/CrmService/Contacts/{contactId}/Emails/Addresses | Add an email address to a contact
[**ContactsAPI_createProfileForContactAsync**](ContactsAPI.md#ContactsAPI_createProfileForContactAsync) | **POST** /api/v2/CrmService/Contacts/{contactId}/Profiles | Create a contact profile
[**ContactsAPI_deleteContactAsync**](ContactsAPI.md#ContactsAPI_deleteContactAsync) | **DELETE** /api/v2/CrmService/Contacts/{contactId} | Delete a contact
[**ContactsAPI_deleteContactEmailAsync**](ContactsAPI.md#ContactsAPI_deleteContactEmailAsync) | **DELETE** /api/v2/CrmService/Contacts/{contactId}/Emails/{emailId} | Delete a contact email address
[**ContactsAPI_deleteProfileForContactAsync**](ContactsAPI.md#ContactsAPI_deleteProfileForContactAsync) | **DELETE** /api/v2/CrmService/Contacts/{contactId}/Profiles/{profileId} | Delete a contact profile
[**ContactsAPI_getBusinessOwnedIndividualAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedIndividualAsync) | **GET** /api/v2/CrmService/Contacts/Individuals/{contactId} | Get a Contact of type Individual by ID
[**ContactsAPI_getBusinessOwnedIndividualsAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedIndividualsAsync) | **GET** /api/v2/CrmService/Contacts/Individuals | Get all contacts of type individual
[**ContactsAPI_getBusinessOwnedIndividualsCountAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedIndividualsCountAsync) | **GET** /api/v2/CrmService/Contacts/Individuals/Count | Get all contacts of type individual count
[**ContactsAPI_getBusinessOwnedOrganizationAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedOrganizationAsync) | **GET** /api/v2/CrmService/Contacts/Organizations/{contactId} | Get a Contact of type Organization by ID
[**ContactsAPI_getBusinessOwnedOrganizationsAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedOrganizationsAsync) | **GET** /api/v2/CrmService/Contacts/Organizations | Get all contacts of type organization
[**ContactsAPI_getBusinessOwnedOrganizationsCountAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedOrganizationsCountAsync) | **GET** /api/v2/CrmService/Contacts/Organizations/Count | Get all contacts of type organization count
[**ContactsAPI_getContactAsync**](ContactsAPI.md#ContactsAPI_getContactAsync) | **GET** /api/v2/CrmService/Contacts/{contactId} | Get a contact by ID
[**ContactsAPI_getContactAvatarAsync**](ContactsAPI.md#ContactsAPI_getContactAvatarAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Avatar | Get a contact&#39;s avatar
[**ContactsAPI_getContactCartAsync**](ContactsAPI.md#ContactsAPI_getContactCartAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Cart | Get a contact&#39;s cart
[**ContactsAPI_getContactEmailsAsync**](ContactsAPI.md#ContactsAPI_getContactEmailsAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Emails | Get a contact&#39;s email addresses
[**ContactsAPI_getContactEmailsCountAsync**](ContactsAPI.md#ContactsAPI_getContactEmailsCountAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Emails/Count | Get contact email addresses count
[**ContactsAPI_getContactSocialProfileAsync**](ContactsAPI.md#ContactsAPI_getContactSocialProfileAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/SocialProfile | Get a contact&#39;s social profile
[**ContactsAPI_getContactWalletAsync**](ContactsAPI.md#ContactsAPI_getContactWalletAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Wallet | Get a contact&#39;s wallet
[**ContactsAPI_getContactsAsync**](ContactsAPI.md#ContactsAPI_getContactsAsync) | **GET** /api/v2/CrmService/Contacts | Get all business owned contacts
[**ContactsAPI_getContactsCountAsync**](ContactsAPI.md#ContactsAPI_getContactsCountAsync) | **GET** /api/v2/CrmService/Contacts/Count | Get all business owned contacts count
[**ContactsAPI_getExtendedBusinessOwnedIndividualsAsync**](ContactsAPI.md#ContactsAPI_getExtendedBusinessOwnedIndividualsAsync) | **GET** /api/v2/CrmService/Contacts/Individuals/Extended | Get all contacts of type individual
[**ContactsAPI_getExtendedBusinessOwnedOrganizationsAsync**](ContactsAPI.md#ContactsAPI_getExtendedBusinessOwnedOrganizationsAsync) | **GET** /api/v2/CrmService/Contacts/Organizations/Extended | Get all contacts of type organization
[**ContactsAPI_getExtendedContactAsync**](ContactsAPI.md#ContactsAPI_getExtendedContactAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Extended | Get a contact by ID
[**ContactsAPI_getExtendedContactsAsync**](ContactsAPI.md#ContactsAPI_getExtendedContactsAsync) | **GET** /api/v2/CrmService/Contacts/Extended | Get all business owned contacts
[**ContactsAPI_getIndividualRelatedIndividualsAsync**](ContactsAPI.md#ContactsAPI_getIndividualRelatedIndividualsAsync) | **GET** /api/v2/CrmService/Contacts/Individuals/{contactId}/Individuals | Get individual related individuals
[**ContactsAPI_getIndividualRelatedOrganizationsAsync**](ContactsAPI.md#ContactsAPI_getIndividualRelatedOrganizationsAsync) | **GET** /api/v2/CrmService/Contacts/Individuals/{contactId}/Organizations | Get individual related organizations
[**ContactsAPI_getOrganizationRelatedIndividualsAsync**](ContactsAPI.md#ContactsAPI_getOrganizationRelatedIndividualsAsync) | **GET** /api/v2/CrmService/Contacts/Organizations/{contactId}/Individuals | Get organization related individuals
[**ContactsAPI_getOrganizationRelatedOrganizationsAsync**](ContactsAPI.md#ContactsAPI_getOrganizationRelatedOrganizationsAsync) | **GET** /api/v2/CrmService/Contacts/Organizations/{contactId}/Organizations | Get organization related organizations
[**ContactsAPI_getProfilesForContactAsync**](ContactsAPI.md#ContactsAPI_getProfilesForContactAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Profiles | Get a contact&#39;s social profiles
[**ContactsAPI_getProfilesForContactCountAsync**](ContactsAPI.md#ContactsAPI_getProfilesForContactCountAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Profiles/Count | Get contact profiles count
[**ContactsAPI_patchContactAsync**](ContactsAPI.md#ContactsAPI_patchContactAsync) | **PATCH** /api/v2/CrmService/Contacts/{contactId} | Patch a contact
[**ContactsAPI_patchContactEmailAsync**](ContactsAPI.md#ContactsAPI_patchContactEmailAsync) | **PATCH** /api/v2/CrmService/Contacts/{contactId}/Emails/{emailId} | Patch a contact email address
[**ContactsAPI_previewContactEmailTemplate**](ContactsAPI.md#ContactsAPI_previewContactEmailTemplate) | **POST** /api/v2/CrmService/Contacts/{contactId}/Emails/Preview | Preview the rendered email for a contact.
[**ContactsAPI_sendContactEmail**](ContactsAPI.md#ContactsAPI_sendContactEmail) | **POST** /api/v2/CrmService/Contacts/{contactId}/Emails/Send | Send an email to a contact.
[**ContactsAPI_updateContactAsync**](ContactsAPI.md#ContactsAPI_updateContactAsync) | **PUT** /api/v2/CrmService/Contacts/{contactId} | Update a contact
[**ContactsAPI_updateContactAvatarAsync**](ContactsAPI.md#ContactsAPI_updateContactAvatarAsync) | **POST** /api/v2/CrmService/Contacts/{contactId}/Avatar | Update a contact&#39;s avatar
[**ContactsAPI_updateContactEmailAsync**](ContactsAPI.md#ContactsAPI_updateContactEmailAsync) | **PUT** /api/v2/CrmService/Contacts/{contactId}/Emails/{emailId} | Update a contact email address
[**ContactsAPI_updateProfileForContactAsync**](ContactsAPI.md#ContactsAPI_updateProfileForContactAsync) | **PUT** /api/v2/CrmService/Contacts/{contactId}/Profiles/{profileId} | Update a contact profile
[**ContactsAPI_upsertTenantOntoAnotherTenantContactListAsync**](ContactsAPI.md#ContactsAPI_upsertTenantOntoAnotherTenantContactListAsync) | **POST** /api/v2/CrmService/Contacts/Organizations/Upsert | Upsert a tenant onto another tenant&#39;s contact list
[**ContactsAPI_upsertUserOntoAnotherTenantContactListAsync**](ContactsAPI.md#ContactsAPI_upsertUserOntoAnotherTenantContactListAsync) | **POST** /api/v2/CrmService/Contacts/Individuals/Upsert | Upsert a user onto a tenant&#39;s contact list
[**ContactsAPI_verifyContactEmailAsync**](ContactsAPI.md#ContactsAPI_verifyContactEmailAsync) | **POST** /api/v2/CrmService/Contacts/{contactId}/Emails/{emailId}/Verify | Verify a contact email address


# **ContactsAPI_createContactAsync**
```c
// Create a new contact
//
// Create a new contact
//
empty_envelope_t* ContactsAPI_createContactAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_create_dto_t *contact_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_create_dto** | **[contact_create_dto_t](contact_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_createContactEmailAsync**
```c
// Add an email address to a contact
//
// Creates a new email address for the specified contact.
//
void ContactsAPI_createContactEmailAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, contact_email_create_dto_t *contact_email_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_email_create_dto** | **[contact_email_create_dto_t](contact_email_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_createProfileForContactAsync**
```c
// Create a contact profile
//
// Creates a new profile for the specified contact.
//
void ContactsAPI_createProfileForContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, contact_profile_create_dto_t *contact_profile_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_profile_create_dto** | **[contact_profile_create_dto_t](contact_profile_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_deleteContactAsync**
```c
// Delete a contact
//
// Delete a contact
//
empty_envelope_t* ContactsAPI_deleteContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_deleteContactEmailAsync**
```c
// Delete a contact email address
//
// Deletes an email address from the specified contact.
//
void ContactsAPI_deleteContactEmailAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *emailId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**emailId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_deleteProfileForContactAsync**
```c
// Delete a contact profile
//
// Deletes a profile for the specified contact.
//
void ContactsAPI_deleteProfileForContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *profileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**profileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getBusinessOwnedIndividualAsync**
```c
// Get a Contact of type Individual by ID
//
// Get a Contact of type Individual by ID
//
contact_dto_envelope_t* ContactsAPI_getBusinessOwnedIndividualAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_envelope_t](contact_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getBusinessOwnedIndividualsAsync**
```c
// Get all contacts of type individual
//
// Get all contacts of type individual
//
contact_dto_list_envelope_t* ContactsAPI_getBusinessOwnedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_dto_collection_query_parameters_t *contact_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_dto_collection_query_parameters** | **[contact_dto_collection_query_parameters_t](contact_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getBusinessOwnedIndividualsCountAsync**
```c
// Get all contacts of type individual count
//
// Get all contacts of type individual count
//
contact_dto_list_envelope_t* ContactsAPI_getBusinessOwnedIndividualsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_dto_collection_query_parameters_t *contact_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_dto_collection_query_parameters** | **[contact_dto_collection_query_parameters_t](contact_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getBusinessOwnedOrganizationAsync**
```c
// Get a Contact of type Organization by ID
//
// Get a Contact of type Organization by ID
//
contact_dto_envelope_t* ContactsAPI_getBusinessOwnedOrganizationAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_envelope_t](contact_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getBusinessOwnedOrganizationsAsync**
```c
// Get all contacts of type organization
//
// Get all contacts of type organization
//
list_t* ContactsAPI_getBusinessOwnedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_dto_collection_query_parameters_t *contact_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_dto_collection_query_parameters** | **[contact_dto_collection_query_parameters_t](contact_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[list_t](contact_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getBusinessOwnedOrganizationsCountAsync**
```c
// Get all contacts of type organization count
//
// Get all contacts of type organization count
//
contact_dto_list_envelope_t* ContactsAPI_getBusinessOwnedOrganizationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_dto_collection_query_parameters_t *contact_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_dto_collection_query_parameters** | **[contact_dto_collection_query_parameters_t](contact_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getContactAsync**
```c
// Get a contact by ID
//
// Get a contact by ID
//
contact_dto_envelope_t* ContactsAPI_getContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_envelope_t](contact_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getContactAvatarAsync**
```c
// Get a contact's avatar
//
// Get a contact's avatar
//
empty_envelope_t* ContactsAPI_getContactAvatarAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getContactCartAsync**
```c
// Get a contact's cart
//
// Get a contact's cart
//
cart_dto_envelope_t* ContactsAPI_getContactCartAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[cart_dto_envelope_t](cart_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getContactEmailsAsync**
```c
// Get a contact's email addresses
//
// Get all email addresses for the specified contact.
//
contact_email_dto_list_envelope_t* ContactsAPI_getContactEmailsAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, contact_email_dto_collection_query_parameters_t *contact_email_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_email_dto_collection_query_parameters** | **[contact_email_dto_collection_query_parameters_t](contact_email_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contact_email_dto_list_envelope_t](contact_email_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getContactEmailsCountAsync**
```c
// Get contact email addresses count
//
// Returns the count of email addresses for the specified contact.
//
int32_envelope_t* ContactsAPI_getContactEmailsCountAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, contact_email_dto_collection_query_parameters_t *contact_email_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_email_dto_collection_query_parameters** | **[contact_email_dto_collection_query_parameters_t](contact_email_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getContactSocialProfileAsync**
```c
// Get a contact's social profile
//
// Get a contact's social profile
//
social_profile_dto_envelope_t* ContactsAPI_getContactSocialProfileAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[social_profile_dto_envelope_t](social_profile_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getContactWalletAsync**
```c
// Get a contact's wallet
//
// Get a contact's wallet
//
wallet_dto_envelope_t* ContactsAPI_getContactWalletAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[wallet_dto_envelope_t](wallet_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getContactsAsync**
```c
// Get all business owned contacts
//
// Get all business owned contacts
//
contact_dto_list_envelope_t* ContactsAPI_getContactsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_dto_collection_query_parameters_t *contact_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_dto_collection_query_parameters** | **[contact_dto_collection_query_parameters_t](contact_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getContactsCountAsync**
```c
// Get all business owned contacts count
//
// Get all business owned contacts count
//
contact_dto_list_envelope_t* ContactsAPI_getContactsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_dto_collection_query_parameters_t *contact_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_dto_collection_query_parameters** | **[contact_dto_collection_query_parameters_t](contact_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getExtendedBusinessOwnedIndividualsAsync**
```c
// Get all contacts of type individual
//
// Get all contacts of type individual
//
extended_contact_dto_list_envelope_t* ContactsAPI_getExtendedBusinessOwnedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, extended_contact_dto_collection_query_parameters_t *extended_contact_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**extended_contact_dto_collection_query_parameters** | **[extended_contact_dto_collection_query_parameters_t](extended_contact_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[extended_contact_dto_list_envelope_t](extended_contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getExtendedBusinessOwnedOrganizationsAsync**
```c
// Get all contacts of type organization
//
// Get all contacts of type organization
//
extended_contact_dto_list_envelope_t* ContactsAPI_getExtendedBusinessOwnedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, extended_contact_dto_collection_query_parameters_t *extended_contact_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**extended_contact_dto_collection_query_parameters** | **[extended_contact_dto_collection_query_parameters_t](extended_contact_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[extended_contact_dto_list_envelope_t](extended_contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getExtendedContactAsync**
```c
// Get a contact by ID
//
// Get a contact by ID
//
extended_contact_dto_envelope_t* ContactsAPI_getExtendedContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_contact_dto_envelope_t](extended_contact_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getExtendedContactsAsync**
```c
// Get all business owned contacts
//
// Get all business owned contacts
//
extended_contact_dto_list_envelope_t* ContactsAPI_getExtendedContactsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, extended_contact_dto_collection_query_parameters_t *extended_contact_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**extended_contact_dto_collection_query_parameters** | **[extended_contact_dto_collection_query_parameters_t](extended_contact_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[extended_contact_dto_list_envelope_t](extended_contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getIndividualRelatedIndividualsAsync**
```c
// Get individual related individuals
//
// Get individual related individuals
//
contact_dto_list_envelope_t* ContactsAPI_getIndividualRelatedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getIndividualRelatedOrganizationsAsync**
```c
// Get individual related organizations
//
// Get individual related organizations
//
contact_dto_list_envelope_t* ContactsAPI_getIndividualRelatedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getOrganizationRelatedIndividualsAsync**
```c
// Get organization related individuals
//
// Get organization related individuals
//
contact_dto_list_envelope_t* ContactsAPI_getOrganizationRelatedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getOrganizationRelatedOrganizationsAsync**
```c
// Get organization related organizations
//
// Get organization related organizations
//
contact_dto_list_envelope_t* ContactsAPI_getOrganizationRelatedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_list_envelope_t](contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getProfilesForContactAsync**
```c
// Get a contact's social profiles
//
// Get a contact's social profiles
//
contact_profile_dto_list_envelope_t* ContactsAPI_getProfilesForContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_profile_dto_list_envelope_t](contact_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getProfilesForContactCountAsync**
```c
// Get contact profiles count
//
// Returns the count of profiles for the specified contact.
//
int32_envelope_t* ContactsAPI_getProfilesForContactCountAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, contact_profile_dto_collection_query_parameters_t *contact_profile_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_profile_dto_collection_query_parameters** | **[contact_profile_dto_collection_query_parameters_t](contact_profile_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_patchContactAsync**
```c
// Patch a contact
//
// Patch a contact
//
empty_envelope_t* ContactsAPI_patchContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_patchContactEmailAsync**
```c
// Patch a contact email address
//
// Partially updates an existing email address for the specified contact.
//
void ContactsAPI_patchContactEmailAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *emailId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**emailId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_previewContactEmailTemplate**
```c
// Preview the rendered email for a contact.
//
// This action is only available for global administrators (business_owner role).
//
void ContactsAPI_previewContactEmailTemplate(apiClient_t *apiClient, char *contactId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_sendContactEmail**
```c
// Send an email to a contact.
//
// This action is only available for global administrators (business_owner role).
//
void ContactsAPI_sendContactEmail(apiClient_t *apiClient, char *contactId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**email_dispatch_request** | **[email_dispatch_request_t](email_dispatch_request.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_updateContactAsync**
```c
// Update a contact
//
// Update a contact
//
empty_envelope_t* ContactsAPI_updateContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, contact_update_dto_t *contact_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_update_dto** | **[contact_update_dto_t](contact_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_updateContactAvatarAsync**
```c
// Update a contact's avatar
//
// Update a contact's avatar
//
empty_envelope_t* ContactsAPI_updateContactAvatarAsync(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version, binary_t* avatar);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**avatar** | **binary_t*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_updateContactEmailAsync**
```c
// Update a contact email address
//
// Updates an existing email address for the specified contact.
//
void ContactsAPI_updateContactEmailAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *emailId, char *api_version, char *x_api_version, contact_email_update_dto_t *contact_email_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**emailId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_email_update_dto** | **[contact_email_update_dto_t](contact_email_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_updateProfileForContactAsync**
```c
// Update a contact profile
//
// Updates an existing profile for the specified contact.
//
void ContactsAPI_updateProfileForContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *profileId, char *api_version, char *x_api_version, contact_profile_update_dto_t *contact_profile_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**profileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_profile_update_dto** | **[contact_profile_update_dto_t](contact_profile_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_upsertTenantOntoAnotherTenantContactListAsync**
```c
// Upsert a tenant onto another tenant's contact list
//
// Upsert a tenant onto another tenant's contact list
//
contact_dto_envelope_t* ContactsAPI_upsertTenantOntoAnotherTenantContactListAsync(apiClient_t *apiClient, char *tenantId, char *relatedTenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**relatedTenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_envelope_t](contact_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_upsertUserOntoAnotherTenantContactListAsync**
```c
// Upsert a user onto a tenant's contact list
//
// Upsert a user onto a tenant's contact list
//
contact_dto_envelope_t* ContactsAPI_upsertUserOntoAnotherTenantContactListAsync(apiClient_t *apiClient, char *tenantId, char *relatedUserId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**relatedUserId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_dto_envelope_t](contact_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_verifyContactEmailAsync**
```c
// Verify a contact email address
//
// Marks an email address as verified on the specified contact.
//
void ContactsAPI_verifyContactEmailAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *emailId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**emailId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

