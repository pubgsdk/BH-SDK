// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MoviePlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.UpdateCurrentDownKeys
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MoviePlayer_C::UpdateCurrentDownKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.UpdateCurrentDownKeys"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.IsLastVideo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsLastVideo                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MoviePlayer_C::IsLastVideo(bool* bIsLastVideo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.IsLastVideo"));

	struct
	{
		bool                           bIsLastVideo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsLastVideo != nullptr)
		*bIsLastVideo = params.bIsLastVideo;
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.SetCinematicState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InCinematic                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MoviePlayer_C::SetCinematicState(bool InCinematic)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.SetCinematicState"));

	struct
	{
		bool                           InCinematic;
	} params = {};

	params.InCinematic = InCinematic;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.CancelPlayback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MoviePlayer_C::CancelPlayback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.CancelPlayback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_MoviePlayer_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnKeyUp"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.StartPlaying
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PlaySucceeded                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MoviePlayer_C::StartPlaying(bool* PlaySucceeded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.StartPlaying"));

	struct
	{
		bool                           PlaySucceeded;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PlaySucceeded != nullptr)
		*PlaySucceeded = params.PlaySucceeded;
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedPlaying
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MoviePlayer_C::FinishedPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedPlaying"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MoviePlayer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.EndReached
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MoviePlayer_C::EndReached()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.EndReached"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedLoading
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OpenedUrl                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MoviePlayer_C::FinishedLoading(const struct FString& OpenedUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedLoading"));

	struct
	{
		struct FString                 OpenedUrl;
	} params = {};

	params.OpenedUrl = OpenedUrl;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MoviePlayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnMenuBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MoviePlayer_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnMenuBack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.ExecuteUbergraph_TBP_UI_MoviePlayer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MoviePlayer_C::ExecuteUbergraph_TBP_UI_MoviePlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.ExecuteUbergraph_TBP_UI_MoviePlayer"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MoviePlayer_C::OnClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnClosed__DelegateSignature"));

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
