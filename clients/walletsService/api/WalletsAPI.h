#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/bank_account_create_dto.h"
#include "../model/bank_account_dto_envelope.h"
#include "../model/bank_account_dto_list_envelope.h"
#include "../model/bank_account_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_order_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/invoice_dto_list_envelope.h"
#include "../model/location_create_dto.h"
#include "../model/location_dto_envelope.h"
#include "../model/location_dto_list_envelope.h"
#include "../model/location_update_dto.h"
#include "../model/operation.h"
#include "../model/order_dto_list_envelope.h"
#include "../model/payment_chargeback_dto_list_envelope.h"
#include "../model/payment_create_dto.h"
#include "../model/payment_dto_list_envelope.h"
#include "../model/payment_refund_dto_list_envelope.h"
#include "../model/payment_token_create_dto.h"
#include "../model/payment_token_dto_envelope.h"
#include "../model/payment_token_dto_list_envelope.h"
#include "../model/payment_token_update_dto.h"
#include "../model/quote_dto_list_envelope.h"
#include "../model/wallet_dto_envelope.h"
#include "../model/wallet_withdraw_dto_list_envelope.h"
#include "../model/wallet_withdraw_request_create_dto.h"
#include "../model/wallet_withdraw_request_dto_list_envelope.h"


// Create Wallet Location
//
// Create a new location for a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_createLocationForWalletAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, location_create_dto_t *location_create_dto);


// Create Wallet Bank Account
//
// Create a new bank account for a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_createWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, bank_account_create_dto_t *bank_account_create_dto);


// Create Wallet Payment
//
// Create a new payment for a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_createWalletPaymentAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, payment_create_dto_t *payment_create_dto);


// Create Wallet Token
//
// Create a new payment token for a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_createWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, payment_token_create_dto_t *payment_token_create_dto);


// Create Wallet Withdraw Request
//
// Create a new withdraw request for a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_createWalletWithdrawRequestAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version, wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto);


// Delete Wallet Location
//
// Delete a specific location of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_deleteLocationForWalletAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version);


// Delete Wallet Bank Account
//
// Delete a specific bank account of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_deleteWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *bankAccountId, char *api_version, char *x_api_version);


// Delete Wallet Token
//
// Delete a specific payment token of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_deleteWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *tokenId, char *api_version, char *x_api_version);


// Get Incoming Payments
//
// Get incoming payments of a specific wallet by ID.
//
payment_dto_list_envelope_t*
WalletsAPI_getIncomingPaymentsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Incoming Payments Count
//
// Get incoming payments count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getIncomingPaymentsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Incoming Wallet Invoices
//
// Get incoming invoices of a specific wallet by ID.
//
invoice_dto_list_envelope_t*
WalletsAPI_getIncomingWalletInvoicesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Incoming Wallet Invoices Count
//
// Get incoming invoices count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getIncomingWalletInvoicesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Location
//
// Get a specific location of a specific wallet by ID.
//
location_dto_envelope_t*
WalletsAPI_getLocationForWalletAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version);


// Get Wallet Locations
//
// Get locations of a specific wallet by ID.
//
location_dto_list_envelope_t*
WalletsAPI_getLocationsForWalletAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Locations Count
//
// Get locations count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getLocationsForWalletCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Outgoing Payments
//
// Get outgoing payments of a specific wallet by ID.
//
payment_dto_list_envelope_t*
WalletsAPI_getOutgoingPaymentsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Outgoing Payments Count
//
// Get outgoing payments count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getOutgoingPaymentsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Outgoing Wallet Invoices
//
// Get outgoing invoices of a specific wallet by ID.
//
invoice_dto_list_envelope_t*
WalletsAPI_getOutgoingWalletInvoicesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Outgoing Wallet Invoices Count
//
// Get outgoing invoices count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getOutgoingWalletInvoicesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Bank Account
//
// Get a specific bank account of a specific wallet by ID.
//
bank_account_dto_envelope_t*
WalletsAPI_getWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *bankAccountId, char *api_version, char *x_api_version);


