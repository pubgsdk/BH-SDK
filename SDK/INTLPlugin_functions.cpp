// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "INTLPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function INTLPlugin.INTLOutputUtility.FormatNoticeRet
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLNoticeResult       Ret                            (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           IsSuccess                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ErrorMsg                       (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UINTLOutputUtility::FormatNoticeRet(const struct FINTLNoticeResult& Ret, bool* IsSuccess, struct FText* ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLOutputUtility.FormatNoticeRet"));

	struct
	{
		struct FINTLNoticeResult       Ret;
		bool                           IsSuccess;
		struct FText                   ErrorMsg;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;
}


// Function INTLPlugin.INTLOutputUtility.FormatBaseRet
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLBaseResult         Ret                            (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           IsSuccess                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ErrorMsg                       (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UINTLOutputUtility::FormatBaseRet(const struct FINTLBaseResult& Ret, bool* IsSuccess, struct FText* ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLOutputUtility.FormatBaseRet"));

	struct
	{
		struct FINTLBaseResult         Ret;
		bool                           IsSuccess;
		struct FText                   ErrorMsg;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;
}


// Function INTLPlugin.INTLOutputUtility.FormatAuthRet
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLAuthResult         Ret                            (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           IsSuccess                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ErrorMsg                       (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UINTLOutputUtility::FormatAuthRet(const struct FINTLAuthResult& Ret, bool* IsSuccess, struct FText* ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLOutputUtility.FormatAuthRet"));

	struct
	{
		struct FINTLAuthResult         Ret;
		bool                           IsSuccess;
		struct FText                   ErrorMsg;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;
}


// Function INTLPlugin.INTLPluginObserver.OnWebViewResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLWebViewResult      Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnWebViewResult(const struct FINTLWebViewResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnWebViewResult"));

	struct
	{
		struct FINTLWebViewResult      Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnUpdateStartRepoNewVersionInfoResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLUpdateStartRepoNewVersionInfo Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnUpdateStartRepoNewVersionInfoResult(const struct FINTLUpdateStartRepoNewVersionInfo& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnUpdateStartRepoNewVersionInfoResult"));

	struct
	{
		struct FINTLUpdateStartRepoNewVersionInfo Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnUpdateResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLUpdateResult       Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnUpdateResult(const struct FINTLUpdateResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnUpdateResult"));

	struct
	{
		struct FINTLUpdateResult       Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnUpdateProgressResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLUpdateProgress     Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnUpdateProgressResult(const struct FINTLUpdateProgress& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnUpdateProgressResult"));

	struct
	{
		struct FINTLUpdateProgress     Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnUpdateOptionalRepoInitResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLUpdateOptionalRepoInitResult Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnUpdateOptionalRepoInitResult(const struct FINTLUpdateOptionalRepoInitResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnUpdateOptionalRepoInitResult"));

	struct
	{
		struct FINTLUpdateOptionalRepoInitResult Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnPushResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLPushResult         Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnPushResult(const struct FINTLPushResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnPushResult"));

	struct
	{
		struct FINTLPushResult         Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnPushBaseResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLBaseResult         Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnPushBaseResult(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnPushBaseResult"));

	struct
	{
		struct FINTLBaseResult         Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnNoticeRequestData
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLNoticeResult       Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnNoticeRequestData(const struct FINTLNoticeResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnNoticeRequestData"));

	struct
	{
		struct FINTLNoticeResult       Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnIPInfoResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLLBSIPInfoResult    Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnIPInfoResult(const struct FINTLLBSIPInfoResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnIPInfoResult"));

	struct
	{
		struct FINTLLBSIPInfoResult    Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnIDTokenResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLIDTokenResult      Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnIDTokenResult(const struct FINTLIDTokenResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnIDTokenResult"));

	struct
	{
		struct FINTLIDTokenResult      Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnFriendResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLFriendResult       Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnFriendResult(const struct FINTLFriendResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnFriendResult"));

	struct
	{
		struct FINTLFriendResult       Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnFriendBaseResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLBaseResult         Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnFriendBaseResult(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnFriendBaseResult"));

	struct
	{
		struct FINTLBaseResult         Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnExtendResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLExtendResult       Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnExtendResult(const struct FINTLExtendResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnExtendResult"));

	struct
	{
		struct FINTLExtendResult       Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnDNSResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLDNSResult          Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnDNSResult(const struct FINTLDNSResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnDNSResult"));

	struct
	{
		struct FINTLDNSResult          Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnDismissLoginUI
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Canceled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnDismissLoginUI(bool Canceled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnDismissLoginUI"));

	struct
	{
		bool                           Canceled;
	} params = {};

	params.Canceled = Canceled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnDirTreeResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLDirTreeResult      Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnDirTreeResult(const struct FINTLDirTreeResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnDirTreeResult"));

	struct
	{
		struct FINTLDirTreeResult      Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnDeviceLevelResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLDeviceLevelResult  Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnDeviceLevelResult(const struct FINTLDeviceLevelResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnDeviceLevelResult"));

	struct
	{
		struct FINTLDeviceLevelResult  Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnCutoutResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCutoutInfoResult       Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnCutoutResult(const struct FCutoutInfoResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnCutoutResult"));

	struct
	{
		struct FCutoutInfoResult       Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnCustomerResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLCustomerResult     Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnCustomerResult(const struct FINTLCustomerResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnCustomerResult"));

	struct
	{
		struct FINTLCustomerResult     Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnComplianceResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLComplianceResult   Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnComplianceResult(const struct FINTLComplianceResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnComplianceResult"));

	struct
	{
		struct FINTLComplianceResult   Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnAuthResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLAuthResult         Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnAuthResult(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnAuthResult"));

	struct
	{
		struct FINTLAuthResult         Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnAuthBaseResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLBaseResult         Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnAuthBaseResult(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnAuthBaseResult"));

	struct
	{
		struct FINTLBaseResult         Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLPluginObserver.OnAccountResult
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FINTLAccountResult      Ret                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLPluginObserver::OnAccountResult(const struct FINTLAccountResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLPluginObserver.OnAccountResult"));

	struct
	{
		struct FINTLAccountResult      Ret;
	} params = {};

	params.Ret = Ret;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.UpdateStop
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            RepoID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TaskID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::UpdateStop(int RepoID, int TaskID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.UpdateStop"));

	struct
	{
		int                            RepoID;
		int                            TaskID;
		bool                           ReturnValue;
	} params = {};

	params.RepoID = RepoID;
	params.TaskID = TaskID;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.UpdateStart
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLUpdateInitInfo     Info                           (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::UpdateStart(const struct FINTLUpdateInitInfo& Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.UpdateStart"));

	struct
	{
		struct FINTLUpdateInitInfo     Info;
		bool                           ReturnValue;
	} params = {};

	params.Info = Info;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.UpdateContinue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            RepoID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::UpdateContinue(int RepoID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.UpdateContinue"));

	struct
	{
		int                            RepoID;
		bool                           ReturnValue;
	} params = {};

	params.RepoID = RepoID;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.UpdateConfig
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TMap<struct FString, struct FString> Cfg                            (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FString                 Project                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::UpdateConfig(TMap<struct FString, struct FString> Cfg, const struct FString& Project)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.UpdateConfig"));

	struct
	{
		TMap<struct FString, struct FString> Cfg;
		struct FString                 Project;
		bool                           ReturnValue;
	} params = {};

	params.Cfg = Cfg;
	params.Project = Project;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.UnregisterPush
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::UnregisterPush(const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.UnregisterPush"));

	struct
	{
		struct FString                 Channel;
	} params = {};

	params.Channel = Channel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.Unbind
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 UID                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::Unbind(EINTLLoginChannel Channel, const struct FString& UID, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.Unbind"));

	struct
	{
		EINTLLoginChannel              Channel;
		struct FString                 UID;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.UID = UID;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ShutDown
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::ShutDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ShutDown"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ShowAccountPicker
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ShowAccountPicker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ShowAccountPicker"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.Share
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLFriendReqInfo      Info                           (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::Share(const struct FINTLFriendReqInfo& Info, const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.Share"));

	struct
	{
		struct FINTLFriendReqInfo      Info;
		struct FString                 Channel;
		bool                           ReturnValue;
	} params = {};

	params.Info = Info;
	params.Channel = Channel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.SetTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Tag                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::SetTag(const struct FString& Channel, const struct FString& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SetTag"));

	struct
	{
		struct FString                 Channel;
		struct FString                 Tag;
	} params = {};

	params.Channel = Channel;
	params.Tag = Tag;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.SetSessionExtraParam
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 extra_json                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::SetSessionExtraParam(const struct FString& extra_json)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SetSessionExtraParam"));

	struct
	{
		struct FString                 extra_json;
	} params = {};

	params.extra_json = extra_json;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.SetDeviceLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::SetDeviceLevel(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SetDeviceLevel"));

	struct
	{
		int                            Level;
	} params = {};

	params.Level = Level;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.SetCrashUserValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Value                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::SetCrashUserValue(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SetCrashUserValue"));

	struct
	{
		struct FString                 Key;
		struct FString                 Value;
	} params = {};

	params.Key = Key;
	params.Value = Value;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.SetCrashUserId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 userId                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::SetCrashUserId(const struct FString& userId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SetCrashUserId"));

	struct
	{
		struct FString                 userId;
	} params = {};

	params.userId = userId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.SetCrashCallback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::SetCrashCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SetCrashCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.SetBuglyAppVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 appVersion                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::SetBuglyAppVersion(const struct FString& appVersion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SetBuglyAppVersion"));

	struct
	{
		struct FString                 appVersion;
	} params = {};

	params.appVersion = appVersion;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.SetAccountInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ChannelID                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 LangType                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            AccountPlatType                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::SetAccountInfo(EINTLLoginChannel Channel, int ChannelID, const struct FString& LangType, int AccountPlatType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SetAccountInfo"));

	struct
	{
		EINTLLoginChannel              Channel;
		int                            ChannelID;
		struct FString                 LangType;
		int                            AccountPlatType;
	} params = {};

	params.Channel = Channel;
	params.ChannelID = ChannelID;
	params.LangType = LangType;
	params.AccountPlatType = AccountPlatType;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.SetAccount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::SetAccount(const struct FString& Channel, const struct FString& Account)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SetAccount"));

	struct
	{
		struct FString                 Channel;
		struct FString                 Account;
	} params = {};

	params.Channel = Channel;
	params.Account = Account;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.SendMessage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLFriendReqInfo      Info                           (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::SendMessage(const struct FINTLFriendReqInfo& Info, const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.SendMessage"));

	struct
	{
		struct FINTLFriendReqInfo      Info;
		struct FString                 Channel;
		bool                           ReturnValue;
	} params = {};

	params.Info = Info;
	params.Channel = Channel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ResetPasswordWithVerifyCode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 VerifyCode                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewPassword                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ResetPasswordWithVerifyCode(const struct FString& Account, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FString& NewPassword, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ResetPasswordWithVerifyCode"));

	struct
	{
		struct FString                 Account;
		struct FString                 VerifyCode;
		struct FString                 PhoneAreaCode;
		struct FString                 NewPassword;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Account = Account;
	params.VerifyCode = VerifyCode;
	params.PhoneAreaCode = PhoneAreaCode;
	params.NewPassword = NewPassword;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ResetPasswordWithOldPassword
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OldPassword                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewPassword                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ResetPasswordWithOldPassword(const struct FString& Account, const struct FString& OldPassword, const struct FString& PhoneAreaCode, const struct FString& NewPassword, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ResetPasswordWithOldPassword"));

	struct
	{
		struct FString                 Account;
		struct FString                 OldPassword;
		struct FString                 PhoneAreaCode;
		struct FString                 NewPassword;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Account = Account;
	params.OldPassword = OldPassword;
	params.PhoneAreaCode = PhoneAreaCode;
	params.NewPassword = NewPassword;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ResetGuest
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ResetGuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ResetGuest"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.RequestVerifyCode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EVerifyCodeType                CodeType                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::RequestVerifyCode(const struct FString& Account, EVerifyCodeType CodeType, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.RequestVerifyCode"));

	struct
	{
		struct FString                 Account;
		EVerifyCodeType                CodeType;
		struct FString                 PhoneAreaCode;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Account = Account;
	params.CodeType = CodeType;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.RequestTrackingAuthorization
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::RequestTrackingAuthorization()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.RequestTrackingAuthorization"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.RequestIPInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::RequestIPInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.RequestIPInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ReportPayStep
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Step                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 StepName                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ErrorCode                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TMap<struct FString, struct FString> ParamsMap                      (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ReportPayStep(int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ReportPayStep"));

	struct
	{
		int                            Step;
		struct FString                 StepName;
		bool                           Result;
		int                            ErrorCode;
		TMap<struct FString, struct FString> ParamsMap;
	} params = {};

	params.Step = Step;
	params.StepName = StepName;
	params.Result = Result;
	params.ErrorCode = ErrorCode;
	params.ParamsMap = ParamsMap;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ReportLoginStep
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Step                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 StepName                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ErrorCode                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TMap<struct FString, struct FString> ParamsMap                      (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ReportLoginStep(int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ReportLoginStep"));

	struct
	{
		int                            Step;
		struct FString                 StepName;
		bool                           Result;
		int                            ErrorCode;
		TMap<struct FString, struct FString> ParamsMap;
	} params = {};

	params.Step = Step;
	params.StepName = StepName;
	params.Result = Result;
	params.ErrorCode = ErrorCode;
	params.ParamsMap = ParamsMap;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ReportException
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExceptionName                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExceptionMsg                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExceptionStack                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TMap<struct FString, struct FString> ExtInfo                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ReportException(int Type, const struct FString& ExceptionName, const struct FString& ExceptionMsg, const struct FString& ExceptionStack, TMap<struct FString, struct FString> ExtInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ReportException"));

	struct
	{
		int                            Type;
		struct FString                 ExceptionName;
		struct FString                 ExceptionMsg;
		struct FString                 ExceptionStack;
		TMap<struct FString, struct FString> ExtInfo;
	} params = {};

	params.Type = Type;
	params.ExceptionName = ExceptionName;
	params.ExceptionMsg = ExceptionMsg;
	params.ExceptionStack = ExceptionStack;
	params.ExtInfo = ExtInfo;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ReportEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TMap<struct FString, struct FString> ParamsMap                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FString                 SpecificChannel                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ReportEvent(const struct FString& EventName, TMap<struct FString, struct FString> ParamsMap, const struct FString& SpecificChannel, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ReportEvent"));

	struct
	{
		struct FString                 EventName;
		TMap<struct FString, struct FString> ParamsMap;
		struct FString                 SpecificChannel;
		struct FString                 ExtraJson;
	} params = {};

	params.EventName = EventName;
	params.ParamsMap = ParamsMap;
	params.SpecificChannel = SpecificChannel;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ReportCustomEventStep
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Step                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 StepName                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ErrorCode                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TMap<struct FString, struct FString> ParamsMap                      (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ReportCustomEventStep(const struct FString& EventName, int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ReportCustomEventStep"));

	struct
	{
		struct FString                 EventName;
		int                            Step;
		struct FString                 StepName;
		bool                           Result;
		int                            ErrorCode;
		TMap<struct FString, struct FString> ParamsMap;
	} params = {};

	params.EventName = EventName;
	params.Step = Step;
	params.StepName = StepName;
	params.Result = Result;
	params.ErrorCode = ErrorCode;
	params.ParamsMap = ParamsMap;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ReportBinary
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Data                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Length                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SpecificChannel                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ReportBinary(const struct FString& EventName, const struct FString& Data, int Length, const struct FString& SpecificChannel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ReportBinary"));

	struct
	{
		struct FString                 EventName;
		struct FString                 Data;
		int                            Length;
		struct FString                 SpecificChannel;
	} params = {};

	params.EventName = EventName;
	params.Data = Data;
	params.Length = Length;
	params.SpecificChannel = SpecificChannel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.RemoveObserver
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UINTLPluginObserver> Observer                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::RemoveObserver(const TScriptInterface<class UINTLPluginObserver>& Observer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.RemoveObserver"));

	struct
	{
		TScriptInterface<class UINTLPluginObserver> Observer;
	} params = {};

	params.Observer = Observer;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.RegisterPush
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::RegisterPush(const struct FString& Channel, const struct FString& Account)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.RegisterPush"));

	struct
	{
		struct FString                 Channel;
		struct FString                 Account;
	} params = {};

	params.Channel = Channel;
	params.Account = Account;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.Register
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Password                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 VerifyCode                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FINTLAccountProfile     userProfile                    (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::Register(const struct FString& Account, const struct FString& Password, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FINTLAccountProfile& userProfile)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.Register"));

	struct
	{
		struct FString                 Account;
		struct FString                 Password;
		struct FString                 VerifyCode;
		struct FString                 PhoneAreaCode;
		struct FINTLAccountProfile     userProfile;
		bool                           ReturnValue;
	} params = {};

	params.Account = Account;
	params.Password = Password;
	params.VerifyCode = VerifyCode;
	params.PhoneAreaCode = PhoneAreaCode;
	params.userProfile = userProfile;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.QueryVerifyCodeStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 VerifyCode                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EVerifyCodeType                CodeType                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::QueryVerifyCodeStatus(const struct FString& Account, const struct FString& VerifyCode, EVerifyCodeType CodeType, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryVerifyCodeStatus"));

	struct
	{
		struct FString                 Account;
		struct FString                 VerifyCode;
		EVerifyCodeType                CodeType;
		struct FString                 PhoneAreaCode;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Account = Account;
	params.VerifyCode = VerifyCode;
	params.CodeType = CodeType;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.QueryUserNameStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 UserName                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::QueryUserNameStatus(const struct FString& UserName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryUserNameStatus"));

	struct
	{
		struct FString                 UserName;
	} params = {};

	params.UserName = UserName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.QueryUserInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::QueryUserInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryUserInfo"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.QueryRegisterStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::QueryRegisterStatus(const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryRegisterStatus"));

	struct
	{
		struct FString                 Account;
		struct FString                 PhoneAreaCode;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Account = Account;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.QueryLegalDocumentsAcceptedVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::QueryLegalDocumentsAcceptedVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryLegalDocumentsAcceptedVersion"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.QueryIsReceiveEmail
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::QueryIsReceiveEmail(const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryIsReceiveEmail"));

	struct
	{
		struct FString                 Account;
		struct FString                 PhoneAreaCode;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Account = Account;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.QueryIsEEA
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Region                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::QueryIsEEA(const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryIsEEA"));

	struct
	{
		struct FString                 Region;
	} params = {};

	params.Region = Region;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.QueryIpByHost
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Host                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::QueryIpByHost(const struct FString& Host)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryIpByHost"));

	struct
	{
		struct FString                 Host;
	} params = {};

	params.Host = Host;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.QueryIDToken
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::QueryIDToken()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryIDToken"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.QueryFriends
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Page                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Count                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsInGame                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::QueryFriends(EINTLLoginChannel Channel, int Page, int Count, bool IsInGame, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryFriends"));

	struct
	{
		EINTLLoginChannel              Channel;
		int                            Page;
		int                            Count;
		bool                           IsInGame;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.Page = Page;
	params.Count = Count;
	params.IsInGame = IsInGame;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.QueryDirTree
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            TreeId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::QueryDirTree(int TreeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryDirTree"));

	struct
	{
		int                            TreeId;
	} params = {};

	params.TreeId = TreeId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.QueryDirNode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            TreeId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NodeId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::QueryDirNode(int TreeId, int NodeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryDirNode"));

	struct
	{
		int                            TreeId;
		int                            NodeId;
	} params = {};

	params.TreeId = TreeId;
	params.NodeId = NodeId;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.QueryDeviceLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::QueryDeviceLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryDeviceLevel"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.QueryDataProtectionAcceptance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::QueryDataProtectionAcceptance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryDataProtectionAcceptance"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.QueryCanBind
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ChannelID                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            AccountPlatType                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::QueryCanBind(int ChannelID, int AccountPlatType, const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryCanBind"));

	struct
	{
		int                            ChannelID;
		int                            AccountPlatType;
		struct FString                 Account;
		struct FString                 PhoneAreaCode;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.ChannelID = ChannelID;
	params.AccountPlatType = AccountPlatType;
	params.Account = Account;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.QueryActiveUser
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::QueryActiveUser()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryActiveUser"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.QueryAccountProfile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::QueryAccountProfile()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.QueryAccountProfile"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.PostNetworkLatencyInSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            LatencyMs                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::PostNetworkLatencyInSession(int LatencyMs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.PostNetworkLatencyInSession"));

	struct
	{
		int                            LatencyMs;
	} params = {};

	params.LatencyMs = LatencyMs;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.PostFrameTimeInSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::PostFrameTimeInSession(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.PostFrameTimeInSession"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.OpenUrl
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EINTLWebViewOrientation        ScreenOrientation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           FullScreenEnable               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           EncryptEnable                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           SystemBrowserEnable            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::OpenUrl(const struct FString& URL, EINTLWebViewOrientation ScreenOrientation, bool FullScreenEnable, bool EncryptEnable, bool SystemBrowserEnable, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.OpenUrl"));

	struct
	{
		struct FString                 URL;
		EINTLWebViewOrientation        ScreenOrientation;
		bool                           FullScreenEnable;
		bool                           EncryptEnable;
		bool                           SystemBrowserEnable;
		struct FString                 ExtraJson;
	} params = {};

	params.URL = URL;
	params.ScreenOrientation = ScreenOrientation;
	params.FullScreenEnable = FullScreenEnable;
	params.EncryptEnable = EncryptEnable;
	params.SystemBrowserEnable = SystemBrowserEnable;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.OnTickEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::OnTickEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.OnTickEvent"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.NoticeRequestData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Region                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 LangType                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::NoticeRequestData(const struct FString& Region, const struct FString& LangType, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.NoticeRequestData"));

	struct
	{
		struct FString                 Region;
		struct FString                 LangType;
		struct FString                 ExtraJson;
		struct FString                 ReturnValue;
	} params = {};

	params.Region = Region;
	params.LangType = LangType;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ModifyProfile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLAccountProfile     userProfile                    (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ModifyProfile(const struct FINTLAccountProfile& userProfile)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ModifyProfile"));

	struct
	{
		struct FINTLAccountProfile     userProfile;
		bool                           ReturnValue;
	} params = {};

	params.userProfile = userProfile;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ModifyLegalDocumentsAcceptedVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 acceptedVersionsJson           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ModifyLegalDocumentsAcceptedVersion(const struct FString& acceptedVersionsJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ModifyLegalDocumentsAcceptedVersion"));

	struct
	{
		struct FString                 acceptedVersionsJson;
		bool                           ReturnValue;
	} params = {};

	params.acceptedVersionsJson = acceptedVersionsJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ModifyDownloadPriority
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            RepoID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TaskID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            DownloadPriority               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ModifyDownloadPriority(int RepoID, int TaskID, int DownloadPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ModifyDownloadPriority"));

	struct
	{
		int                            RepoID;
		int                            TaskID;
		int                            DownloadPriority;
		bool                           ReturnValue;
	} params = {};

	params.RepoID = RepoID;
	params.TaskID = TaskID;
	params.DownloadPriority = DownloadPriority;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ModifyDataProtectionAcceptance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 PPVersion                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 TOSVersion                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ModifyDataProtectionAcceptance(const struct FString& PPVersion, const struct FString& TOSVersion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ModifyDataProtectionAcceptance"));

	struct
	{
		struct FString                 PPVersion;
		struct FString                 TOSVersion;
	} params = {};

	params.PPVersion = PPVersion;
	params.TOSVersion = TOSVersion;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ModifyAccountWithVerifyCode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 OldAccount                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OldAccountVerifyCode           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OldPhoneAreaCode               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewAccount                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewAccountVerifyCode           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewPhoneAreaCode               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ModifyAccountWithVerifyCode(const struct FString& OldAccount, const struct FString& OldAccountVerifyCode, const struct FString& OldPhoneAreaCode, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ModifyAccountWithVerifyCode"));

	struct
	{
		struct FString                 OldAccount;
		struct FString                 OldAccountVerifyCode;
		struct FString                 OldPhoneAreaCode;
		struct FString                 NewAccount;
		struct FString                 NewAccountVerifyCode;
		struct FString                 NewPhoneAreaCode;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.OldAccount = OldAccount;
	params.OldAccountVerifyCode = OldAccountVerifyCode;
	params.OldPhoneAreaCode = OldPhoneAreaCode;
	params.NewAccount = NewAccount;
	params.NewAccountVerifyCode = NewAccountVerifyCode;
	params.NewPhoneAreaCode = NewPhoneAreaCode;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ModifyAccountWithPassword
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 OldAccount                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OldPhoneAreaCode               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Password                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewAccount                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewAccountVerifyCode           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewPhoneAreaCode               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ModifyAccountWithPassword(const struct FString& OldAccount, const struct FString& OldPhoneAreaCode, const struct FString& Password, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ModifyAccountWithPassword"));

	struct
	{
		struct FString                 OldAccount;
		struct FString                 OldPhoneAreaCode;
		struct FString                 Password;
		struct FString                 NewAccount;
		struct FString                 NewAccountVerifyCode;
		struct FString                 NewPhoneAreaCode;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.OldAccount = OldAccount;
	params.OldPhoneAreaCode = OldPhoneAreaCode;
	params.Password = Password;
	params.NewAccount = NewAccount;
	params.NewAccountVerifyCode = NewAccountVerifyCode;
	params.NewPhoneAreaCode = NewPhoneAreaCode;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ModifyAccountWithLoginState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 OldPhoneAreaCode               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewAccount                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewAccountVerifyCode           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 NewPhoneAreaCode               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ModifyAccountWithLoginState(const struct FString& OldPhoneAreaCode, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ModifyAccountWithLoginState"));

	struct
	{
		struct FString                 OldPhoneAreaCode;
		struct FString                 NewAccount;
		struct FString                 NewAccountVerifyCode;
		struct FString                 NewPhoneAreaCode;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.OldPhoneAreaCode = OldPhoneAreaCode;
	params.NewAccount = NewAccount;
	params.NewAccountVerifyCode = NewAccountVerifyCode;
	params.NewPhoneAreaCode = NewPhoneAreaCode;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.MarkSessionLoad
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SessionName                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 extra_json                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::MarkSessionLoad(const struct FString& SessionName, const struct FString& extra_json)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.MarkSessionLoad"));

	struct
	{
		struct FString                 SessionName;
		struct FString                 extra_json;
	} params = {};

	params.SessionName = SessionName;
	params.extra_json = extra_json;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.MarkSessionClosed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::MarkSessionClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.MarkSessionClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.Logout
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::Logout(EINTLLoginChannel Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.Logout"));

	struct
	{
		EINTLLoginChannel              Channel;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.LoginWithVerifyCode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Password                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 VerifyCode                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PermissionList                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::LoginWithVerifyCode(EINTLLoginChannel Channel, const struct FString& Account, const struct FString& Password, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FString& PermissionList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LoginWithVerifyCode"));

	struct
	{
		EINTLLoginChannel              Channel;
		struct FString                 Account;
		struct FString                 Password;
		struct FString                 VerifyCode;
		struct FString                 PhoneAreaCode;
		struct FString                 PermissionList;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.Account = Account;
	params.Password = Password;
	params.VerifyCode = VerifyCode;
	params.PhoneAreaCode = PhoneAreaCode;
	params.PermissionList = PermissionList;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.LoginWithPassword
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Password                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PhoneAreaCode                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 PermissionList                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::LoginWithPassword(EINTLLoginChannel Channel, const struct FString& Account, const struct FString& Password, const struct FString& PhoneAreaCode, const struct FString& PermissionList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LoginWithPassword"));

	struct
	{
		EINTLLoginChannel              Channel;
		struct FString                 Account;
		struct FString                 Password;
		struct FString                 PhoneAreaCode;
		struct FString                 PermissionList;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.Account = Account;
	params.Password = Password;
	params.PhoneAreaCode = PhoneAreaCode;
	params.PermissionList = PermissionList;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.LoginWithMappedChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 LoginMode                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Permissions                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::LoginWithMappedChannel(EINTLLoginChannel Channel, const struct FString& LoginMode, const struct FString& Permissions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LoginWithMappedChannel"));

	struct
	{
		EINTLLoginChannel              Channel;
		struct FString                 LoginMode;
		struct FString                 Permissions;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.LoginMode = LoginMode;
	params.Permissions = Permissions;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.LoginWithChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 LoginMode                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::LoginWithChannel(EINTLLoginChannel Channel, const struct FString& LoginMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LoginWithChannel"));

	struct
	{
		EINTLLoginChannel              Channel;
		struct FString                 LoginMode;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.LoginMode = LoginMode;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.LoginWithBoundChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 LoginMode                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::LoginWithBoundChannel(EINTLLoginChannel Channel, const struct FString& LoginMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LoginWithBoundChannel"));

	struct
	{
		EINTLLoginChannel              Channel;
		struct FString                 LoginMode;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.LoginMode = LoginMode;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.Login
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Permissions                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::Login(EINTLLoginChannel Channel, const struct FString& Permissions, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.Login"));

	struct
	{
		EINTLLoginChannel              Channel;
		struct FString                 Permissions;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.Permissions = Permissions;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.LogCrashInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLCrashLevel                Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Tag                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Log                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::LogCrashInfo(EINTLCrashLevel Level, const struct FString& Tag, const struct FString& Log)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LogCrashInfo"));

	struct
	{
		EINTLCrashLevel                Level;
		struct FString                 Tag;
		struct FString                 Log;
	} params = {};

	params.Level = Level;
	params.Tag = Tag;
	params.Log = Log;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.LoadCutoutData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::LoadCutoutData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LoadCutoutData"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.LaunchLoginUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::LaunchLoginUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LaunchLoginUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.LaunchCustomerUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLCustomerUserProfile userProfile                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::LaunchCustomerUI(const struct FINTLCustomerUserProfile& userProfile)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LaunchCustomerUI"));

	struct
	{
		struct FINTLCustomerUserProfile userProfile;
		bool                           ReturnValue;
	} params = {};

	params.userProfile = userProfile;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.LaunchAccountUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Type                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::LaunchAccountUI(int Type, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.LaunchAccountUI"));

	struct
	{
		int                            Type;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Type = Type;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.IsAppInstalled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::IsAppInstalled(const struct FString& Channel, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.IsAppInstalled"));

	struct
	{
		struct FString                 Channel;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.InitAnalytics
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::InitAnalytics()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.InitAnalytics"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.Init
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.Init"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.GetSDKVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::GetSDKVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetSDKVersion"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetIpByHost
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Host                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::GetIpByHost(const struct FString& Host)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetIpByHost"));

	struct
	{
		struct FString                 Host;
		struct FString                 ReturnValue;
	} params = {};

	params.Host = Host;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetInstanceIDAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::GetInstanceIDAsync(const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetInstanceIDAsync"));

	struct
	{
		struct FString                 Channel;
		struct FString                 ReturnValue;
	} params = {};

	params.Channel = Channel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetInstanceID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::GetInstanceID(const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetInstanceID"));

	struct
	{
		struct FString                 Channel;
		struct FString                 ReturnValue;
	} params = {};

	params.Channel = Channel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetIDTokenResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLIDTokenResult      jwtRet                         (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::GetIDTokenResult(struct FINTLIDTokenResult* jwtRet)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetIDTokenResult"));

	struct
	{
		struct FINTLIDTokenResult      jwtRet;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (jwtRet != nullptr)
		*jwtRet = params.jwtRet;

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetEncryptUrl
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::GetEncryptUrl(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetEncryptUrl"));

	struct
	{
		struct FString                 URL;
		struct FString                 ReturnValue;
	} params = {};

	params.URL = URL;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetDeviceLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UINTLSDKAPI::GetDeviceLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetDeviceLevel"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetCurrentResourceVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::GetCurrentResourceVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetCurrentResourceVersion"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetCurrentAppVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::GetCurrentAppVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetCurrentAppVersion"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetConfig
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DefaultVal                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Project                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::GetConfig(const struct FString& Key, const struct FString& DefaultVal, const struct FString& Project)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetConfig"));

	struct
	{
		struct FString                 Key;
		struct FString                 DefaultVal;
		struct FString                 Project;
		struct FString                 ReturnValue;
	} params = {};

	params.Key = Key;
	params.DefaultVal = DefaultVal;
	params.Project = Project;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.GetAuthResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FINTLAuthResult         LoginRet                       (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::GetAuthResult(struct FINTLAuthResult* LoginRet)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.GetAuthResult"));

	struct
	{
		struct FINTLAuthResult         LoginRet;
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LoginRet != nullptr)
		*LoginRet = params.LoginRet;

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ExtendInvoke
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtendMethodName               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ParamsJson                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UINTLSDKAPI::ExtendInvoke(EINTLLoginChannel Channel, const struct FString& ExtendMethodName, const struct FString& ParamsJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ExtendInvoke"));

	struct
	{
		EINTLLoginChannel              Channel;
		struct FString                 ExtendMethodName;
		struct FString                 ParamsJson;
		struct FString                 ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.ExtendMethodName = ExtendMethodName;
	params.ParamsJson = ParamsJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.DownloadOptionalRepoFiles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            RepoID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            DownloadPriority               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         FilesPath                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UINTLSDKAPI::DownloadOptionalRepoFiles(int RepoID, int DownloadPriority, TArray<struct FString> FilesPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.DownloadOptionalRepoFiles"));

	struct
	{
		int                            RepoID;
		int                            DownloadPriority;
		TArray<struct FString>         FilesPath;
		int                            ReturnValue;
	} params = {};

	params.RepoID = RepoID;
	params.DownloadPriority = DownloadPriority;
	params.FilesPath = FilesPath;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.DismissLoginUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Canceled                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::DismissLoginUI(bool Canceled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.DismissLoginUI"));

	struct
	{
		bool                           Canceled;
	} params = {};

	params.Canceled = Canceled;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.DeleteTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Tag                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::DeleteTag(const struct FString& Channel, const struct FString& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.DeleteTag"));

	struct
	{
		struct FString                 Channel;
		struct FString                 Tag;
	} params = {};

	params.Channel = Channel;
	params.Tag = Tag;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.DeleteLocalNotifications
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::DeleteLocalNotifications(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.DeleteLocalNotifications"));

	struct
	{
		struct FString                 Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.DeleteAccount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Account                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::DeleteAccount(const struct FString& Channel, const struct FString& Account)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.DeleteAccount"));

	struct
	{
		struct FString                 Channel;
		struct FString                 Account;
	} params = {};

	params.Channel = Channel;
	params.Account = Account;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ComplianceSetUserProfile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 GameID                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 OpenId                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Token                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ChannelID                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Region                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::ComplianceSetUserProfile(const struct FString& GameID, const struct FString& OpenId, const struct FString& Token, int ChannelID, const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ComplianceSetUserProfile"));

	struct
	{
		struct FString                 GameID;
		struct FString                 OpenId;
		struct FString                 Token;
		int                            ChannelID;
		struct FString                 Region;
		bool                           ReturnValue;
	} params = {};

	params.GameID = GameID;
	params.OpenId = OpenId;
	params.Token = Token;
	params.ChannelID = ChannelID;
	params.Region = Region;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.ComplianceSetParentCertificateStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EComplianceParentCertificateStatus Status                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ComplianceSetParentCertificateStatus(EComplianceParentCertificateStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ComplianceSetParentCertificateStatus"));

	struct
	{
		EComplianceParentCertificateStatus Status;
	} params = {};

	params.Status = Status;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ComplianceSetEUAgreeStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EComplianceAgreeStatus         Status                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ComplianceSetEUAgreeStatus(EComplianceAgreeStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ComplianceSetEUAgreeStatus"));

	struct
	{
		EComplianceAgreeStatus         Status;
	} params = {};

	params.Status = Status;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ComplianceSetAdulthood
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EComplianceAgeStatus           Status                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ComplianceSetAdulthood(EComplianceAgeStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ComplianceSetAdulthood"));

	struct
	{
		EComplianceAgeStatus           Status;
	} params = {};

	params.Status = Status;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ComplianceSendEmail
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Email                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 UserName                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ComplianceSendEmail(const struct FString& Email, const struct FString& UserName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ComplianceSendEmail"));

	struct
	{
		struct FString                 Email;
		struct FString                 UserName;
	} params = {};

	params.Email = Email;
	params.UserName = UserName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ComplianceQueryUserStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::ComplianceQueryUserStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ComplianceQueryUserStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ComplianceCommitBirthday
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            BirthdayYear                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            BirthdayMonth                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            BirthdayDay                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ComplianceCommitBirthday(int BirthdayYear, int BirthdayMonth, int BirthdayDay)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ComplianceCommitBirthday"));

	struct
	{
		int                            BirthdayYear;
		int                            BirthdayMonth;
		int                            BirthdayDay;
	} params = {};

	params.BirthdayYear = BirthdayYear;
	params.BirthdayMonth = BirthdayMonth;
	params.BirthdayDay = BirthdayDay;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.CollectionStop
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::CollectionStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.CollectionStop"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.CollectionResume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLSDKAPI::CollectionResume()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.CollectionResume"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.ClearLocalNotifications
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::ClearLocalNotifications(const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.ClearLocalNotifications"));

	struct
	{
		struct FString                 Channel;
	} params = {};

	params.Channel = Channel;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.CheckOptionalRepoFiles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            RepoID                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         FilesPath                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FINTLUpdateOptionalRepoFilesStatus> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FINTLUpdateOptionalRepoFilesStatus> UINTLSDKAPI::CheckOptionalRepoFiles(int RepoID, TArray<struct FString> FilesPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.CheckOptionalRepoFiles"));

	struct
	{
		int                            RepoID;
		TArray<struct FString>         FilesPath;
		TArray<struct FINTLUpdateOptionalRepoFilesStatus> ReturnValue;
	} params = {};

	params.RepoID = RepoID;
	params.FilesPath = FilesPath;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.CheckActiveUser
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::CheckActiveUser()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.CheckActiveUser"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.CallJS
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 JsonJsParam                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::CallJS(const struct FString& JsonJsParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.CallJS"));

	struct
	{
		struct FString                 JsonJsParam;
	} params = {};

	params.JsonJsParam = JsonJsParam;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.BuildMapWithLoggedinChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::BuildMapWithLoggedinChannel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.BuildMapWithLoggedinChannel"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.BindWithLoggedinChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::BindWithLoggedinChannel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.BindWithLoggedinChannel"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.Bind
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EINTLLoginChannel              Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Permissions                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ExtraJson                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::Bind(EINTLLoginChannel Channel, const struct FString& Permissions, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.Bind"));

	struct
	{
		EINTLLoginChannel              Channel;
		struct FString                 Permissions;
		struct FString                 ExtraJson;
		bool                           ReturnValue;
	} params = {};

	params.Channel = Channel;
	params.Permissions = Permissions;
	params.ExtraJson = ExtraJson;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.AutoLogin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLSDKAPI::AutoLogin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.AutoLogin"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLSDKAPI.AddObserver
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UINTLPluginObserver> Observer                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::AddObserver(const TScriptInterface<class UINTLPluginObserver>& Observer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.AddObserver"));

	struct
	{
		TScriptInterface<class UINTLPluginObserver> Observer;
	} params = {};

	params.Observer = Observer;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.AddLocalNotificationIOS
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FINTLLocalNotificationIOS LocalNotification              (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::AddLocalNotificationIOS(const struct FString& Channel, const struct FINTLLocalNotificationIOS& LocalNotification)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.AddLocalNotificationIOS"));

	struct
	{
		struct FString                 Channel;
		struct FINTLLocalNotificationIOS LocalNotification;
	} params = {};

	params.Channel = Channel;
	params.LocalNotification = LocalNotification;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLSDKAPI.AddLocalNotification
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Channel                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FINTLLocalNotification  LocalNotification              (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UINTLSDKAPI::AddLocalNotification(const struct FString& Channel, const struct FINTLLocalNotification& LocalNotification)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLSDKAPI.AddLocalNotification"));

	struct
	{
		struct FString                 Channel;
		struct FINTLLocalNotification  LocalNotification;
	} params = {};

	params.Channel = Channel;
	params.LocalNotification = LocalNotification;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function INTLPlugin.INTLUtility.Regular
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Str                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Reg                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UINTLUtility::Regular(const struct FString& Str, const struct FString& Reg)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLUtility.Regular"));

	struct
	{
		struct FString                 Str;
		struct FString                 Reg;
		bool                           ReturnValue;
	} params = {};

	params.Str = Str;
	params.Reg = Reg;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLUtility.RefreshCurToastCnt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ChangeCnt                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UINTLUtility::RefreshCurToastCnt(int ChangeCnt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLUtility.RefreshCurToastCnt"));

	struct
	{
		int                            ChangeCnt;
		int                            ReturnValue;
	} params = {};

	params.ChangeCnt = ChangeCnt;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLUtility.GetNewToastOrder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UINTLUtility::GetNewToastOrder()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLUtility.GetNewToastOrder"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function INTLPlugin.INTLUtility.ForceCrash
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UINTLUtility::ForceCrash()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function INTLPlugin.INTLUtility.ForceCrash"));

	struct
	{
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
