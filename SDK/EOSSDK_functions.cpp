// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EOSSDK_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EOSSDK.EOSUserComponent.Server_ReceiveConnectInfo
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// struct FString                 InToken                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InID                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UEOSUserComponent::Server_ReceiveConnectInfo(const struct FString& InToken, const struct FString& InID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EOSSDK.EOSUserComponent.Server_ReceiveConnectInfo"));

	struct
	{
		struct FString                 InToken;
		struct FString                 InID;
	} params = {};

	params.InToken = InToken;
	params.InID = InID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EOSSDK.EOSUserComponent.Server_ReceiveAntiCheatData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer)
// Parameters:
// TArray<unsigned char>          InByteArray                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UEOSUserComponent::Server_ReceiveAntiCheatData(TArray<unsigned char> InByteArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EOSSDK.EOSUserComponent.Server_ReceiveAntiCheatData"));

	struct
	{
		TArray<unsigned char>          InByteArray;
	} params = {};

	params.InByteArray = InByteArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EOSSDK.EOSUserComponent.Client_RequestConnectInfo
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void UEOSUserComponent::Client_RequestConnectInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EOSSDK.EOSUserComponent.Client_RequestConnectInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EOSSDK.EOSUserComponent.Client_ReceiveAntiCheatData
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TArray<unsigned char>          InByteArray                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UEOSUserComponent::Client_ReceiveAntiCheatData(TArray<unsigned char> InByteArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EOSSDK.EOSUserComponent.Client_ReceiveAntiCheatData"));

	struct
	{
		TArray<unsigned char>          InByteArray;
	} params = {};

	params.InByteArray = InByteArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
