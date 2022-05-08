// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Shark_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shark.SharkLoginHelperLibrary.GetErrorMessage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSharkLoginResult       InLoginResult                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString USharkLoginHelperLibrary::GetErrorMessage(const struct FSharkLoginResult& InLoginResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkLoginHelperLibrary.GetErrorMessage"));

	struct
	{
		struct FSharkLoginResult       InLoginResult;
		struct FString                 ReturnValue;
	} params = {};

	params.InLoginResult = InLoginResult;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// DelegateFunction Shark.SharkAccounts.SharkUsernameRegisteredQueryCallback__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bInSuccess                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsAvailable                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsProfanity                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InUsername                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::SharkUsernameRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, const struct FString& InUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction Shark.SharkAccounts.SharkUsernameRegisteredQueryCallback__DelegateSignature"));

	struct
	{
		bool                           bInSuccess;
		bool                           bIsAvailable;
		bool                           bIsProfanity;
		struct FString                 InUsername;
	} params = {};

	params.bInSuccess = bInSuccess;
	params.bIsAvailable = bIsAvailable;
	params.bIsProfanity = bIsProfanity;
	params.InUsername = InUsername;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction Shark.SharkAccounts.SharkLoginCallback__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FSharkLoginResult       InResult                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::SharkLoginCallback__DelegateSignature(const struct FSharkLoginResult& InResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction Shark.SharkAccounts.SharkLoginCallback__DelegateSignature"));

	struct
	{
		struct FSharkLoginResult       InResult;
	} params = {};

	params.InResult = InResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction Shark.SharkAccounts.SharkEmailRegisteredQueryCallback__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bInSuccess                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bInRegistered                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InEmail                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::SharkEmailRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bInRegistered, const struct FString& InEmail)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction Shark.SharkAccounts.SharkEmailRegisteredQueryCallback__DelegateSignature"));

	struct
	{
		bool                           bInSuccess;
		bool                           bInRegistered;
		struct FString                 InEmail;
	} params = {};

	params.bInSuccess = bInSuccess;
	params.bInRegistered = bInRegistered;
	params.InEmail = InEmail;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction Shark.SharkAccounts.SharkAccountActionCallback__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FSharkAccountActionResult InResult                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::SharkAccountActionCallback__DelegateSignature(const struct FSharkAccountActionResult& InResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction Shark.SharkAccounts.SharkAccountActionCallback__DelegateSignature"));

	struct
	{
		struct FSharkAccountActionResult InResult;
	} params = {};

	params.InResult = InResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkAccounts.SendRegistrationVerificationCode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InEmail                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         InCallback                     (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::SendRegistrationVerificationCode(const struct FString& InEmail, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkAccounts.SendRegistrationVerificationCode"));

	struct
	{
		struct FString                 InEmail;
		struct FScriptDelegate         InCallback;
	} params = {};

	params.InEmail = InEmail;
	params.InCallback = InCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkAccounts.RegisterAndLogin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSharkAccountRegistrationData InRegistrationData             (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         InCallback                     (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::RegisterAndLogin(const struct FSharkAccountRegistrationData& InRegistrationData, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkAccounts.RegisterAndLogin"));

	struct
	{
		struct FSharkAccountRegistrationData InRegistrationData;
		struct FScriptDelegate         InCallback;
	} params = {};

	params.InRegistrationData = InRegistrationData;
	params.InCallback = InCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkAccounts.QueryUsernameRegisterStatus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InUsername                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         InCallback                     (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::QueryUsernameRegisterStatus(const struct FString& InUsername, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkAccounts.QueryUsernameRegisterStatus"));

	struct
	{
		struct FString                 InUsername;
		struct FScriptDelegate         InCallback;
	} params = {};

	params.InUsername = InUsername;
	params.InCallback = InCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkAccounts.QueryEmailRegisterStatus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InEmail                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         InCallback                     (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::QueryEmailRegisterStatus(const struct FString& InEmail, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkAccounts.QueryEmailRegisterStatus"));

	struct
	{
		struct FString                 InEmail;
		struct FScriptDelegate         InCallback;
	} params = {};

	params.InEmail = InEmail;
	params.InCallback = InCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkAccounts.PlatformLogin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InCallback                     (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bIsSharkmobAccountLoginEnabled (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::PlatformLogin(const struct FScriptDelegate& InCallback, bool bIsSharkmobAccountLoginEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkAccounts.PlatformLogin"));

	struct
	{
		struct FScriptDelegate         InCallback;
		bool                           bIsSharkmobAccountLoginEnabled;
	} params = {};

	params.InCallback = InCallback;
	params.bIsSharkmobAccountLoginEnabled = bIsSharkmobAccountLoginEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkAccounts.Login
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InEmail                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 InPassword                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         InCallback                     (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USharkAccounts::Login(const struct FString& InEmail, const struct FString& InPassword, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkAccounts.Login"));

	struct
	{
		struct FString                 InEmail;
		struct FString                 InPassword;
		struct FScriptDelegate         InCallback;
	} params = {};

	params.InEmail = InEmail;
	params.InPassword = InPassword;
	params.InCallback = InCallback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkBlueprintFunctionLibrary.UnregisterApplicationHasReactivatedForSelf
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 InSelf                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USharkBlueprintFunctionLibrary::UnregisterApplicationHasReactivatedForSelf(class UObject* InSelf)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.UnregisterApplicationHasReactivatedForSelf"));

	struct
	{
		class UObject*                 InSelf;
	} params = {};

	params.InSelf = InSelf;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector4
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESharkCustomPrimitiveVector4DataName CustomDataName                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector4                Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDoRuntimeUpdate               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USharkBlueprintFunctionLibrary::SetCustomPrimitiveDataVector4(class UPrimitiveComponent* PrimitiveComponent, ESharkCustomPrimitiveVector4DataName CustomDataName, const struct FVector4& Value, bool bDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector4"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		ESharkCustomPrimitiveVector4DataName CustomDataName;
		struct FVector4                Value;
		bool                           bDoRuntimeUpdate;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;
	params.CustomDataName = CustomDataName;
	params.Value = Value;
	params.bDoRuntimeUpdate = bDoRuntimeUpdate;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector3
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESharkCustomPrimitiveVector3DataName CustomDataName                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDoRuntimeUpdate               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USharkBlueprintFunctionLibrary::SetCustomPrimitiveDataVector3(class UPrimitiveComponent* PrimitiveComponent, ESharkCustomPrimitiveVector3DataName CustomDataName, const struct FVector& Value, bool bDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector3"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		ESharkCustomPrimitiveVector3DataName CustomDataName;
		struct FVector                 Value;
		bool                           bDoRuntimeUpdate;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;
	params.CustomDataName = CustomDataName;
	params.Value = Value;
	params.bDoRuntimeUpdate = bDoRuntimeUpdate;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector2
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESharkCustomPrimitiveVector2DataName CustomDataName                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDoRuntimeUpdate               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USharkBlueprintFunctionLibrary::SetCustomPrimitiveDataVector2(class UPrimitiveComponent* PrimitiveComponent, ESharkCustomPrimitiveVector2DataName CustomDataName, const struct FVector2D& Value, bool bDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector2"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		ESharkCustomPrimitiveVector2DataName CustomDataName;
		struct FVector2D               Value;
		bool                           bDoRuntimeUpdate;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;
	params.CustomDataName = CustomDataName;
	params.Value = Value;
	params.bDoRuntimeUpdate = bDoRuntimeUpdate;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESharkCustomPrimitiveFloatDataName CustomDataName                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDoRuntimeUpdate               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USharkBlueprintFunctionLibrary::SetCustomPrimitiveDataFloat(class UPrimitiveComponent* PrimitiveComponent, ESharkCustomPrimitiveFloatDataName CustomDataName, float Value, bool bDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataFloat"));

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		ESharkCustomPrimitiveFloatDataName CustomDataName;
		float                          Value;
		bool                           bDoRuntimeUpdate;
	} params = {};

	params.PrimitiveComponent = PrimitiveComponent;
	params.CustomDataName = CustomDataName;
	params.Value = Value;
	params.bDoRuntimeUpdate = bDoRuntimeUpdate;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkBlueprintFunctionLibrary.SetCastDynamicShadows
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InPrimitiveComponent           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USharkBlueprintFunctionLibrary::SetCastDynamicShadows(class UPrimitiveComponent* InPrimitiveComponent, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.SetCastDynamicShadows"));

	struct
	{
		class UPrimitiveComponent*     InPrimitiveComponent;
		bool                           InValue;
	} params = {};

	params.InPrimitiveComponent = InPrimitiveComponent;
	params.InValue = InValue;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkBlueprintFunctionLibrary.RegisterApplicationHasReactivated
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USharkBlueprintFunctionLibrary::RegisterApplicationHasReactivated(const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.RegisterApplicationHasReactivated"));

	struct
	{
		struct FScriptDelegate         InDelegate;
	} params = {};

	params.InDelegate = InDelegate;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// DelegateFunction Shark.SharkBlueprintFunctionLibrary.OnAssetsLoaded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// TArray<class UObject*>         InLoadedObjects                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USharkBlueprintFunctionLibrary::OnAssetsLoaded__DelegateSignature(TArray<class UObject*> InLoadedObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction Shark.SharkBlueprintFunctionLibrary.OnAssetsLoaded__DelegateSignature"));

	struct
	{
		TArray<class UObject*>         InLoadedObjects;
	} params = {};

	params.InLoadedObjects = InLoadedObjects;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkBlueprintFunctionLibrary.LoadMultipleObjectsAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<TSoftObjectPtr<class UObject>> SoftObjects                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnLoaded                       (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USharkBlueprintFunctionLibrary::LoadMultipleObjectsAsync(TArray<TSoftObjectPtr<class UObject>> SoftObjects, const struct FScriptDelegate& OnLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.LoadMultipleObjectsAsync"));

	struct
	{
		TArray<TSoftObjectPtr<class UObject>> SoftObjects;
		struct FScriptDelegate         OnLoaded;
	} params = {};

	params.SoftObjects = SoftObjects;
	params.OnLoaded = OnLoaded;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Shark.SharkBlueprintFunctionLibrary.GetPlatformType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// ESharkPlatformType             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ESharkPlatformType USharkBlueprintFunctionLibrary::GetPlatformType()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.GetPlatformType"));

	struct
	{
		ESharkPlatformType             ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Shark.SharkBlueprintFunctionLibrary.GetNumMips
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UTexture2D*              InTexture                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USharkBlueprintFunctionLibrary::GetNumMips(class UTexture2D* InTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Shark.SharkBlueprintFunctionLibrary.GetNumMips"));

	struct
	{
		class UTexture2D*              InTexture;
		int                            ReturnValue;
	} params = {};

	params.InTexture = InTexture;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// DelegateFunction Shark.SharkBlueprintFunctionLibrary.ApplicationLifetimeDelegate__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void USharkBlueprintFunctionLibrary::ApplicationLifetimeDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction Shark.SharkBlueprintFunctionLibrary.ApplicationLifetimeDelegate__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
