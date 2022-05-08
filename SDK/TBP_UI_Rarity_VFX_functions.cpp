// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Rarity_VFX_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Rarity_VFX_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetGradientTexture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Rarity_VFX_C::SetGradientTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetGradientTexture"));

	struct
	{
		class UTexture2D*              Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Rarity_VFX_C::SetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetColor"));

	struct
	{
		struct FLinearColor            Color;
	} params = {};

	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetIntensity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Intentsity                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Rarity_VFX_C::SetIntensity(float Intentsity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetIntensity"));

	struct
	{
		float                          Intentsity;
	} params = {};

	params.Intentsity = Intentsity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetAspectRatio
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               AspectRatio                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Rarity_VFX_C::SetAspectRatio(const struct FVector2D& AspectRatio)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetAspectRatio"));

	struct
	{
		struct FVector2D               AspectRatio;
	} params = {};

	params.AspectRatio = AspectRatio;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.ExecuteUbergraph_TBP_UI_Rarity_VFX
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Rarity_VFX_C::ExecuteUbergraph_TBP_UI_Rarity_VFX(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.ExecuteUbergraph_TBP_UI_Rarity_VFX"));

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
