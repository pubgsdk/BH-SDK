#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SharkPaymentSDK.EShPaymentResult
enum class EShPaymentResult : uint8_t
{
	NOT_SUPPORTED                  = 0,
	GENERAL_ERROR                  = 1,
	OK                             = 2,
	Cancel                         = 3,
	LOGIN_EXPIRED                  = 4,
	DISCONNECTED                   = 5,
	CONNECTION_ERROR               = 6,
	ABORTED_DUE_TO_FRAUD           = 7,
	PAYMENT_SYSTEM_FAILED          = 8,
	THIRDPARTY_NOT_ENABLED         = 9,
	EShPaymentResult_MAX           = 10
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
