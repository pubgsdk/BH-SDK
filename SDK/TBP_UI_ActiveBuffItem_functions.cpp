// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ActiveBuffItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetRemainingTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Remaining_Time                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffItem_C::GetRemainingTime(float* Remaining_Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetRemainingTime"));

	struct
	{
		float                          Remaining_Time;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Remaining_Time != nullptr)
		*Remaining_Time = params.Remaining_Time;
}


// Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetCurrentProgress
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Progress                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffItem_C::GetCurrentProgress(float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetCurrentProgress"));

	struct
	{
		float                          Progress;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetElapsedTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Elapsed_Time                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffItem_C::GetElapsedTime(float* Elapsed_Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetElapsedTime"));

	struct
	{
		float                          Elapsed_Time;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Elapsed_Time != nullptr)
		*Elapsed_Time = params.Elapsed_Time;
}


// Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ApplyItemData
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              StatusImage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            StatusColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          CurrentDuration                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TotalDuration                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerBuffProgressType         ProgressType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffItem_C::ApplyItemData(class UTexture2D* StatusImage, const struct FLinearColor& StatusColor, float CurrentDuration, float TotalDuration, ETigerBuffProgressType ProgressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ApplyItemData"));

	struct
	{
		class UTexture2D*              StatusImage;
		struct FLinearColor            StatusColor;
		float                          CurrentDuration;
		float                          TotalDuration;
		ETigerBuffProgressType         ProgressType;
	} params = {};

	params.StatusImage = StatusImage;
	params.StatusColor = StatusColor;
	params.CurrentDuration = CurrentDuration;
	params.TotalDuration = TotalDuration;
	params.ProgressType = ProgressType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.CreateItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              StatusImage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            StatusColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TotalDuration                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerBuffProgressType         ProgressType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffItem_C::CreateItem(class UTexture2D* StatusImage, const struct FLinearColor& StatusColor, float TotalDuration, ETigerBuffProgressType ProgressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.CreateItem"));

	struct
	{
		class UTexture2D*              StatusImage;
		struct FLinearColor            StatusColor;
		float                          TotalDuration;
		ETigerBuffProgressType         ProgressType;
	} params = {};

	params.StatusImage = StatusImage;
	params.StatusColor = StatusColor;
	params.TotalDuration = TotalDuration;
	params.ProgressType = ProgressType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.RefreshItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              StatusImage                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            StatusColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          CurrentDuration                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TotalDuration                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerBuffProgressType         ProgressType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffItem_C::RefreshItem(class UTexture2D* StatusImage, const struct FLinearColor& StatusColor, float CurrentDuration, float TotalDuration, ETigerBuffProgressType ProgressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.RefreshItem"));

	struct
	{
		class UTexture2D*              StatusImage;
		struct FLinearColor            StatusColor;
		float                          CurrentDuration;
		float                          TotalDuration;
		ETigerBuffProgressType         ProgressType;
	} params = {};

	params.StatusImage = StatusImage;
	params.StatusColor = StatusColor;
	params.CurrentDuration = CurrentDuration;
	params.TotalDuration = TotalDuration;
	params.ProgressType = ProgressType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.Tick"));

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


// Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ExecuteUbergraph_TBP_UI_ActiveBuffItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ActiveBuffItem_C::ExecuteUbergraph_TBP_UI_ActiveBuffItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ExecuteUbergraph_TBP_UI_ActiveBuffItem"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
