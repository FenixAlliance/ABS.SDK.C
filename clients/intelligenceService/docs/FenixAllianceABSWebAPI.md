# FenixAllianceABSWebAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FenixAllianceABSWebAPI_accountLogoutPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_accountLogoutPost) | **POST** /Account/Logout | 
[**FenixAllianceABSWebAPI_accountManageDownloadPersonalDataPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_accountManageDownloadPersonalDataPost) | **POST** /Account/Manage/DownloadPersonalData | 
[**FenixAllianceABSWebAPI_accountManageLinkExternalLoginPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_accountManageLinkExternalLoginPost) | **POST** /Account/Manage/LinkExternalLogin | 
[**FenixAllianceABSWebAPI_accountPerformExternalLoginPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_accountPerformExternalLoginPost) | **POST** /Account/PerformExternalLogin | 
[**FenixAllianceABSWebAPI_forgotPasswordPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_forgotPasswordPost) | **POST** /forgotPassword | 
[**FenixAllianceABSWebAPI_healthGet**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_healthGet) | **GET** /health | 
[**FenixAllianceABSWebAPI_helloGet**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_helloGet) | **GET** /hello | 
[**FenixAllianceABSWebAPI_loginPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_loginPost) | **POST** /login | 
[**FenixAllianceABSWebAPI_manage2faPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_manage2faPost) | **POST** /manage/2fa | 
[**FenixAllianceABSWebAPI_manageInfoGet**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_manageInfoGet) | **GET** /manage/info | 
[**FenixAllianceABSWebAPI_manageInfoPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_manageInfoPost) | **POST** /manage/info | 
[**FenixAllianceABSWebAPI_mapIdentityApiConfirmEmail**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_mapIdentityApiConfirmEmail) | **GET** /confirmEmail | 
[**FenixAllianceABSWebAPI_refreshPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_refreshPost) | **POST** /refresh | 
[**FenixAllianceABSWebAPI_registerPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_registerPost) | **POST** /register | 
[**FenixAllianceABSWebAPI_resendConfirmationEmailPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_resendConfirmationEmailPost) | **POST** /resendConfirmationEmail | 
[**FenixAllianceABSWebAPI_resetPasswordPost**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_resetPasswordPost) | **POST** /resetPassword | 
[**FenixAllianceABSWebAPI_versionGet**](FenixAllianceABSWebAPI.md#FenixAllianceABSWebAPI_versionGet) | **GET** /version | 


# **FenixAllianceABSWebAPI_accountLogoutPost**
```c
void FenixAllianceABSWebAPI_accountLogoutPost(apiClient_t *apiClient, char *returnUrl);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**returnUrl** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/x-www-form-urlencoded
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_accountManageDownloadPersonalDataPost**
```c
void FenixAllianceABSWebAPI_accountManageDownloadPersonalDataPost(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_accountManageLinkExternalLoginPost**
```c
void FenixAllianceABSWebAPI_accountManageLinkExternalLoginPost(apiClient_t *apiClient, char *provider);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**provider** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/x-www-form-urlencoded
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_accountPerformExternalLoginPost**
```c
void FenixAllianceABSWebAPI_accountPerformExternalLoginPost(apiClient_t *apiClient, char *provider, char *returnUrl);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**provider** | **char \*** |  | [optional] 
**returnUrl** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/x-www-form-urlencoded
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_forgotPasswordPost**
```c
void FenixAllianceABSWebAPI_forgotPasswordPost(apiClient_t *apiClient, forgot_password_request_t *forgot_password_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**forgot_password_request** | **[forgot_password_request_t](forgot_password_request.md) \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_healthGet**
```c
void FenixAllianceABSWebAPI_healthGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_helloGet**
```c
void FenixAllianceABSWebAPI_helloGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_loginPost**
```c
access_token_response_t* FenixAllianceABSWebAPI_loginPost(apiClient_t *apiClient, login_request_t *login_request, int *useCookies, int *useSessionCookies);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**login_request** | **[login_request_t](login_request.md) \*** |  | 
**useCookies** | **int \*** |  | [optional] 
**useSessionCookies** | **int \*** |  | [optional] 

### Return type

[access_token_response_t](access_token_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_manage2faPost**
```c
two_factor_response_t* FenixAllianceABSWebAPI_manage2faPost(apiClient_t *apiClient, two_factor_request_t *two_factor_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**two_factor_request** | **[two_factor_request_t](two_factor_request.md) \*** |  | 

### Return type

[two_factor_response_t](two_factor_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_manageInfoGet**
```c
info_response_t* FenixAllianceABSWebAPI_manageInfoGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[info_response_t](info_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_manageInfoPost**
```c
info_response_t* FenixAllianceABSWebAPI_manageInfoPost(apiClient_t *apiClient, info_request_t *info_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**info_request** | **[info_request_t](info_request.md) \*** |  | 

### Return type

[info_response_t](info_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_mapIdentityApiConfirmEmail**
```c
void FenixAllianceABSWebAPI_mapIdentityApiConfirmEmail(apiClient_t *apiClient, char *userId, char *code, char *changedEmail);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**code** | **char \*** |  | 
**changedEmail** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_refreshPost**
```c
access_token_response_t* FenixAllianceABSWebAPI_refreshPost(apiClient_t *apiClient, refresh_request_t *refresh_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**refresh_request** | **[refresh_request_t](refresh_request.md) \*** |  | 

### Return type

[access_token_response_t](access_token_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_registerPost**
```c
void FenixAllianceABSWebAPI_registerPost(apiClient_t *apiClient, register_request_t *register_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**register_request** | **[register_request_t](register_request.md) \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_resendConfirmationEmailPost**
```c
void FenixAllianceABSWebAPI_resendConfirmationEmailPost(apiClient_t *apiClient, resend_confirmation_email_request_t *resend_confirmation_email_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**resend_confirmation_email_request** | **[resend_confirmation_email_request_t](resend_confirmation_email_request.md) \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_resetPasswordPost**
```c
void FenixAllianceABSWebAPI_resetPasswordPost(apiClient_t *apiClient, reset_password_request_t *reset_password_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**reset_password_request** | **[reset_password_request_t](reset_password_request.md) \*** |  | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FenixAllianceABSWebAPI_versionGet**
```c
void FenixAllianceABSWebAPI_versionGet(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

