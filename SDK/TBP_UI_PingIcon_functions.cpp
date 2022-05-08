// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PingIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.SetPingIcons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              BG_Texture                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Border_Texture                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               Ping_Size                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               Icon_Offset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               ImageSizeMultiplier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingIcon_C::SetPingIcons(class UTexture2D* BG_Texture, class UTexture2D* Border_Texture, const struct FVector2D& Ping_Size, const struct FVector2D& Icon_Offset, const struct FVector2D& ImageSizeMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.SetPingIcons"));

	struct
	{
		class UTexture2D*              BG_Texture;
		class UTexture2D*              Border_Texture;
		struct FVector2D               Ping_Size;
		struct FVector2D               Icon_Offset;
		struct FVector2D               ImageSizeMultiplier;
	} params = {};

	params.BG_Texture = BG_Texture;
	params.Border_Texture = Border_Texture;
	params.Ping_Size = Ping_Size;
	params.Icon_Offset = Icon_Offset;
	params.ImageSizeMultiplier = ImageSizeMultiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetHorizontalIconOffset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          OutIconOffset                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingIcon_C::GetHorizontalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetHorizontalIconOffset"));

	struct
	{
		float                          OutIconOffset;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;
}


// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetVerticalIconOffset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          OutIconOffset                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingIcon_C::GetVerticalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetVerticalIconOffset"));

	struct
	{
		float                          OutIconOffset;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;
}


// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.OnPingDataUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPingClientData*    InPingData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingIcon_C::OnPingDataUpdated(class UTigerPingClientData* InPingData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.OnPingDataUpdated"));

	struct
	{
		class UTigerPingClientData*    InPingData;
	} params = {};

	params.InPingData = InPingData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.ExecuteUbergraph_TBP_UI_PingIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingIcon_C::ExecuteUbergraph_TBP_UI_PingIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.ExecuteUbergraph_TBP_UI_PingIcon"));

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
