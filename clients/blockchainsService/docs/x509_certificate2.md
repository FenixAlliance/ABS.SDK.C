# x509_certificate2_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**handle** | [**object_t**](.md) \* |  | [optional] 
**issuer** | **char \*** |  | [optional] [readonly] 
**subject** | **char \*** |  | [optional] [readonly] 
**serial_number_bytes** | [**byte_read_only_memory_t**](byte_read_only_memory.md) \* |  | [optional] 
**archived** | **int** |  | [optional] 
**extensions** | [**list_t**](x509_extension.md) \* |  | [optional] [readonly] 
**friendly_name** | **char \*** |  | [optional] 
**has_private_key** | **int** |  | [optional] [readonly] 
**private_key** | [**asymmetric_algorithm_t**](asymmetric_algorithm.md) \* |  | [optional] 
**issuer_name** | [**x500_distinguished_name_t**](x500_distinguished_name.md) \* |  | [optional] 
**not_after** | **char \*** |  | [optional] [readonly] 
**not_before** | **char \*** |  | [optional] [readonly] 
**public_key** | [**public_key_t**](public_key.md) \* |  | [optional] 
**raw_data** | **char \*** |  | [optional] [readonly] 
**raw_data_memory** | [**byte_read_only_memory_t**](byte_read_only_memory.md) \* |  | [optional] 
**serial_number** | **char \*** |  | [optional] [readonly] 
**signature_algorithm** | [**oid_t**](oid.md) \* |  | [optional] 
**subject_name** | [**x500_distinguished_name_t**](x500_distinguished_name.md) \* |  | [optional] 
**thumbprint** | **char \*** |  | [optional] [readonly] 
**version** | **int** |  | [optional] [readonly] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


