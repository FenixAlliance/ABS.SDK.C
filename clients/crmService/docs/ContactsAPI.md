# ContactsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContactsAPI_createContactAsync**](ContactsAPI.md#ContactsAPI_createContactAsync) | **POST** /api/v2/CrmService/Contacts | Create a new contact
[**ContactsAPI_deleteContactAsync**](ContactsAPI.md#ContactsAPI_deleteContactAsync) | **DELETE** /api/v2/CrmService/Contacts/{contactId} | Delete a contact
[**ContactsAPI_getBusinessOwnedIndividualAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedIndividualAsync) | **GET** /api/v2/CrmService/Contacts/Individuals/{contactId} | Get a Contact of type Individual by ID
[**ContactsAPI_getBusinessOwnedIndividualsAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedIndividualsAsync) | **GET** /api/v2/CrmService/Contacts/Individuals | Get all contacts of type individual
[**ContactsAPI_getBusinessOwnedIndividualsCountAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedIndividualsCountAsync) | **GET** /api/v2/CrmService/Contacts/Individuals/Count | Get all contacts of type individual count
[**ContactsAPI_getBusinessOwnedOrganizationAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedOrganizationAsync) | **GET** /api/v2/CrmService/Contacts/Organizations/{contactId} | Get a Contact of type Organization by ID
[**ContactsAPI_getBusinessOwnedOrganizationsAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedOrganizationsAsync) | **GET** /api/v2/CrmService/Contacts/Organizations | Get all contacts of type organization
[**ContactsAPI_getBusinessOwnedOrganizationsCountAsync**](ContactsAPI.md#ContactsAPI_getBusinessOwnedOrganizationsCountAsync) | **GET** /api/v2/CrmService/Contacts/Organizations/Count | Get all contacts of type organization count
[**ContactsAPI_getContactAsync**](ContactsAPI.md#ContactsAPI_getContactAsync) | **GET** /api/v2/CrmService/Contacts/{contactId} | Get a contact by ID
[**ContactsAPI_getContactAvatarAsync**](ContactsAPI.md#ContactsAPI_getContactAvatarAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Avatar | Get a contact&#39;s avatar
[**ContactsAPI_getContactCartAsync**](ContactsAPI.md#ContactsAPI_getContactCartAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Cart | Get a contact&#39;s cart
[**ContactsAPI_getContactProfilesAsync**](ContactsAPI.md#ContactsAPI_getContactProfilesAsync) | **GET** /api/v2/CrmService/Contacts/{contactId}/Profiles | Get a contact&#39;s social profiles
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
[**ContactsAPI_patchContactAsync**](ContactsAPI.md#ContactsAPI_patchContactAsync) | **PATCH** /api/v2/CrmService/Contacts/{contactId} | Patch a contact
[**ContactsAPI_previewContactEmailTemplate**](ContactsAPI.md#ContactsAPI_previewContactEmailTemplate) | **POST** /api/v2/CrmService/Contacts/{contactId}/Emails/Preview | Preview the rendered email for a contact.
[**ContactsAPI_sendContactEmail**](ContactsAPI.md#ContactsAPI_sendContactEmail) | **POST** /api/v2/CrmService/Contacts/{contactId}/Emails/Send | Send an email to a contact.
[**ContactsAPI_updateContactAsync**](ContactsAPI.md#ContactsAPI_updateContactAsync) | **PUT** /api/v2/CrmService/Contacts/{contactId} | Update a contact
[**ContactsAPI_updateContactAvatarAsync**](ContactsAPI.md#ContactsAPI_updateContactAvatarAsync) | **POST** /api/v2/CrmService/Contacts/{contactId}/Avatar | Update a contact&#39;s avatar
[**ContactsAPI_upsertTenantOntoAnotherTenantContactListAsync**](ContactsAPI.md#ContactsAPI_upsertTenantOntoAnotherTenantContactListAsync) | **POST** /api/v2/CrmService/Contacts/Organizations/Upsert | Upsert a tenant onto another tenant&#39;s contact list
[**ContactsAPI_upsertUserOntoAnotherTenantContactListAsync**](ContactsAPI.md#ContactsAPI_upsertUserOntoAnotherTenantContactListAsync) | **POST** /api/v2/CrmService/Contacts/Individuals/Upsert | Upsert a user onto a tenant&#39;s contact list


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
contact_dto_list_envelope_t* ContactsAPI_getBusinessOwnedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **ContactsAPI_getBusinessOwnedIndividualsCountAsync**
```c
// Get all contacts of type individual count
//
// Get all contacts of type individual count
//
contact_dto_list_envelope_t* ContactsAPI_getBusinessOwnedIndividualsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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
list_t* ContactsAPI_getBusinessOwnedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](contact_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getBusinessOwnedOrganizationsCountAsync**
```c
// Get all contacts of type organization count
//
// Get all contacts of type organization count
//
contact_dto_list_envelope_t* ContactsAPI_getBusinessOwnedOrganizationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **ContactsAPI_getContactProfilesAsync**
```c
// Get a contact's social profiles
//
// Get a contact's social profiles
//
contact_profile_dto_list_envelope_t* ContactsAPI_getContactProfilesAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);
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
contact_dto_list_envelope_t* ContactsAPI_getContactsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **ContactsAPI_getContactsCountAsync**
```c
// Get all business owned contacts count
//
// Get all business owned contacts count
//
contact_dto_list_envelope_t* ContactsAPI_getContactsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **ContactsAPI_getExtendedBusinessOwnedIndividualsAsync**
```c
// Get all contacts of type individual
//
// Get all contacts of type individual
//
extended_contact_dto_list_envelope_t* ContactsAPI_getExtendedBusinessOwnedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_contact_dto_list_envelope_t](extended_contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactsAPI_getExtendedBusinessOwnedOrganizationsAsync**
```c
// Get all contacts of type organization
//
// Get all contacts of type organization
//
extended_contact_dto_list_envelope_t* ContactsAPI_getExtendedBusinessOwnedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_contact_dto_list_envelope_t](extended_contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
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
extended_contact_dto_list_envelope_t* ContactsAPI_getExtendedContactsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[extended_contact_dto_list_envelope_t](extended_contact_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
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

# **ContactsAPI_patchContactAsync**
```c
// Patch a contact
//
// Patch a contact
//
empty_envelope_t* ContactsAPI_patchContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


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

