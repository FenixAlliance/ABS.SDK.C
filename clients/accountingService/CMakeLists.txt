cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "accountingservice")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    else(CURL_FOUND)
        message(FATAL_ERROR "Could not find the CURL library and development files.")
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/access_token_response.c
    model/account_create_dto.c
    model/account_dto.c
    model/account_dto_envelope.c
    model/account_dto_list_envelope.c
    model/account_group_create_dto.c
    model/account_group_dto.c
    model/account_group_dto_envelope.c
    model/account_group_dto_list_envelope.c
    model/account_group_update_dto.c
    model/account_relation_create_dto.c
    model/account_relation_dto.c
    model/account_relation_dto_list_envelope.c
    model/account_relation_update_dto.c
    model/account_type_create_dto.c
    model/account_type_dto.c
    model/account_type_dto_list_envelope.c
    model/account_type_update_dto.c
    model/account_update_dto.c
    model/accounting_entry_create_dto.c
    model/accounting_entry_dto.c
    model/accounting_entry_dto_envelope.c
    model/accounting_entry_dto_list_envelope.c
    model/accounting_entry_update_dto.c
    model/accounting_period_create_dto.c
    model/accounting_period_dto.c
    model/accounting_period_dto_envelope.c
    model/accounting_period_dto_list_envelope.c
    model/accounting_period_update_dto.c
    model/applied_tax_policy_record_create_dto.c
    model/applied_tax_policy_record_dto.c
    model/applied_tax_policy_record_dto_envelope.c
    model/applied_tax_policy_record_dto_list_envelope.c
    model/applied_tax_policy_record_update_dto.c
    model/bank_account_create_dto.c
    model/bank_account_dto.c
    model/bank_account_dto_envelope.c
    model/bank_account_dto_list_envelope.c
    model/bank_account_update_dto.c
    model/bank_create_dto.c
    model/bank_dto.c
    model/bank_dto_envelope.c
    model/bank_dto_list_envelope.c
    model/bank_guarantee_create_dto.c
    model/bank_guarantee_dto.c
    model/bank_guarantee_dto_envelope.c
    model/bank_guarantee_dto_list_envelope.c
    model/bank_guarantee_update_dto.c
    model/bank_transaction_create_dto.c
    model/bank_transaction_dto.c
    model/bank_transaction_dto_envelope.c
    model/bank_transaction_dto_list_envelope.c
    model/bank_transaction_update_dto.c
    model/bank_update_dto.c
    model/billing_profile_create_dto.c
    model/billing_profile_dto.c
    model/billing_profile_dto_envelope.c
    model/billing_profile_dto_i_read_only_list_envelope.c
    model/billing_profile_update_dto.c
    model/budget_account_entry_create_dto.c
    model/budget_account_entry_dto.c
    model/budget_account_entry_dto_envelope.c
    model/budget_account_entry_dto_i_read_only_list_envelope.c
    model/budget_account_entry_update_dto.c
    model/budget_create_dto.c
    model/budget_dto.c
    model/budget_dto_envelope.c
    model/budget_dto_i_read_only_list_envelope.c
    model/budget_update_dto.c
    model/commission_create_dto.c
    model/commission_dto.c
    model/commission_dto_envelope.c
    model/commission_dto_list_envelope.c
    model/commission_update_dto.c
    model/cost_centre_budget_create_dto.c
    model/cost_centre_budget_dto.c
    model/cost_centre_budget_dto_envelope.c
    model/cost_centre_budget_dto_list_envelope.c
    model/cost_centre_budget_update_dto.c
    model/cost_centre_create_dto.c
    model/cost_centre_dto.c
    model/cost_centre_dto_envelope.c
    model/cost_centre_dto_list_envelope.c
    model/cost_centre_group_create_dto.c
    model/cost_centre_group_dto.c
    model/cost_centre_group_dto_envelope.c
    model/cost_centre_group_dto_list_envelope.c
    model/cost_centre_group_update_dto.c
    model/cost_centre_update_dto.c
    model/create_ledger_dto.c
    model/currency_id.c
    model/empty_envelope.c
    model/error_envelope.c
    model/financial_book_create_dto.c
    model/financial_book_dto.c
    model/financial_book_dto_envelope.c
    model/financial_book_dto_list_envelope.c
    model/financial_book_update_dto.c
    model/fiscal_authority_create_dto.c
    model/fiscal_authority_dto.c
    model/fiscal_authority_dto_envelope.c
    model/fiscal_authority_dto_list_envelope.c
    model/fiscal_authority_update_dto.c
    model/fiscal_identification_type_create_dto.c
    model/fiscal_identification_type_dto.c
    model/fiscal_identification_type_dto_envelope.c
    model/fiscal_identification_type_dto_list_envelope.c
    model/fiscal_identification_type_update_dto.c
    model/fiscal_period_create_dto.c
    model/fiscal_period_dto.c
    model/fiscal_period_dto_envelope.c
    model/fiscal_period_dto_list_envelope.c
    model/fiscal_period_update_dto.c
    model/fiscal_regime_create_dto.c
    model/fiscal_regime_dto.c
    model/fiscal_regime_dto_envelope.c
    model/fiscal_regime_dto_list_envelope.c
    model/fiscal_regime_update_dto.c
    model/fiscal_responsibility_create_dto.c
    model/fiscal_responsibility_dto.c
    model/fiscal_responsibility_dto_envelope.c
    model/fiscal_responsibility_dto_list_envelope.c
    model/fiscal_responsibility_record_create_dto.c
    model/fiscal_responsibility_record_dto.c
    model/fiscal_responsibility_record_dto_envelope.c
    model/fiscal_responsibility_record_dto_list_envelope.c
    model/fiscal_responsibility_record_update_dto.c
    model/fiscal_responsibility_update_dto.c
    model/fiscal_year_create_dto.c
    model/fiscal_year_dto.c
    model/fiscal_year_dto_envelope.c
    model/fiscal_year_dto_i_read_only_list_envelope.c
    model/fiscal_year_dto_list_envelope.c
    model/fiscal_year_update_dto.c
    model/forgot_password_request.c
    model/grant_create_dto.c
    model/grant_dto.c
    model/grant_dto_envelope.c
    model/grant_dto_i_read_only_list_envelope.c
    model/http_validation_problem_details.c
    model/info_request.c
    model/info_response.c
    model/int32_envelope.c
    model/invoice_enumeration_range_create_dto.c
    model/invoice_enumeration_range_dto.c
    model/invoice_enumeration_range_dto_envelope.c
    model/invoice_enumeration_range_dto_list_envelope.c
    model/invoice_enumeration_range_update_dto.c
    model/item_tax_policy_record_create_dto.c
    model/item_tax_policy_record_dto.c
    model/item_tax_policy_record_dto_envelope.c
    model/item_tax_policy_record_dto_list_envelope.c
    model/item_tax_policy_record_update_dto.c
    model/journal_create_dto.c
    model/journal_dto.c
    model/journal_dto_envelope.c
    model/journal_dto_i_read_only_list_envelope.c
    model/journal_entry_create_dto.c
    model/journal_entry_dto.c
    model/journal_entry_dto_i_read_only_list_envelope.c
    model/journal_entry_update_dto.c
    model/journal_type_create_dto.c
    model/journal_type_dto.c
    model/journal_type_dto_envelope.c
    model/journal_type_dto_i_read_only_list_envelope.c
    model/journal_type_update_dto.c
    model/journal_update_dto.c
    model/ledger_dto.c
    model/ledger_dto_envelope.c
    model/ledger_dto_i_read_only_list_envelope.c
    model/ledger_type_create_dto.c
    model/ledger_type_dto.c
    model/ledger_type_dto_envelope.c
    model/ledger_type_dto_i_read_only_list_envelope.c
    model/ledger_type_update_dto.c
    model/loan_application_create_dto.c
    model/loan_application_dto.c
    model/loan_application_dto_envelope.c
    model/loan_application_dto_i_read_only_list_envelope.c
    model/loan_create_dto.c
    model/loan_dto.c
    model/loan_dto_envelope.c
    model/loan_dto_i_read_only_list_envelope.c
    model/loan_update_dto.c
    model/login_request.c
    model/money.c
    model/operation.c
    model/payment_commission_create_dto.c
    model/payment_commission_dto.c
    model/payment_commission_dto_envelope.c
    model/payment_commission_dto_list_envelope.c
    model/payment_commission_update_dto.c
    model/receipt_create_dto.c
    model/receipt_dto.c
    model/receipt_dto_envelope.c
    model/receipt_dto_i_read_only_list_envelope.c
    model/receipt_update_dto.c
    model/refresh_request.c
    model/register_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/share_class_create_dto.c
    model/share_class_dto.c
    model/share_class_dto_envelope.c
    model/share_class_dto_list_envelope.c
    model/share_class_update_dto.c
    model/share_issuance_create_dto.c
    model/share_issuance_dto.c
    model/share_issuance_dto_envelope.c
    model/share_issuance_dto_list_envelope.c
    model/share_issuance_update_dto.c
    model/share_transfer_create_dto.c
    model/share_transfer_dto.c
    model/share_transfer_dto_envelope.c
    model/share_transfer_dto_list_envelope.c
    model/share_transfer_reason_create_dto.c
    model/share_transfer_reason_dto.c
    model/share_transfer_reason_dto_envelope.c
    model/share_transfer_reason_dto_list_envelope.c
    model/share_transfer_reason_update_dto.c
    model/share_transfer_update_dto.c
    model/tax_policy_create_dto.c
    model/tax_policy_dto.c
    model/tax_policy_dto_envelope.c
    model/tax_policy_dto_list_envelope.c
    model/tax_policy_update_dto.c
    model/tax_rate_create_dto.c
    model/tax_rate_dto.c
    model/tax_rate_dto_envelope.c
    model/tax_rate_dto_list_envelope.c
    model/tax_rate_update_dto.c
    model/transaction_category_create_dto.c
    model/transaction_category_dto.c
    model/transaction_category_dto_envelope.c
    model/transaction_category_dto_list_envelope.c
    model/transaction_category_update_dto.c
    model/transaction_create_dto.c
    model/transaction_dto.c
    model/transaction_dto_envelope.c
    model/transaction_dto_list_envelope.c
    model/transaction_update_dto.c
    model/two_factor_request.c
    model/two_factor_response.c
    model/update_ledger_dto.c
    api/AccountGroupsAPI.c
    api/AccountingPeriodsAPI.c
    api/AccountsAPI.c
    api/BankingAPI.c
    api/BillingProfilesAPI.c
    api/BudgetsAPI.c
    api/CommissionsAPI.c
    api/CostCentresAPI.c
    api/FenixAllianceABPWebAPI.c
    api/FinancialBooksAPI.c
    api/FiscalAuthoritiesAPI.c
    api/FiscalAuthorityYearsAPI.c
    api/FiscalEnumerationRangesAPI.c
    api/FiscalIdentificationTypesAPI.c
    api/FiscalPeriodsAPI.c
    api/FiscalRegimesAPI.c
    api/FiscalResponsibilitiesAPI.c
    api/FiscalResponsibilityRecordsAPI.c
    api/FiscalYearsAPI.c
    api/GrantsAPI.c
    api/InvoiceEnumerationRangesAPI.c
    api/JournalTypesAPI.c
    api/JournalsAPI.c
    api/LedgerTypesAPI.c
    api/LedgersAPI.c
    api/LoansAPI.c
    api/ReceiptsAPI.c
    api/SharesAPI.c
    api/TaxPoliciesAPI.c
    api/TaxRatesAPI.c
    api/TransactionsAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/account_create_dto.h
    model/account_dto.h
    model/account_dto_envelope.h
    model/account_dto_list_envelope.h
    model/account_group_create_dto.h
    model/account_group_dto.h
    model/account_group_dto_envelope.h
    model/account_group_dto_list_envelope.h
    model/account_group_update_dto.h
    model/account_relation_create_dto.h
    model/account_relation_dto.h
    model/account_relation_dto_list_envelope.h
    model/account_relation_update_dto.h
    model/account_type_create_dto.h
    model/account_type_dto.h
    model/account_type_dto_list_envelope.h
    model/account_type_update_dto.h
    model/account_update_dto.h
    model/accounting_entry_create_dto.h
    model/accounting_entry_dto.h
    model/accounting_entry_dto_envelope.h
    model/accounting_entry_dto_list_envelope.h
    model/accounting_entry_update_dto.h
    model/accounting_period_create_dto.h
    model/accounting_period_dto.h
    model/accounting_period_dto_envelope.h
    model/accounting_period_dto_list_envelope.h
    model/accounting_period_update_dto.h
    model/applied_tax_policy_record_create_dto.h
    model/applied_tax_policy_record_dto.h
    model/applied_tax_policy_record_dto_envelope.h
    model/applied_tax_policy_record_dto_list_envelope.h
    model/applied_tax_policy_record_update_dto.h
    model/bank_account_create_dto.h
    model/bank_account_dto.h
    model/bank_account_dto_envelope.h
    model/bank_account_dto_list_envelope.h
    model/bank_account_update_dto.h
    model/bank_create_dto.h
    model/bank_dto.h
    model/bank_dto_envelope.h
    model/bank_dto_list_envelope.h
    model/bank_guarantee_create_dto.h
    model/bank_guarantee_dto.h
    model/bank_guarantee_dto_envelope.h
    model/bank_guarantee_dto_list_envelope.h
    model/bank_guarantee_update_dto.h
    model/bank_transaction_create_dto.h
    model/bank_transaction_dto.h
    model/bank_transaction_dto_envelope.h
    model/bank_transaction_dto_list_envelope.h
    model/bank_transaction_update_dto.h
    model/bank_update_dto.h
    model/billing_profile_create_dto.h
    model/billing_profile_dto.h
    model/billing_profile_dto_envelope.h
    model/billing_profile_dto_i_read_only_list_envelope.h
    model/billing_profile_update_dto.h
    model/budget_account_entry_create_dto.h
    model/budget_account_entry_dto.h
    model/budget_account_entry_dto_envelope.h
    model/budget_account_entry_dto_i_read_only_list_envelope.h
    model/budget_account_entry_update_dto.h
    model/budget_create_dto.h
    model/budget_dto.h
    model/budget_dto_envelope.h
    model/budget_dto_i_read_only_list_envelope.h
    model/budget_update_dto.h
    model/commission_create_dto.h
    model/commission_dto.h
    model/commission_dto_envelope.h
    model/commission_dto_list_envelope.h
    model/commission_update_dto.h
    model/cost_centre_budget_create_dto.h
    model/cost_centre_budget_dto.h
    model/cost_centre_budget_dto_envelope.h
    model/cost_centre_budget_dto_list_envelope.h
    model/cost_centre_budget_update_dto.h
    model/cost_centre_create_dto.h
    model/cost_centre_dto.h
    model/cost_centre_dto_envelope.h
    model/cost_centre_dto_list_envelope.h
    model/cost_centre_group_create_dto.h
    model/cost_centre_group_dto.h
    model/cost_centre_group_dto_envelope.h
    model/cost_centre_group_dto_list_envelope.h
    model/cost_centre_group_update_dto.h
    model/cost_centre_update_dto.h
    model/create_ledger_dto.h
    model/currency_id.h
    model/empty_envelope.h
    model/error_envelope.h
    model/financial_book_create_dto.h
    model/financial_book_dto.h
    model/financial_book_dto_envelope.h
    model/financial_book_dto_list_envelope.h
    model/financial_book_update_dto.h
    model/fiscal_authority_create_dto.h
    model/fiscal_authority_dto.h
    model/fiscal_authority_dto_envelope.h
    model/fiscal_authority_dto_list_envelope.h
    model/fiscal_authority_update_dto.h
    model/fiscal_identification_type_create_dto.h
    model/fiscal_identification_type_dto.h
    model/fiscal_identification_type_dto_envelope.h
    model/fiscal_identification_type_dto_list_envelope.h
    model/fiscal_identification_type_update_dto.h
    model/fiscal_period_create_dto.h
    model/fiscal_period_dto.h
    model/fiscal_period_dto_envelope.h
    model/fiscal_period_dto_list_envelope.h
    model/fiscal_period_update_dto.h
    model/fiscal_regime_create_dto.h
    model/fiscal_regime_dto.h
    model/fiscal_regime_dto_envelope.h
    model/fiscal_regime_dto_list_envelope.h
    model/fiscal_regime_update_dto.h
    model/fiscal_responsibility_create_dto.h
    model/fiscal_responsibility_dto.h
    model/fiscal_responsibility_dto_envelope.h
    model/fiscal_responsibility_dto_list_envelope.h
    model/fiscal_responsibility_record_create_dto.h
    model/fiscal_responsibility_record_dto.h
    model/fiscal_responsibility_record_dto_envelope.h
    model/fiscal_responsibility_record_dto_list_envelope.h
    model/fiscal_responsibility_record_update_dto.h
    model/fiscal_responsibility_update_dto.h
    model/fiscal_year_create_dto.h
    model/fiscal_year_dto.h
    model/fiscal_year_dto_envelope.h
    model/fiscal_year_dto_i_read_only_list_envelope.h
    model/fiscal_year_dto_list_envelope.h
    model/fiscal_year_update_dto.h
    model/forgot_password_request.h
    model/grant_create_dto.h
    model/grant_dto.h
    model/grant_dto_envelope.h
    model/grant_dto_i_read_only_list_envelope.h
    model/http_validation_problem_details.h
    model/info_request.h
    model/info_response.h
    model/int32_envelope.h
    model/invoice_enumeration_range_create_dto.h
    model/invoice_enumeration_range_dto.h
    model/invoice_enumeration_range_dto_envelope.h
    model/invoice_enumeration_range_dto_list_envelope.h
    model/invoice_enumeration_range_update_dto.h
    model/item_tax_policy_record_create_dto.h
    model/item_tax_policy_record_dto.h
    model/item_tax_policy_record_dto_envelope.h
    model/item_tax_policy_record_dto_list_envelope.h
    model/item_tax_policy_record_update_dto.h
    model/journal_create_dto.h
    model/journal_dto.h
    model/journal_dto_envelope.h
    model/journal_dto_i_read_only_list_envelope.h
    model/journal_entry_create_dto.h
    model/journal_entry_dto.h
    model/journal_entry_dto_i_read_only_list_envelope.h
    model/journal_entry_update_dto.h
    model/journal_type_create_dto.h
    model/journal_type_dto.h
    model/journal_type_dto_envelope.h
    model/journal_type_dto_i_read_only_list_envelope.h
    model/journal_type_update_dto.h
    model/journal_update_dto.h
    model/ledger_dto.h
    model/ledger_dto_envelope.h
    model/ledger_dto_i_read_only_list_envelope.h
    model/ledger_type_create_dto.h
    model/ledger_type_dto.h
    model/ledger_type_dto_envelope.h
    model/ledger_type_dto_i_read_only_list_envelope.h
    model/ledger_type_update_dto.h
    model/loan_application_create_dto.h
    model/loan_application_dto.h
    model/loan_application_dto_envelope.h
    model/loan_application_dto_i_read_only_list_envelope.h
    model/loan_create_dto.h
    model/loan_dto.h
    model/loan_dto_envelope.h
    model/loan_dto_i_read_only_list_envelope.h
    model/loan_update_dto.h
    model/login_request.h
    model/money.h
    model/operation.h
    model/payment_commission_create_dto.h
    model/payment_commission_dto.h
    model/payment_commission_dto_envelope.h
    model/payment_commission_dto_list_envelope.h
    model/payment_commission_update_dto.h
    model/receipt_create_dto.h
    model/receipt_dto.h
    model/receipt_dto_envelope.h
    model/receipt_dto_i_read_only_list_envelope.h
    model/receipt_update_dto.h
    model/refresh_request.h
    model/register_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/share_class_create_dto.h
    model/share_class_dto.h
    model/share_class_dto_envelope.h
    model/share_class_dto_list_envelope.h
    model/share_class_update_dto.h
    model/share_issuance_create_dto.h
    model/share_issuance_dto.h
    model/share_issuance_dto_envelope.h
    model/share_issuance_dto_list_envelope.h
    model/share_issuance_update_dto.h
    model/share_transfer_create_dto.h
    model/share_transfer_dto.h
    model/share_transfer_dto_envelope.h
    model/share_transfer_dto_list_envelope.h
    model/share_transfer_reason_create_dto.h
    model/share_transfer_reason_dto.h
    model/share_transfer_reason_dto_envelope.h
    model/share_transfer_reason_dto_list_envelope.h
    model/share_transfer_reason_update_dto.h
    model/share_transfer_update_dto.h
    model/tax_policy_create_dto.h
    model/tax_policy_dto.h
    model/tax_policy_dto_envelope.h
    model/tax_policy_dto_list_envelope.h
    model/tax_policy_update_dto.h
    model/tax_rate_create_dto.h
    model/tax_rate_dto.h
    model/tax_rate_dto_envelope.h
    model/tax_rate_dto_list_envelope.h
    model/tax_rate_update_dto.h
    model/transaction_category_create_dto.h
    model/transaction_category_dto.h
    model/transaction_category_dto_envelope.h
    model/transaction_category_dto_list_envelope.h
    model/transaction_category_update_dto.h
    model/transaction_create_dto.h
    model/transaction_dto.h
    model/transaction_dto_envelope.h
    model/transaction_dto_list_envelope.h
    model/transaction_update_dto.h
    model/two_factor_request.h
    model/two_factor_response.h
    model/update_ledger_dto.h
    api/AccountGroupsAPI.h
    api/AccountingPeriodsAPI.h
    api/AccountsAPI.h
    api/BankingAPI.h
    api/BillingProfilesAPI.h
    api/BudgetsAPI.h
    api/CommissionsAPI.h
    api/CostCentresAPI.h
    api/FenixAllianceABPWebAPI.h
    api/FinancialBooksAPI.h
    api/FiscalAuthoritiesAPI.h
    api/FiscalAuthorityYearsAPI.h
    api/FiscalEnumerationRangesAPI.h
    api/FiscalIdentificationTypesAPI.h
    api/FiscalPeriodsAPI.h
    api/FiscalRegimesAPI.h
    api/FiscalResponsibilitiesAPI.h
    api/FiscalResponsibilityRecordsAPI.h
    api/FiscalYearsAPI.h
    api/GrantsAPI.h
    api/InvoiceEnumerationRangesAPI.h
    api/JournalTypesAPI.h
    api/JournalsAPI.h
    api/LedgerTypesAPI.h
    api/LedgersAPI.h
    api/LoansAPI.h
    api/ReceiptsAPI.h
    api/SharesAPI.h
    api/TaxPoliciesAPI.h
    api/TaxRatesAPI.h
    api/TransactionsAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-AccountGroupsAPI.c
