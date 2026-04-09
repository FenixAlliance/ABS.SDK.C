# FenixAllianceABPWebAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FenixAllianceABPWebAPI_forgotPasswordPost**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_forgotPasswordPost) | **POST** /forgotPassword | 
[**FenixAllianceABPWebAPI_healthGet**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_healthGet) | **GET** /health | 
[**FenixAllianceABPWebAPI_helloGet**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_helloGet) | **GET** /hello | 
[**FenixAllianceABPWebAPI_loginPost**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_loginPost) | **POST** /login | 
[**FenixAllianceABPWebAPI_manage2faPost**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_manage2faPost) | **POST** /manage/2fa | 
[**FenixAllianceABPWebAPI_manageInfoGet**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_manageInfoGet) | **GET** /manage/info | 
[**FenixAllianceABPWebAPI_manageInfoPost**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_manageInfoPost) | **POST** /manage/info | 
[**FenixAllianceABPWebAPI_mapIdentityApiConfirmEmail**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_mapIdentityApiConfirmEmail) | **GET** /confirmEmail | 
[**FenixAllianceABPWebAPI_refreshPost**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_refreshPost) | **POST** /refresh | 
[**FenixAllianceABPWebAPI_registerPost**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_registerPost) | **POST** /register | 
[**FenixAllianceABPWebAPI_resendConfirmationEmailPost**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_resendConfirmationEmailPost) | **POST** /resendConfirmationEmail | 
[**FenixAllianceABPWebAPI_resetPasswordPost**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_resetPasswordPost) | **POST** /resetPassword | 
[**FenixAllianceABPWebAPI_versionGet**](FenixAllianceABPWebAPI.md#FenixAllianceABPWebAPI_versionGet) | **GET** /version | 


# **FenixAllianceABPWebAPI_forgotPasswordPost**
```c
void FenixAllianceABPWebAPI_forgotPasswordPost(apiClient_t *apiClient, forgot_password_request_t *forgot_password_request);
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

# **FenixAllianceABPWebAPI_healthGet**
```c
void FenixAllianceABPWebAPI_healthGet(apiClient_t *apiClient);
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

# **FenixAllianceABPWebAPI_helloGet**
```c
void FenixAllianceABPWebAPI_helloGet(apiClient_t *apiClient);
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

# **FenixAllianceABPWebAPI_loginPost**
```c
access_token_response_t* FenixAllianceABPWebAPI_loginPost(apiClient_t *apiClient, login_request_t *login_request, int *useCookies, int *useSessionCookies);
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

# **FenixAllianceABPWebAPI_manage2faPost**
```c
two_factor_response_t* FenixAllianceABPWebAPI_manage2faPost(apiClient_t *apiClient, two_factor_request_t *two_factor_request);
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

# **FenixAllianceABPWebAPI_manageInfoGet**
```c
info_response_t* FenixAllianceABPWebAPI_manageInfoGet(apiClient_t *apiClient);
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

# **FenixAllianceABPWebAPI_manageInfoPost**
```c
info_response_t* FenixAllianceABPWebAPI_manageInfoPost(apiClient_t *apiClient, info_request_t *info_request);
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

# **FenixAllianceABPWebAPI_mapIdentityApiConfirmEmail**
```c
void FenixAllianceABPWebAPI_mapIdentityApiConfirmEmail(apiClient_t *apiClient, char *userId, char *code, char *changedEmail);
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

# **FenixAllianceABPWebAPI_refreshPost**
```c
access_token_response_t* FenixAllianceABPWebAPI_refreshPost(apiClient_t *apiClient, refresh_request_t *refresh_request);
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

# **FenixAllianceABPWebAPI_registerPost**
```c
void FenixAllianceABPWebAPI_registerPost(apiClient_t *apiClient, register_request_t *register_request);
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

# **FenixAllianceABPWebAPI_resendConfirmationEmailPost**
```c
void FenixAllianceABPWebAPI_resendConfirmationEmailPost(apiClient_t *apiClient, resend_confirmation_email_request_t *resend_confirmation_email_request);
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

# **FenixAllianceABPWebAPI_resetPasswordPost**
```c
void FenixAllianceABPWebAPI_resetPasswordPost(apiClient_t *apiClient, reset_password_request_t *reset_password_request);
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

# **FenixAllianceABPWebAPI_versionGet**
```c
void FenixAllianceABPWebAPI_versionGet(apiClient_t *apiClient);
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