// Get Wallet Bank Accounts
//
// Get bank accounts of a specific wallet by ID.
//
bank_account_dto_list_envelope_t*
WalletsAPI_getWalletBankAccountsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Bank Accounts Count
//
// Get bank accounts count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletBankAccountsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Chargebacks
//
// Get chargebacks of a specific wallet by ID.
//
payment_chargeback_dto_list_envelope_t*
WalletsAPI_getWalletChargebacksAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Chargebacks Count
//
// Get chargebacks count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletChargebacksCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Details
//
// Get details of a specific wallet by ID.
//
wallet_dto_envelope_t*
WalletsAPI_getWalletDetailsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Extended Orders
//
// Get extended orders of a specific wallet by ID.
//
extended_order_dto_list_envelope_t*
WalletsAPI_getWalletExtendedOrdersAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Invoices
//
// Get invoices of a specific wallet by ID.
//
invoice_dto_list_envelope_t*
WalletsAPI_getWalletInvoicesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Invoices Count
//
// Get invoices count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletInvoicesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Orders
//
// Get orders of a specific wallet by ID.
//
order_dto_list_envelope_t*
WalletsAPI_getWalletOrdersAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Orders Count
//
// Get orders count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletOrdersCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Payments
//
// Get payments of a specific wallet by ID.
//
payment_dto_list_envelope_t*
WalletsAPI_getWalletPaymentsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Payments Count
//
// Get payments count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletPaymentsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Quotes
//
// Get quotes of a specific wallet by ID.
//
quote_dto_list_envelope_t*
WalletsAPI_getWalletQuotesAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Quotes Count
//
// Get quotes count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletQuotesCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Refunds
//
// Get refunds of a specific wallet by ID.
//
payment_refund_dto_list_envelope_t*
WalletsAPI_getWalletRefundsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Refunds Count
//
// Get refunds count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletRefundsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Token
//
// Get a specific payment token of a specific wallet by ID.
//
payment_token_dto_envelope_t*
WalletsAPI_getWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *tokenId, char *api_version, char *x_api_version);


// Get Wallet Tokens
//
// Get payment tokens of a specific wallet by ID.
//
payment_token_dto_list_envelope_t*
WalletsAPI_getWalletTokensAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Tokens Count
//
// Get payment tokens count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletTokensCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Withdraw Requests
//
// Get withdraw requests of a specific wallet by ID.
//
wallet_withdraw_request_dto_list_envelope_t*
WalletsAPI_getWalletWithdrawRequestsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Withdraw Requests Count
//
// Get withdraw requests count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletWithdrawRequestsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Withdraws
//
// Get withdraws of a specific wallet by ID.
//
wallet_withdraw_dto_list_envelope_t*
WalletsAPI_getWalletWithdrawsAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Get Wallet Withdraws Count
//
// Get withdraws count of a specific wallet by ID.
//
int32_envelope_t*
WalletsAPI_getWalletWithdrawsCountAsync(apiClient_t *apiClient, char *walletId, char *api_version, char *x_api_version);


// Patch Wallet Bank Account
//
// Partially update a specific bank account of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_patchWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *bankAccountId, char *api_version, char *x_api_version, list_t *operation);


// Patch Wallet Token
//
// Partially update a specific payment token of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_patchWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *tokenId, char *api_version, char *x_api_version, list_t *operation);


// Update Wallet Location
//
// Update a specific location of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_updateLocationForWalletAsync(apiClient_t *apiClient, char *walletId, char *locationId, char *api_version, char *x_api_version, location_update_dto_t *location_update_dto);


// Update Wallet Bank Account
//
// Update a specific bank account of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_updateWalletBankAccountAsync(apiClient_t *apiClient, char *walletId, char *bankAccountId, char *api_version, char *x_api_version, bank_account_update_dto_t *bank_account_update_dto);


// Update Wallet Token
//
// Update a specific payment token of a specific wallet by ID.
//
empty_envelope_t*
WalletsAPI_updateWalletTokenAsync(apiClient_t *apiClient, char *walletId, char *tokenId, char *api_version, char *x_api_version, payment_token_update_dto_t *payment_token_update_dto);