#    unit-tests/manual-AccountingPeriodsAPI.c
#    unit-tests/manual-AccountsAPI.c
#    unit-tests/manual-BankingAPI.c
#    unit-tests/manual-BillingProfilesAPI.c
#    unit-tests/manual-BudgetsAPI.c
#    unit-tests/manual-CommissionsAPI.c
#    unit-tests/manual-CostCentresAPI.c
#    unit-tests/manual-FenixAllianceABPWebAPI.c
#    unit-tests/manual-FinancialBooksAPI.c
#    unit-tests/manual-FiscalAuthoritiesAPI.c
#    unit-tests/manual-FiscalAuthorityYearsAPI.c
#    unit-tests/manual-FiscalEnumerationRangesAPI.c
#    unit-tests/manual-FiscalIdentificationTypesAPI.c
#    unit-tests/manual-FiscalPeriodsAPI.c
#    unit-tests/manual-FiscalRegimesAPI.c
#    unit-tests/manual-FiscalResponsibilitiesAPI.c
#    unit-tests/manual-FiscalResponsibilityRecordsAPI.c
#    unit-tests/manual-FiscalYearsAPI.c
#    unit-tests/manual-GrantsAPI.c
#    unit-tests/manual-InvoiceEnumerationRangesAPI.c
#    unit-tests/manual-JournalTypesAPI.c
#    unit-tests/manual-JournalsAPI.c
#    unit-tests/manual-LedgerTypesAPI.c
#    unit-tests/manual-LedgersAPI.c
#    unit-tests/manual-LoansAPI.c
#    unit-tests/manual-ReceiptsAPI.c
#    unit-tests/manual-SharesAPI.c
#    unit-tests/manual-TaxPoliciesAPI.c
#    unit-tests/manual-TaxRatesAPI.c
#    unit-tests/manual-TransactionsAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
